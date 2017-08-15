//#pragma once
//#include <random>
//#include <list>
//#include <string>
//using namespace std;
//
//class Bunny
//{
//public:
//	list<Bunny> bunnies;
//	bool genderM = true;
//	bool genderF = false;
//	bool adultBunny = false;
//	string color;
//	string name;
//	int age;
//	int bunniesM = 0;
//	int bunniesF = 0;
//	int deathBunnies;
//	bool radioactive_Mutant_Vampire_Bunny = false;
//
//	Bunny()
//	{
//		
//	}
//
//	void convert2MurderBunnies()
//	{
//
//	}
//	void Start()
//	{
//		Bunny* bunnyPtr;
//		for (int i = 0; i < 5; i++)
//		{
//			bunnyPtr = new Bunny();
//			int rd = rand() % 100 + 1;
//			if (rd % 4 == 0)
//			{
//				bunnyPtr->color = "white";
//			}
//			else if (rd % 4 == 1)
//			{
//				bunnyPtr->color = "brown";
//			}
//			else if (rd % 4 == 2)
//			{
//				bunnyPtr->color = "white";
//			}
//			else if (rd % 4 == 3)
//			{
//				bunnyPtr->color = "spotted";
//			}
//			bunnyPtr->age += 1;
//			bunnies.assign(i, *bunnyPtr);
//		}
//	};
//
//	void Update()
//	{
//		Bunny bunnyPtr;
//		for (auto& iter : bunnies)
//		{
//		}
//	}
//};
