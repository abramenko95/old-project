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
m_laser = new Laser();
};
void Enemy::Move()
{
	int r;
	r=rand()%2;
	if(r=1 && m_x<15)
		m_x=m_x+1;
	else if (r=0 && m_x>1)
		m_x=m_x-1;
	m_y=m_y+1;
	
};
void Enemy::Die()
{

};
void Enemy::Apear()
{

};

Shot * Enemy::Shoot()
{
	return m_laser->Shoot( m_y + 1, m_x );	
}

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

