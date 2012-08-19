#include "Shot.h"
#include <ctime>
#include <cstdlib>
#include <vector>
Shot::Shot( int iX, int iY )
{
m_x=iX;
m_y=iY;
m_symbol = '+';
};
void Shot::Move()
{
	m_y=m_y+2;
	
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

Shot * Laser::Shoot( int iX, int iY )
{
	return new Shot( iX, iY );
}
