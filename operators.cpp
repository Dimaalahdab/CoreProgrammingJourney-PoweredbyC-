#include <iostream>
using namespace std ;
int main () {
//Bitwise operators work directly on the binary bits of integers.
/*
🎯 Why Use Bitwise?
🔒 Fast, low-level operations in games, encryption, and hardware control

🔢 Efficient flags or status storage

🎮 Control LEDs or pins on Arduino

🚀 Ofte

*/
int x = 5 ; 
x &= 2 ; // AND  x = x & 2 ;
/*
0 1 0 1
.
0 0 1 0
=
0 0 0 0
*/
cout << x ;
x |=2 ; //OR
cout << x ;
/*
0 1 0 1
+
0 0 1 0
=
0 1 1 1
*/
}