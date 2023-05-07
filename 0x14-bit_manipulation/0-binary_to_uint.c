#include "main.h"

/**
 * binary_to_uint -converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return:converted number, or 0
 */

unsigned int binary_to_uint(char *a){
    unsigned int x = 0;
    for(int i =0 ; i<strlen(a) ; i++){
        if(a[i]!='0' && a[i]!='1')
            return 0;
        x+=(a[i]-'0')*pow(2,strlen(a)-i-1);
    }
 return x;   
}
