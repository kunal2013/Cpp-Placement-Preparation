// this - it represets

# include<iostream>
using namespace std ;

class A
{
  int a;
  public :
      void setData (int a)   // same argument and private variable name
      {
         this-> a = a ;  // this will make local a get argument a.
                                 // precisely - this holds object pointer address
      }
       void getData()
       {
           cout <<"The value of a is " << a << endl ;
       }
};

int main()
{
    A a ;
    a.setData(4) ;
    a.getData() ;
return 0 ;
}


