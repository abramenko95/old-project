#include "EnemyDno.h"
#include <ctime>
#include <cstdlib>
#include <vector>
Enemy::Enemy()
{
m_health=100;
m_x=0;
m_y=rand()%16;
m_symbol = '*';
};
void Enemy::Move()
{
	int r;
	for(int i=0; i<1)
	{
		r=rand()%2;
		if(r=1 and x<15)
		x=x+1;
		else if (r=0 and x>1)
		x=x-1;
		y=y+1;
	}
};
void Enemy::Die()
{

};
void Enemy::Apear()
{

};
int Enemy::GetX()
{
return m_x;
};
int Enemy::GetY()
{
return m_y;
};
int Enemy::GetSymbol()
{
return m_symbol;
};
