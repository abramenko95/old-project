#include <iostream>
#include <string>
#include <cstdlib>

class People
{
public: 
People()
{
	m_name = "Arnold";
	srand(0);
	m_maxAge=71;
	m_age=rand() % m_maxAge;
}

void GetOlder()
{
	int n=2;

	for(int i=0; i<n; ++i)
	{
		m_age=m_age+1;
	}		
} 

std::string GetName()
{
	return m_name;
}

int GetAge()
{
	return m_age;
}
private:
	int m_age;
	int m_maxAge;
	std::string m_name;


	


};
int main()
{
People myPeople; 
std::cout<<"My name: " << myPeople.GetName();
std::cout<<"My age: " << myPeople.GetAge();
}

