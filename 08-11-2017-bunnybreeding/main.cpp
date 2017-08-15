#include "Bunny.h"
#include <iostream>
#include <vector>

int main()
{
	std::vector<Bunny> bunnies;
	size_t femaleCount = 0;
	size_t maleCount = 0;
	size_t vampireCount = 0;
	//for(init;condition;expression)

	for (int i = 0; i < 50; ++i)
	{
		Bunny*b = new Bunny();
		if (i < 5)
			b->SetColor(rand() % 4);
		bunnies.push_back(*b);
	}

	for (auto& bunny : bunnies)
	{
		(bunny.m_vampire) ? vampireCount++ : vampireCount;
		(bunny.m_gender == false) ? femaleCount++ : maleCount++;
	}



	system("pause");
	return 0;
}
