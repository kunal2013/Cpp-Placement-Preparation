# include<iostream>
# include <set>
# include <string>
using namespace std ;

class Person
{
public :
    float age ;
    string name ;
    bool operator <(const Person& rhs) const       //  ????
    {
        return age < rhs.age ;
        }
   };

int main()
{
  set <Person> Set = {{30,"Rupesh"},{30,"piyali"},{22,"john"}} ;
    for (const auto& e: Set)
    {
        cout << e.age << " "<<e.name << endl ;
    }
return 0 ;
}
