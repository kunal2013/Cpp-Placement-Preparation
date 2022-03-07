// Class can be derieved through template

# include<iostream>
using namespace std ;

template <class T>  // no semicolon
class vector
{
public :
    T *arr ;  // custom data type used here
    int size ;
    vector (int m)
    {
        size = m ;
        arr = new T[size] ; // custom data type used here
    }

    T dotProduct (vector &v)  // custom data type used here
    {
        T d = 0;                      // custom data type used here
        for (int i=0 ; i<size ; i++)
        {
            d +=  this->arr[i] * v.arr[i] ;
          }
        return d ;
    }
} ;

int main()
{
    vector <float>v1(3) ;  // for each object we can define datatype
                                          // this way of defination is class template
    // Function templates don't have default template parameters while classes can.
    v1.arr[0] = 1.4 ;
    v1.arr[1] = 3.3 ;
    v1.arr[2] = 0.1 ;
    vector <float>v2(3) ;
    v2.arr[0] = 0.1 ;
    v2.arr[1] = 1.90 ;
    v2.arr[2] = 4.1 ;
    float a = v1.dotProduct(v2) ; // v1.a*v2.a + v1.b*v2b + . . .
    cout << a << endl ;
    return 0 ;
}

/*
Templates are powerful features which allows to write
generic programs. In simple terms, we can create a single function
or a class to work with different data types using templates.
Templates are often used in larger codebase for the purpose of code
reusability and flexibility of the programs.

The concept of templates can be used in two different ways:
i. Function Templates
ii. Class Templates                                       */






