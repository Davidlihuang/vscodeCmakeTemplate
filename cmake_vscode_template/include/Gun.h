#pragma once
#include <string>
class Gun
{
public:
    Gun(std::string type){
        this->_type = type;
        this->_bullet_count = 0;
    }
    void addBullet(int bullet_num);
    bool shot();
private:
    int  _bullet_count;
    std::string _type;
};