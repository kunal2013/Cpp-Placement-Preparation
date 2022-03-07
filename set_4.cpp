// set is stl and donot process repetative elements
// set is default ordereed. we would get in sorted order. we can pass order of sorting.
// search, insertion, and removal have average time-complexity
// demerit - rearranging data is overwork, chaining
// it is usually implemented using Red-Black tree.
// With Red-black tree we have O(logn) rotation in worst case too.(i.e. insertion)

# include<iostream>
# include <set>
using namespace std ;

int main()
{
    set <int> s ;    // set will be sorted
    // set<int,greater<int>> s ;    // for descending order

    s.insert (3) ;
    s.insert (2) ;
    s.insert (2) ;
    s.insert(11) ;
    s.insert (4) ;
    cout << s.size() << endl;
    set <int> :: iterator it ;
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

        cout << *s.lower_bound(10) ; // next greater or equal then 10
return 0 ;
}


