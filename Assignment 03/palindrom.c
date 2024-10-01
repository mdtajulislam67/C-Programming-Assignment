#include <stdio.h>
#include <string.h>

int is_palindrome(char s[]) 
    {
    int len= strlen(s);

    for (int i=1; i<=len-1; i++) 
    {
        
        if (s[i] != s[len-i-1]) 
        {
            return 0; 
        }
    }
    return 1;
}

int main() 
{
    char s[1001]; 
    scanf("%s",s);
    int result=is_palindrome(s);

    if (result) 
    {

        printf("Palindrome\n");
    } 
    else 

    {
        printf("Not Palindrome\n");
    }

    return 0;
}
