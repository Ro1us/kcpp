# \author: Arkadiusz Bubak arkadiusz@bubak.pl
# \date 2020.02.21
# \brief Kurs C++
# \version v0.03

cmake_minimum_required(VERSION 3.14)

project(kcpp
        VERSION 0.02
        LANGUAGES CXX
        DESCRIPTION "Kurs C++ Project"
)

if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Debug CACHE STRING "Choose build type." FORCE)
endif()

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if(MSVC)
  add_compile_options(/W3)
else()
  add_compile_options(-Wall -Wextra -Wpedantic -Wno-unused-variable)
endif()

file(GLOB_RECURSE APP_SOURCES CONFIGURE_DEPENDS "src/*.cc")
if(NOT APP_SOURCES)
  message(FATAL_ERROR "Nie znaleziono plików źródłowych!")

endif()
foreach(sourcefile ${APP_SOURCES})
  string(FIND "${sourcefile}" "ZadClassKcpp" FOUND_ZADCLASS)
  if(FOUND_ZADCLASS EQUAL -1)
    get_filename_component(target_name ${sourcefile} NAME_WE)
    add_executable(${target_name}
            ${sourcefile}
    )
    target_include_directories(${target_name}
            PRIVATE
            ${CMAKE_CURRENT_SOURCE_DIR}/include
    )
  endif()
endforeach()
add_executable(ZadClassKcpp
        src/ZadStudent/ZadClassKcpp/main.cc
        src/ZadStudent/ZadClassKcpp/src/ZadString.cc
        src/ZadStudent/ZadClassKcpp/src/ZadPole.cc
        src/ZadStudent/ZadClassKcpp/src/ZadDodaj.cc
        src/ZadStudent/ZadClassKcpp/src/ZadPlus.cc
        src/ZadStudent/ZadClassKcpp/src/ZadSuma.cc
        src/ZadStudent/ZadClassKcpp/src/ZadMax.cc
        src/ZadStudent/ZadClassKcpp/src/ZadParzysta.cc
        src/ZadStudent/ZadClassKcpp/src/ZadClass.cc
        src/ZadStudent/ZadClassKcpp/src/ZadKonstruktor.cc
        src/ZadStudent/ZadClassKcpp/src/ZadMetodyAbstrakcyjne.cc
)

target_include_directories(
        ZadClassKcpp
        PRIVATE
        src/ZadStudent/ZadClassKcpp/include
)