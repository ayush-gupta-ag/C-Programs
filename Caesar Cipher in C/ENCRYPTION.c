/*
[Encryption & Decryption]

The Caesar Cipher technique is one of the earliest and simplest method of encryption technique. 
It’s simply a type of substitution cipher, i.e., each letter of a given text is replaced by a letter some fixed number of positions (shift) down the alphabet.
For example with a shift of 1, A would be replaced by B, B would become C, and so on.
The method is apparently named after Julius Caesar, who apparently used it to communicate with his officials.

THIS CODE IS FOR ENCRYPTION.

Example -
Input  :  ABYZabyz
          4
Output :  EFCDefcd 
*/

//CODE
#include <stdio.h>
 
int main()
{
    char str[100];
    scanf("%s",str);
    int shift;
    scanf("%d",&shift);
   
    
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A'&&str[i]<='Z') //for capital alphabets
        {
            if('Z'-str[i]<shift)
            {
                printf("%c",str[i]-(26-shift));
            }
            else
            {
                printf("%c",str[i]+shift);
            }
        }
        if(str[i]>='a'&&str[i]<='z')  //for small alphabets
        {
            if('z'-str[i]<shift)
            {
                printf("%c",str[i]-(26-shift));
            }
            else
            {
                printf("%c",str[i]+shift);
            }
        }
    }

}