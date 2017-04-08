#include <iostream>
using namespace std;

template <class T>
class mypair {
    T a, b;
  public:
    mypair (T first, T second)
      {a=first; b=second;}
    T subs()
{
  T retval;
  retval = a-b;
  return retval;
}

};

int main () {
  mypair<int> myobject (100, 75);
  cout << myobject.subs();
  return 0;
}

