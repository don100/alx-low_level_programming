#include "main.h"

/**
 * binary_to_uint -converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return:converted number, or 0
 */

unsigned int binary_to_uint(char *b){
    unsigned int x = 0;
    for(int i =0 ; i<strlen(b) ; i++){
        if(b[i]!='0' && b[i]!='1')
            return 0;
        x+=(b[i]-'0')*pow(2,strlen(b)-i-1);
    }
 return x;   
}
