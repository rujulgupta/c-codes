/*classification of function
library functions: are those function which are per defined in c language library and they are not required to be written by the user.Printf and scanf belong to the category of library function.
User defined function has to be developed by the user at the time of writing a program.Main is an example of user defined function.
A user defined function ccan later become a ppart of c program.

syntax to define user defined function

returnType

Components of function
C function invloves following components
1 protyping
2 calling
3 definition
*/
#include <stdio.h>

int main(){
    getMessage();
    return 0;
}
void getMessage(void)
{
    printf("hello");
}

/* categories of human define function
1. No argument and no return value 
2. No argument and return value 
3. Argument and no return value 
4. Argument and return value 


Types of function Arguments:
1. Formal Arguments
2. Actual arguments


*/