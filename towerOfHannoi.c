#include<stdio.h>

int towerOfHannoi(int no){
    if (no == 1)
    {
        return 1;
    }
    else if (no < 1)
    {
        return -1;
    }
    

    return (2*(towerOfHannoi(no - 1))) +1;  
}

int main()
{
    printf("%d",towerOfHannoi(4));
    return 0;
}
