#include <iostream>
#include <fstream>

int main(int argc, char** argv)
{
	int star = 0;
	int star2 = 0;
	int fuel;
	std::ifstream infile("day1.txt");

	while (infile >> fuel)
	{
		star += fuel / 3 - 2;
		while (fuel / 3 - 2 >= 0)
		{
			fuel = fuel / 3 - 2;
			star2 += fuel;
		}
	}

	std::cout << "Day 1 star 1 = " << star << "\n";
	std::cout << "Day 1 star 2 = " << star2 << "\n";
}