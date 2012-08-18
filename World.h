#ifndef World_h
#define World_h
#include <vector>
#include "EnemyDno.h"
class World
{
private: 
	std::vector< std::vector< char > > m_table;
	std::vector< Enemy > m_enemies;
public:
	World();
	void Draw();
	void Update(); 


};
#endif

