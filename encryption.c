// My first try at a personal encryption software
// By no definition is this a proper encryption program, but well its the beginning of a pursuit
//This is my first program, to replace the letters of a sentence with different letters.

#include<stdio.h>



int main()
{
char s[100];

printf("Enter the sentence to be encrypted;");
scanf("%[^\n]s", s);

printf("The sentence is %s", s);
 
return 0;

}	
