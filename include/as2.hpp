#pragma once

#include <string>
#include <iostream>
#include <random>
#include <memory>

namespace homework {

  // Random number generator setup
  inline std::random_device rd;
  inline std::mt19937 gen(rd()); 
  inline std::uniform_real_distribution<double> dist(0.0, 1.0);
  // to generate a random number between 0 and 1, use auto random_number = dist(gen);

  // Base class for entities
  // Has a implemented method getName()
  // Has a pure virtual method attack()
  // Has a pure virtual method clone() to support polymorphic copying
  // TO DO: Nothing, everything is implemented for you
  struct Entity {
      explicit Entity(const std::string name) : name{std::move(name)} {}
      virtual ~Entity() = default;
      virtual void attack() const = 0;
      std::string getName() const {
        return name;
      }

      virtual std::unique_ptr<Entity> clone() const = 0;
    protected:
      std::string name;
  };
  
  // as 2.1
  // Derived class Knight
  // TO DO: implement attack() and clone() and setWeapon()
  // Should have a private member variable for weapon (std::string)
  // Note: use std::make_unique in clone() and the this pointer to copy the object using chatGPT is okay for this purpose
  // The attack should use std::cout to print something like "<name> swings a <weapon>\n"
  // The setWeapon() method should set the weapon variable (the private member variable) 

  class Knight : public Entity {

   private:

   std::string Weapon;

   public:

   //error, cannot bind non-const lvalue reference of type std::string&

   //compilation error related to & and Entity(name)

   Knight(const std::string& name) : Entity(name) {}
   //Knight(const Knight&) = default;
   //default is set to allow cloning, std::move(name)

   //remember, void functions do not return objects

   void setWeapon(const std::string& W) {
    Weapon = W;
  
   }

   void attack() const override {
    std::cout << name << " swings a great " << Weapon << "\n";
   }

   std::unique_ptr<Entity> clone() const override {
    return std::make_unique<Knight>(*this);
   }

   };

  
  // as 2.2
  // Derived class Sorcerer
  // TO DO: implement attack() and clone() and setAbility()
  // Same as the Knight class

  class Sorcerer : public Entity {

    private: 

    std::string Ability;

    public:

    Sorcerer(const std::string& name) : Entity(name) {}
    //Sorcerer(const Sorcerer&) = default;

    void setAbility(const std::string& A) {
      Ability = A;
    }

    void attack() const override {
      std::cout << name << " uses " << Ability << "\n";
    }

    std::unique_ptr<Entity> clone() const override {
    return std::make_unique<Sorcerer>(*this);
   }


  };

  // as 2.3 (This is a stretch goal, hand it in, and if it does not work, you can still pass the assignment)
  // Duel class template
  // TO DO: create a struct/class called Duel that is templated by two types (T1 and T2)
  // The constructor should take two pointers (T1* and T2*)
  // The fight() method should:
  // - call attack() on both entities
  // - randomly select one of the two entities as the winner (use the random number generator above)
  // - print to std::cout "<name> wins the duel!\n"
  // - return a std::unique_ptr<Entity> to the winner (use clone() to copy the object)

  //template typename is used as a sort of pointer to the classes

  //template <typename T1, typename T2> 

  //class Duel {

    //private:

    //T1* combatant1; 

    //T2* combatant2;

    //public:

    //Duel(T1* one, T2* two) : combatant1(one), combatant2(two) {}

    //double victory = dist(gen);

    // the -> operator goes through the pointers combatant1/2 to the 
    // attached classes to access the member functions, here attack()

    // the smart pointer unique refers to anything coming from the entity class 
    // to which the combatant classes are attached
    //std::unique_ptr<Entity> Fight() const {
      //combatant1->attack();
      //combatant2->attack();
    //}

    //if the number is higher or lower than 0.5, one or the other, how, another pointer?
    //if exactly 0.5, double fatality. IF statement.

    //how to call, attach getName, a new pointer is likely needed to acces getName and clone. 

    //std::cout << getName() << ", Hail the Victorious!" << std::endl;


  //};



} // namespace homework

