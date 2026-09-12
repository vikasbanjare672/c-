#include <iostream>

enum Day {sunday ,monday , tue, weds, thr, fri , sat};

int main(){

    // enums = a user defined data type that consists of paired named-integer constants.
    //         GREAt if you have a set of potential options....

    Day today = monday;

    switch (today)
    {
    case sunday:
        std::cout << "HAHA FUCK!!!!";
        break;

    case monday:
    std::cout << "HAHA you said 'sex' very funny very funny!!!!";
    break;

    case tue:
    std::cout << "SYBAU!!!!";
    break;

    case weds:
    std::cout << "HAHA HEHE!!!!";
    break;

    case thr:
    std::cout << "HAHA GOTEFODE!!!!";
    break;

    case fri:
    std::cout << "HAHA BITCH!!!!";
    break;

    case sat:
    std::cout << "HAHA!!!!";
    break;

    default:
        break;
    }

    return 0;
}