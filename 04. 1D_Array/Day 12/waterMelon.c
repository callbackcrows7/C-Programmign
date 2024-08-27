// Watermelon problem.
#include<stdio.h>

int main(void)
{
    // defile variables.
    int w;
    
    // input w from user.
    scanf("%d", &w);
    
    // check if w is odd or even
    if(w % 2 == 1){
        printf("No");
    }
    else if(w == 2){
        printf("No");
    }
    else
    {
        printf("Yes");
    }
    
    return 0;
}