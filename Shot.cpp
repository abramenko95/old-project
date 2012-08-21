#include "Shot.h"
#include <ctime>
#include <cstdlib>
#include <vector>
Shot::Shot( int iY, int iX )
{
m_x=iX-2;
m_y=iY-1;
m_symbol = '|';
};
void Shot::Move()
{
	m_x=m_x+3;
	
};
void Shot::Die()
{

};
int Shot::GetX()
{
	return m_x;
};
int Shot::GetY()
{
	return m_y;
};
int Shot::GetSymbol()
{
	return m_symbol;
};

Shot * Laser::Shoot( int iY, int iX )
{
	return new Shot( iY, iX );
}
