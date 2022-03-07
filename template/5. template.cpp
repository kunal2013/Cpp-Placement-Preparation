// template reusability

# include<iostream>
using namespace std ;

template <class T1, class T2>
float funcAverage (T1 a, T2 b)
{
  float avg = (a+b)/2 ;
  return avg ;
}

int main()
{
  float a ;
  a = funcAverage(5, 2) ;
  cout << a << endl ;
  a = funcAverage (5, 2.4) ; // if not template then another function would have required
  cout << a << endl ;
return 0 ;
}

//  output :
/*

3
3.7

*/

