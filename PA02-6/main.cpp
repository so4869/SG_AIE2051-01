#include <iostream>
using namespace std;

int main(void)
{
    int num;
    cin >> num;

    switch (num) {
        case 3:
        case 4:
        case 5:
            std::cout << "num : 3 or 4 or 5" << std::endl;
        break;
        case 6:
        case 7:
        case 8:
            std::cout << "num : 6 or 7 or 8" << std::endl;
        break;
        default:
            std::cout << "undefined" << std::endl;
    }

    return 0;
}
