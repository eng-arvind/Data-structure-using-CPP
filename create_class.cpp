#include<iostream>
using namespace std;
class strudent
{
public:
	int id;
	string name;
};
int main()
{
	strudent s1;
	s1.id=100;
	s1.name="arvind";
    cout<<s1.id<<endl;
    cout<<s1.name<<endl;
    return 0;
}