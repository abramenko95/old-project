#ifndef EnemyDno_h
#define EnemyDno_h
#include"Shot.h"

class Enemy
{
	public:
		Enemy();
		void Move();
		void Die();
		void Apear(); 
		Shot * Shoot();
		int GetX();
		int GetY();
		int GetSymbol();

	protected:
		int m_health; // жизьки
		Laser * m_laser;
		int m_x; // горизонталька
		int m_y; // вертикалька
		char m_symbol; // НЛОшка

	
};
#endif

