/*
[Encryption & Decryption]
The Caesar Cipher technique is one of the earliest and simplest method of encryption technique. 
It’s simply a type of substitution cipher, i.e., each letter of a given text is replaced by a letter some fixed number of positions (shift) down the alphabet.
For example with a shift of 1, A would be replaced by B, B would become C, and so on.
The method is apparently named after Julius Caesar, who apparently used it to communicate with his officials.

THIS CODE IS FOR FINDING SHIFT.

Example -
Input  :  WXUVwxuv   >Encrypted String
          ABYZabyz   >Decrypted String
Output :  4          >Shift
*/

//CODE
#include <stdio.h>
#include <string.h>
int main()
{
    char estr[100];
    scanf("%s",estr);       //Input Encrypted String
    char dstr[100];
    scanf("%s",dstr);       //Input Decrypted String
    int shift;
    
    int x=estr[0]-dstr[0];
    if(x<0)                  //For Alphabets whose Encryption lies at 'a/A' or after 'a/A' after passing from 'z/Z'
    shift=x+26;
    else
    shift=x;
    
    printf("%d",shift);      //Output Shift
}