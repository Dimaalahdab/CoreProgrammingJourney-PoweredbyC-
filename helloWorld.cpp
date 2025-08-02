#include <iostream>
/*
The first line of the code adds the <iostream> header to the program
A header is a file that contains functions and commands.
The <iostream> header in C++ contains the cout command, that we used for outputting text. 
*/
using namespace std ;
/*
This tells the program to use the std namespace.
A namespace is used to organize code into logical groups and give them names.
So, the std namespace is part of the <iostream> header, containing the cout command.
*/

int main ()
// Entery point
 {
    cout << "Hello, world \n" << endl; 
       
    /*
    ● cout is an object
    ● There are 2 ways to start a new line to the output :
    	•The "endl" command ( <<endl  )
        •The "\n" command ( "<<\n"   ) or ( "<<hello \n"   ) 
           • ( "<<hello \n\n"   ) Add 2 new lines 
           •  escape sequence
     \t	Creates a horizontal tab	
    \\	Inserts a backslash character (\)	
     \"	Inserts a double quote character Ex:   cout << "They call him \"hello\".";
    */
}
