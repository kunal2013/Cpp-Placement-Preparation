// multi-data type template arguments

# include<iostream>
using namespace std ;

template <class T1, class T2>
class myClass
{
public :
    T1 data1;
    T2 data2 ;
    myClass (T1 a,T2 b)
    {
        data1 = a ;
        data2 = b ;
    }
    void display()
    {
        cout << this->data1<< endl << this-> data2<< endl ;
    }
};

// Function templates do not have default template parameters
// while classes can.
int main()
{
myClass <int,char> obj (1,'c');
obj.display() ;
return 0 ;
}

// output
/*

1
c

*/


