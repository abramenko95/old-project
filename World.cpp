#include <vector>
#include <World.h>
World::World()
{
std::vector<char> x;

for(int i=0; i<5; i++)
{
x.push_back('.');
}
for(int i=0; i<5; i++)
{
m_table.push_back(x);
}
