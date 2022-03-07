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
        cout<<v[i];
        break ;
    }
    cout <<v[i]<<" , ";
}
}

int main()
{
 vector<int> vec1;
 int element ;
for (int i=0 ; i<4 ; i++)
{
    cout << "Enter yr element " <<i <<" ->  ";
    cin >> element ;
    vec1.push_back (element) ;    //push_back member function of vector
}
display(vec1) ;
return 0 ;
}

/* Output :

Enter yr element 0 ->  5
Enter yr element 1 ->  6
Enter yr element 2 ->  4
Enter yr element 3 ->  7
5 , 6 , 4 , 7

*/

