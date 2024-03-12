


#include <iostream>
#include <iomanip>

class Entity 
{
	public:
		float X, Y;
	void Move(float xa, float ya)
	{
		X += xa;
		Y += ya;
	}
	void PrintPos()
	{
		std::cout << "x = " << X << std::endl;
		std::cout << "y = " << Y << std::endl;
	}
};


class Player : public Entity
{

public:
	const char* Name;

	void PrintName()
	{
		std::cout << Name << std::endl;

	}
	void SetName(const char*name)
	{
		Name = name;
	}
};


int main()
{
	Player p;

	p.Move(5, 5);
	p.SetName("Hi");
	p.PrintName();
	p.PrintPos();

	// std::cin.get();
	return(0);
}