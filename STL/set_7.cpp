// pair - stl
// this is my attempt to create a set using pair and set only

#include <iostream>
# include <utility>               // for pair
//# include <unordered_set>
using namespace std;

//typedef pair<int, int> pairs;

int main()
{
   pair <char, int> p1 ;
   pair <int, int> p2 ;
   pair <int, string> p3 (20,"Arushi") ;

   p1.first = 'A' ;
   p1.second = 100 ;

   cout <<p1.first << " "<<p1.second << endl ;

   p2 = make_pair (10,20) ;                    // make pair do input in pairs

   cout << p2.first << " "<<p2.second << endl ;
   cout << p3.first << " "<<p3.second << endl ;

   /*
   unordered_set <pairs> s ;
    s.insert (p1) ;
    s.insert (p2) ;
    s.insert (p3) ;
    cout << s.size() << endl;
    unordered_set <pairs> :: iterator it ;
    for (it = s.begin() ; it!=s.end() ; it++)
    {
        cout << *it << " " ; 
    }

    */

    return 0 ;
}


