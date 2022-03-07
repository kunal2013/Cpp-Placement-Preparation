// Unordered set is also associative container
/* unordered means data will come as it was inserted.
    in ordered set, we would get in sorted order */
/* it is using hashing to insert into index or bucket.
 in one bucket we can have more then 1 element like hashtable */
// search, insertion, and removal have average time-complexity
// demerit - rearranging data is overwork, chaining
/* unordered also provide collection of unique item but
    with faster insertion and removal and unsorted */

# include<iostream>
# include <unordered_set>
using namespace std ;

int main()
{
    unordered_set <int> uset = {4,1,2,3,4,2,3} ;

    auto search = uset.find(2) ;
    if (search != uset.end())
    {
        cout << "Found" << (*search) << '\n' ;
    }
    else
    {
        cout << "Not found\n" ;
    }
    for (auto & elm:uset)
    {
        cout << elm << " " ;
    }
    cout << endl ;
return 0 ;
}


