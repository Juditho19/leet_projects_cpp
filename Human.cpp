#include <iostream>
#include <string>

class Human {
    public:
        std::string name;
        std::string occupation;
        int age;


//functions in classes- methods
        void eat() {
            std::cout <<"This human is eating\n";
        }
        void drink() {
                std::cout <<"This human is drinking\n";
            }
        void sleep() {
                std::cout <<"This human is sleeping\n";
            }

};


int main() {
    Human human1;
    human1.name= "Rick";
    human1.occupation = "Scientist";
    human1.age= 30;

    std::cout<<human1.name<<"\n";
    std::cout<<human1.occupation<<"\n";
    std::cout<<human1.age<<"\n";


    // human1.eat();
    // human1.drink();
    // human1.sleep();
    return 0;
}