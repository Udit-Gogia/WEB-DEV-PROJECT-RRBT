#include <stdio.h>

int main() {
    
    int j;
    
   
    int a[5]={1,2,3,4,5};
    
    int value = 3; 
    
    for(j=0;j<5;j++){
        if(a[j]==value){
            printf("%d",j);
        }
        else continue;    
    }
    
    
    return 0;
}