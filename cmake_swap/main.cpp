#include "swap.h"

int main()
{

    swap Myswap(10, 20);
    Myswap.printInfo();
    Myswap.run();
    Myswap.printInfo();

    swap Myswap2(40, 30);
    Myswap2.printInfo();
    Myswap2.run();
    Myswap2.printInfo();
    
    return 0;
}