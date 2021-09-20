#include <iostream>
#include "Soldier.h"
#include "Gun.h"
void test()
{
    Soldier sanduo("xusanduo");
    sanduo.addGun(new Gun("AK47"));
    sanduo.addBulletToGun(30);
    sanduo.fire();
}
int main()
{
    std::cout << "this is a test string" << std::endl;
    test();
    return 0;
}
