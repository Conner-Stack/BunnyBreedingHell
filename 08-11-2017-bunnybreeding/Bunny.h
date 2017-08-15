#pragma once
enum Color
{
	WHITE = 0,
	BROWN = 1,
	SPOTTED = 2,
	BLACK = 3,
};

class Bunny
{
public:
	Bunny();
	~Bunny();
	void Update();
	void Start();
	int m_age;
	bool m_gender;
	const char* m_name;
	bool m_vampire;
	Color m_color;
	void SetColor(int);
};

