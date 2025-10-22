/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

#include "as1.hpp"
#include "as2.hpp"
#include <iostream>

using namespace homework;

int main() { 

    int d = 1;
    int e = 3; 
    int f = 5;

    homework::swap_ptr(&d, &e, &f);

    std::cout << d << std::endl;
    std::cout << e << std::endl;
    std::cout << f << std::endl;

    //for as2.hpp

    //creating new object Dat for the main, attached to UniqueData

    homework::UniqueData Dat(11);

    std::cout << Dat.get() << std::endl;

    Dat.set(21);

    std::cout << Dat.get() << std::endl;

    homework::Knight K1{"Warden"};
    K1.setWeapon("German Longsword");
    K1.attack();

    auto KnightClone = K1.clone();
    KnightClone->getName();

    homework::Sorcerer S1{"Denken"};
    S1.setAbility("Energokinesis");
    S1.attack();

    auto SorcClone = S1.clone();
    SorcClone->getName();



    //homework::Knight K("Warden");
    //K.setWeapon("Toothed Longsword");

    //homework::Sorcerer S("Denken");
    //S.setAbility("Telekinesis");

    //homework::Duel<homework::Knight, homework::Sorcerer> 

    return 0;
  
}

