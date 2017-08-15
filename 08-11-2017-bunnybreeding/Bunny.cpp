#include "Bunny.h"
#include <cstdlib>


Bunny::Bunny(): m_age(0), m_gender(nullptr), m_name("default"), m_vampire(false)
{	
	int rd = rand() % 100 + 1;
	m_vampire = rd < 2 ? true : false;
	m_gender = rd < 50  ? true : false;	
}

void Bunny::SetColor(int c)
{
	m_color = (Color)c;
	
}


Bunny::~Bunny()
{
}

void Bunny::Update()
{

}

void Bunny::Start()
{
}
