// set is stl and donot process repetative elements
// set is default ordereed. we would get in sorted order. we can pass order of sorting.
/* it is using hashing to insert into index or bucket. in one
   bucket we can have more then 1 element like hashtable */
// search, insertion, and removal have average time-complexity
// demerit - rearranging data is overwork, chaining
// it is usually implemented using Red-Black tree.
// With Red-black tree we have O(logn) rotation in worst case too.
/* It provides collection of unique item but with faster insertion and removal and unsorted */

# include<iostream>
# include <set>
# include <string>

using namespace std ;

// this program is to check for uniqueness of element in set
int main()
{
  set <int> Set = {4,1,2,3,4,2,3} ;

    for (const auto& e: Set)
    {
        cout << e << endl ;
    }
return 0 ;
}

/*  sample output :

1
2
3
4

*/



