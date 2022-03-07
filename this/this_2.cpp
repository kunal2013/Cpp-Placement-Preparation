// this - it represets

# include<iostream>
using namespace std ;

class A
{
  int a;
  public :
      A & setData (int a)   // A & is variable type
      {
         this->a = a ;  // this will make local a get argument a.
                                 // precisely - this holds object pointer reference
         cout << "a.setData(4) has called it \n\n";
         return *this ;  // second use of this. it sends pointer to object
      }
       void getData()
       {
           cout <<"The value of a is " << a << endl ;
       }
};

int main()
{
    A a ;
    a.setData(4).getData() ; // a.setdata is now an object.
    //a.getData() ;
return 0 ;
}



