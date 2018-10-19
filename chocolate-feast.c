#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t,n,m,c; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
 
        scanf("%d %d %d",&n,&c,&m); 
    
    int numberOfChocolates = n/c; 
    int wrappers = numberOfChocolates; 
    while (wrappers >= m)
    {
        numberOfChocolates = numberOfChocolates+ wrappers/m; 
        int newChocolates = wrappers/m; 
        wrappers = newChocolates + wrappers%m;
    }
    printf("%d\n",numberOfChocolates);
    }
    return 0;
}

