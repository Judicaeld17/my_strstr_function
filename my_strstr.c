// Description
// Implement New WindowstrStr().

// It should return a pointer to the first occurrence of a needle in a haystack, or NULL if the needle is not part of the haystack.

// Clarification:

// What should we return when needle is an empty string? This is a great question to ask during an interview.

// For the purpose of this problem, we will return haystack when needle is an empty string.
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
char* my_strstr(char* range,char* elmnt){

    if(strlen(elmnt)==0){
        return range;
    }
    int len =strlen(range)-strlen(elmnt);

    int len1 = strlen(range);
    int len2 = strlen(elmnt);

    for(int i=0; i<= len1-len2; i++){

        if(strncmp(&range[i],  elmnt, len2)==0){
            return &range[i];
        }
    }
return NULL;


}

// int main(){
//     char* test="Hello";
//     char* te="ll";
//    printf("%s",my_strstr(test,te));

//     return 0;
// }