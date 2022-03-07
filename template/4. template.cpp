//

# include<iostream>
using namespace std ;

template <class T1=int, class T2=float>
class Harry
{
public :
    T1 a ;
    T2 b ;
    Harry (T1 x, T2 y)
    {
      a = x ;
      b = y ;
    }
    void display ()
    {
        cout << "The value of a is "<<a << endl ;
        cout << "The value of b is "<<b << endl << endl ;
    }
};

int main()
{
Harry<> h (4, 6.4) ;
h.display() ;
Harry <float,char> g(1.4,'o') ; // class defination dominates over predefination
g.display() ;
return 0 ;
}

// output
/*

The value of a is 4
The value of b is 6.4

The value of a is 1.4
The value of b is o

*/



