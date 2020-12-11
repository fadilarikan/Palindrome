#include <stdio.h>
#include <string.h>

int isPalindrome(char [], int);

int main()
{
    int i;
    char word[3][25];
    printf("Enter the words to check for palindrome :\n");
    for(i=0; i<3; i++){
        scanf("%s", word[i]);
    }
    for(i=0; i<3; i++){
    isPalindrome(word[i],0);
    }
    return 0;
}

int isPalindrome(char word[], int index)
{
    int i;
    for(i=0; i<3; i++){
    int len = strlen(word) - (index + 1);
    if (word[index] == word[len])
    {
        if (index + 1 == len || index == len)
        {
            printf("%s is a palindrome\n",word);
            return 0;
        }
        return isPalindrome(word, index + 1);
    }
        else
        {
        printf("%s is not a palindrome\n",word);
         return 0;
        }
    }
    return 0;
}
