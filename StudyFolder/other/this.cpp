

#include <iostream>
#include <string>

class Entity {


    public:
        int x, y; 

    Entity(int x, int y)
    {
        this->x = x;
        this->y = y;
    }


    int GetX() const
    {
        const Entity* e = this;

        return x;
    }




};


int main() {
    std::cin.get();
}