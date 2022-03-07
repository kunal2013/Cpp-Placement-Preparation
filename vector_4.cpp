
# include<iostream>
using namespace std ;

class vector    // *** vector is not considered as keyword in c++
{
public :
    int *arr ;
    int size ;
    vector (int m)
    {
        size = m ;
        arr = new int[size] ;
    }

    int dotProduct(vector &v)
    {
        int d = 0;
        for (int i=0 ; i<size ; i++)
        {
            d +=  arr[i]  ;
        }
        return d ;
    }
} ;

int main()
{
    vector v1(3) ;    // actually it is not vector
    v1.arr[0] = 4 ;
    v1.arr[1] = 3 ;
    v1.arr[2] = 1 ;
    vector v2(3) ;
    v2.arr[0] = 1 ;
    v2.arr[1] = 0 ;
    v2.arr[2] = 1 ;
    int a = v2.dotProduct(v1) ;             // v1.a*v2.a + v1.b*v2b + . . .
    // above call is from v1 & function is sending object as argument
    cout << a << endl ;
    return 0 ;
}



