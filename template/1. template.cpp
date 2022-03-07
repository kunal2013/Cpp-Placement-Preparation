// Class can be derieved through template

// class -> object , template -> class
/*  Syntax :
         template<class T>
         class vector{
                  T* arr;
                  public :
                     vector (T *ar)
                      {
                        // code
                       }                        */

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
            d +=  this->arr[i] * v.arr[i] ;
      /*  in above v.arr[i] contains v2 refernce. while this contains v1
          refernce and v1 has called it  */
      /* but also note above program can run without this. as v1 is calling
         object. So v1 arr[] is activated. But this is gud practice */
        }
        return d ;
    }
} ;

int main()
{
    vector v1(3) ;
    v1.arr[0] = 4 ;
    v1.arr[1] = 3 ;
    v1.arr[2] = 1 ;
    vector v2(3) ;
    v2.arr[0] = 1 ;
    v2.arr[1] = 0 ;
    v2.arr[2] = 1 ;
    int a = v1.dotProduct(v2) ; // v1.a*v2.a + v1.b*v2b + . . .
    // above call is from v1 & function is sending object as argument
    cout << a << endl ;
    return 0 ;
}

/* if linked in some logic we pass parameters to class.
  So it is also called parameterized class. */

/*  Why use templates ?
->  i) For Dry programming
     ii) For generic programming   */


