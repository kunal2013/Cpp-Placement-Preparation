// template polymorphism

# include<iostream>
using namespace std ;

template <class T>
class Harry
{
    public :
    T data ;
    Harry (T a)       // remember constructor donot return anything
    {
      data = a;
     }
     void display() ;
} ;

template <class T>
void Harry <T> :: display ()
     {
         cout << data << endl ;
     }

 void func(int a)
 {
  cout << "i am first : " <<a << endl ;
 }

 template <class T>
 void func(T a)
 {
  cout << "i am template: " <<a<< endl ;
 }


int main()
{
func(4) ;  // exact match runn
return 0 ;
}


