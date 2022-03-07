//unordered means we would not get in sorted order.
/* it is using hashing to insert into index or bucket. in one
 bucket we can have more then 1 element like hashtable */
// search, insertion, and removal have average time-complexity
// demerit - rearranging data is overwork, chaining
/* It provides collection of unique item but with
     faster insertion and removal and unsorted */

# include<iostream>
# include <unordered_set>
using namespace std ;

int main()
{
    unordered_set <int> s ;    // set will be sorted
    // set<int,greater<int>> s ;    // for descending order

    s.insert (3) ;
    s.insert (2) ;
    s.insert (2) ;
    s.insert(11) ;
    s.insert (4) ;
    cout << s.size() << endl;
    unordered_set <int> :: iterator it ;
    for (it = s.begin() ; it!=s.end() ; it++)
    {
        cout << *it << " " ;
    }
    cout << endl ;

    s.erase(2) ;         // erase 2 from set means element '2'
    //s.clear() ;  // it will empty the set.
    cout << s.size() << endl ;

    for (it = s.begin() ; it!=s.end() ; it++)
    {
        cout << *it << " " ;
    }
    cout << endl ;

    if (s.find(4) != s.end())
    {
        cout << "Found" << endl ;
    }
    else
        cout << "Not found" << endl ;

      //  cout << *s.lower_bound(10) ;   // here we have unsorteds and cannot be used.
return 0 ;
}


