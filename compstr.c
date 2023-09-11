#include <stdlib.h>
#include<stdio.h>
#include<string.h>
#define MAX 100

int main()
{
    char str1[MAX];
    char str2[MAX];
    printf("Enter String #1:");
    fgets(str1,MAX,stdin);
    printf("Enter String #2:");
    fgets(str2,MAX,stdin);

    for(char *p=str1; *p; p++) 
        *p=tolower(*p);
    
    for(char *k=str2; *k; k++) 
        *k=tolower(*k);

    int i = 0, j =0;
    int fal =0;
  
    while(str1[i]!='\0'||str2[j]!='\0'){ 
        if(str1[i]==' '||str2[j]==' '){ 
            if(str1[i]==' ') 
                i++;
            if(str2[j]==' ') 
                j++;
        }else if(str1[i]!=str2[j]){ 
            fal =1;
            break;
        }else{            
            i++; 
            j++;
        }
    }
    
    while(str1[i]!='\0'){
        if(str1[i]!=' '){
            fal =1;
            break;
        }
        i++;
    }
  
     while(str2[j]!='\0'){
        if(str2[j]!=' '){
            fal =1;
            break;
        }
        j++;
    }
    
    if(fal==1){
        printf("Both strings are not same!");
    }
    else{
        printf("Both strings are same!");
    }
    return 0;
}
