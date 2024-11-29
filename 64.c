/*#include <stdio.h>
int main ()
{
    char str1[20], str2[10];
    printf("Enter First Name :");
    gets(str1);
    printf("Enter Last Name :");
    gets(str2);
    strcat(str1, " ");
    strcat(str1, str2);
    printf("After concatination str1 = %s", str1);
    return 0;
}*/

#include <stdio.h>
#include <string.h>

int main() {
    char str1[20], str2[10];
    
    // Prompt for the first name
    printf("Enter First Name: ");
    gets(str1);  // Warning: gets() is unsafe, use with caution.

    // Prompt for the last name
    printf("Enter Last Name: ");
    gets(str2);  // Warning: gets() is unsafe, use with caution.

    // Concatenate first name, a space, and last name
    strcat(str1, " ");  // Append a space to str1
    strcat(str1, str2); // Append str2 (last name) to str1

    // Output the concatenated result
    printf("After concatenation str1 = %s\n", str1);

    return 0;
}
