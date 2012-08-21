#ifndef World_h
#define World_h
#include <vector>
#include "EnemyDno.h"
#include "Shot.h"
class World
{
private: 
	std::vector< std::vector< char > > m_table;
	std::vector< Enemy > m_enemies;
	std::vector< Shot * > m_shots;
public:
	World();
	void Draw();
	void Update(); 


 


};
#endif





