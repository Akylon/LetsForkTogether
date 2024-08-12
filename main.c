#include <stdio.h>
#include "print.h"

int main(){    
    char arr[] = "Was isch orange und lauft de Berg duruf?\n";
    print(arr, sizeof(arr));
    
    int len = 20;
    char buf[len];
    fgets(buf, len, stdin);
    
    char arr2[] = "Es Wanderindli :)\n";
    print(arr2, sizeof(arr));
    return 0;
}
