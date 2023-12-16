#include <stdio.h>
#include <string.h>
/*Write a program to find the length of an entered word.*/
int main() {
    char word[100];
    printf("Enter a word: ");
    scanf("%s", word);
    printf("Length of the entered word: %lu\n", strlen(word));
    
    return 0;
}
