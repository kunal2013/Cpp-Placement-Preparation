/* this pointer */
// A pointer contains address of an object is called Object
// pointer.

#include<iostream>
using namespace std ;

class Box
{
 private :
     int l, b, h ;
 public :
  void setDimension (int x, int y, int z)
  {
      l = x ;
      b = y ;
      h = z ;
  }
  showDimension()
  {
      cout << "\nl = "<<l<<", b = "<<b<<", h = "<<h<<"\n" ;
  }
};

int main()
{
    Box smallBox, *p;
    p = &smallBox ;
    p ->setDimension(12,10,5);
    smallBox.showDimension();
    return 0 ;
}

/*

l = 12, b = 10, h = 5

*/
