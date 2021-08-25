#include <iostream>
using namespace std;
class Example {
   public :
   void func(int a) {
      cout << "\nvalue of a: " << a;
   }
   void func(int a, int b) {
      cout << "\nvalue of a: " << a;
      cout << "\nvalue of b: " << b;
   }
   void func(char c) {
      cout << "\nvalue of c: " << c;
   }
};
int main() {
   Example obj;
   cout<< "\nOne int value";
   obj.func(4);
   cout<< "\nOne char value";
   obj.func('A');
   cout<< "\nTwo int values";
   obj.func(8, 2);
   return 0;
}