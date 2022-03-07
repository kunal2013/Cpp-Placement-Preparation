
// vectors - resizable array

# include<iostream>
# include<vector>
using namespace std ;

void display(vector<int> &v)        // vector<int> is now datatype
{
for(int i=0 ; i<v.size() ; i++)
{
    if(i==v.size()-1)
    {
        cout<<v[i] << endl ;
        break ;
    }
    cout <<v[i]<<" , ";
}
}

int main()
{
 vector<int> vec1;
 int element,size ;

 cout <<"Enter the size of vector : ";
 cin >> size ;
for (int i=0 ; i<size ; i++)
{
    cout << "Enter yr element " <<i <<" ->  ";
    cin >> element ;
    vec1.push_back (element) ;    //push_back member function of vector
    // vec1.pop_back () ;     // pops an element from vector.
}
cout<<endl ;
display(vec1) ;

vector<int> :: iterator iter = vec1.begin() ;   // iterator is pointer in vector
                                                // syntax for dynamic insertion in vector using iterator
vec1.insert(iter,566) ;       // insert() is member function and (iter) is pointer to first element,
                                             // 566 is element
 vec1.insert(iter+2,56) ;    // insertion at second position
vec1.insert (iter,10,0) ;    // insert '0' ten times at position 3
display(vec1) ;
return 0 ;
}

/*  sample run

Enter the size of vector : 5
Enter yr element 0 ->  12
Enter yr element 1 ->  1
Enter yr element 2 ->  1
Enter yr element 3 ->  56
Enter yr element 4 ->  3

12 , 1 , 1 , 56 , 3
566 , 12 , 56 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 56 , 3

*/

