#include "../include/ZadString.h"

#include <iostream>
#include <string>

using namespace std;
void ZadString::Uruchom(){
    std::string napis = "Programowanie";
    std::string drugi = "C++";
    std::cout << "Napis: " << napis << std::endl;
    std::cout << "empty(): "
              << napis.empty()
              << std::endl;
    std::cout << "size(): "
              << napis.size()
              << std::endl;
    std::cout << "length(): "
              << napis.length()
              << std::endl;
    std::cout << "at(0): "
              << napis.at(0)
              << std::endl;
    std::cout << "find(\"gram\"): "
              << napis.find("gram")
              << std::endl;
    std::cout << "substr(0,6): "
              << napis.substr(0,6)
              << std::endl;
    napis.append(" C++");
    std::cout << "append(): "
              << napis
              << std::endl;
    napis.erase(0, 7);
    std::cout << "erase(): "
              << napis
              << std::endl;
    napis.swap(drugi);
    std::cout << "Po swap()" << std::endl;
    std::cout << "napis = "
              << napis
              << std::endl;
    std::cout << "drugi = "
              << drugi
              << std::endl;
    drugi.clear();
    std::cout << "Po clear()" << std::endl;
    std::cout << "empty(): "
              << drugi.empty()
              << std::endl;
}