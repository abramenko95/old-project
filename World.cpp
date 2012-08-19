#include <iostream>
#include <cstdlib>
#include "World.h"
World::World()
{
	std::vector<char> x;

	for(int i=0; i<16; i++)
	{
		x.push_back('.');
	}
	for(int i=0; i<16; i++)
	{
		m_table.push_back(x);
	}
	for(int i=0; i<3; i++)
	{
		m_enemies.push_back(Enemy());
	}
}

void World::Draw()
{
	for(int i=0;i<16;i++)
	{
		for(int g=0;g<16;g++)
		{
			std::cout<<m_table[i][g];
		}
		std::cout<<std::endl;
	}
	std::cout<<std::endl;
} 

void World::Update()
{
	std::vector<char> V;
	for(int i=0; i<16; i++)
	{
		V.push_back('.');
	}
	for(int i=0; i<16; i++)
	{
		m_table[i]=V;
	}

	for( int i = 0; i < m_enemies.size(); ++i )
	{	
		int x = m_enemies[i].GetX();
		int y = m_enemies[i].GetY();
		m_table[x][y] = m_enemies[i].GetSymbol();	
	}

	for( int i = 0; i < m_shots.size(); ++i )
	{	
		int x = m_shots[i]->GetX();
		int y = m_shots[i]->GetY();
		m_table[x][y] = m_shots[i]->GetSymbol();	
	}
	
	for(int i=0; i<1; i++)
	{
		m_enemies[i].Move();
		m_shots.push_back( m_enemies[i].Shoot() );
	}

	Draw();







};

int main()
{
srand( time(0) );
World world;
for(int i = 0; i < 4; ++i)
	world.Update();

usleep(100000);


return 0;
}


