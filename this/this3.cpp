/* this is local object pointer in every instance function containing
   address of the caller object  */
// this cannot be modify
// it is used to refer caller object in member function
// this is a keyword


#include<iostream>
using namespace std ;

class Box
{
 private :
     int l, b, h ;
 public :
  void setDimension (int l, int b, int h)
  {
      this->l = l ;  // this refers to object variable i.e. in left here.
      this->b = b ;
      this->h = h ;
  }
  showDimension()
  {
      cout << "\nl = "<<l<<", b = "<<b<<", h = "<<h<<"\n" ;
  }
};

int main()
{
    Box smallBox ;
    smallBox.setDimension(12,10,5) ;

    /* in above call to function by object. We implicit provide
       object address to 'this' function locally means only the
       function has address of this object. And function can use
       pointer of object using 'this'.     */

    smallBox.showDimension();
    return 0 ;
}

// Output -

l = 12, b = 10, h = 5
