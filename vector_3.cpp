// vector for all data type input using template

# include<iostream>
# include<vector>
using namespace std ;

template <class T>

void display (vector<T> &v)
{
    cout << " displaying vector "<<endl ;
    for (int i=0 ; i<v.size() ; i++)
    {
        cout<<"\n### i = "<<i <<"." ;
        cout <<endl <<v[i] << "    ";
        cout <<v.at(i)  ;   // it return reference to present location i in given array.
                                    // at() returns blank, if there is nothing at given reference.
    }
    cout << endl ;
}

int main()
{
    vector <int> vec1  ;     // 0 element vector
    cout<<"(1)" ;
    display (vec1) ;
    vector <char> vec2(4) ;    // 4 element vector
    vec2.push_back('5') ;   // it is push from back
    cout <<"(2)" ;
    display(vec2) ;
    vector <char> vec3(vec2) ;  // vec2 must be char
    cout << "\n(3)" ;
    display (vec3);
    vector <int> vec4(6,3) ;     // 6 element of '3'
    cout<<"\n(4)" ;
    display(vec4) ;
   return 0 ;
}

// // // // // // // // // // // // // //

/*   Output :

(1) displaying vector

(2) displaying vector

i = 0.

i = 1.

i = 2.

i = 3.

i = 4.
5    5

(3) displaying vector

i = 0.

i = 1.

i = 2.

i = 3.

i = 4.
5    5

(4) displaying vector

i = 0.
3    3
i = 1.
3    3
i = 2.
3    3
i = 3.
3    3
i = 4.
3    3
i = 5.
3    3

  */


