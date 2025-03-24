#include <iostream>

// using namespace std;

void print(std::string input)
{
    std::cout << input << std::endl;
}

int main()
{
    int n = 123;
    std::cout << &n << std::endl;
    std::cout << **n << std::endl;
    std::string a;
    std::cin >> a;
    print(a);
    return 0;
}