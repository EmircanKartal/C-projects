#include<stdio.h>
int main()
{
    //1
    char lowerCase = 'a';
    char upperCase = 'A';
    int printLowerCase = 0;
    
    //2
    while(lowerCase <= 'z' & upperCase <= 'Z'){
        //3
        if(printLowerCase){
            printf("%c ",lowerCase);
        }else{
            printf("%c ",upperCase);
        }
        //4
        printLowerCase = !printLowerCase;
        lowerCase ++;
        upperCase ++;
    }
    
    //5
    printf("\n");
    return 0;
}