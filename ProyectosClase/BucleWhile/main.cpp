#include <iostream>

//using namespace std;

int main()
{
    int b{1};
    while(b < 100)
    {
        if(b % 3 == 0)
            std::cout << b << std::endl;
        b++;
    }
    return 0;
}
