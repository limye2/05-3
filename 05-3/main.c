//
//  main.c
//  05-3
//
//  Created by MacBook Air on 2023/10/08.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char c;
    int num=0;
    
    printf("input a string: ");
    
    while((c=getchar()) != '\n')
    {
        if(c>= '0' && c<='9')
            num = num + 1;
    }
    printf("the number of digits is %i\n", num);
    return 0;
}
