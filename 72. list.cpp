// List data structure - bidirectional linear linked-list, it gives efficient insertion and deletion facility.

/* vector is a type of dynamic array.
    List: List is a double linked sequence that supports both forward and backward traversal.
            The time taken in the insertion and deletion in the beginning, end and middle is constant. */

# include<iostream>
# include <list>
using namespace std ;

void display (list <int> &list2)
{
    list <int> :: iterator it ;
    for (it = list2.begin() ; it != list2.end() ; it++)
    {
        cout << *it << " " ;
             }
             cout << endl ;
}

int main()
{
  list <int> list1 ;
  list <int> list2(3) ;

  list1.push_back(5) ;
  list1.push_back(7) ;
  list1.push_back(1) ;
  list1.push_back(9) ;
  list1.push_back(12) ;
  display(list1) ;

  list <int> :: iterator iter ;      // remember the format of iterator defination. i was using list2 <int> .....
  iter = list2.begin() ;
  *iter = 45 ;
  iter ++ ;
  *iter = 6 ;
  iter ++ ;
  *iter = 9 ;
  display(list2) ;

  list2.pop_front() ;
  list2.pop_back() ;
  display(list2) ;
  list1.remove(1) ; // it will remove all 1 element from list1
  display(list1) ;
  list1.merge(list2) ;
  display(list1) ;
  //list1.sort() ;
  //display(list1) ;
  list1.reverse();
  display(list1) ;
    return 0 ;
}

/* output

5 7 1 9 12
45 6 9
6
5 7 9 12
5 6 7 9 12
5 6 7 9 12
12 9 7 6 5

*/
