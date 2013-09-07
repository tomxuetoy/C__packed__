#include <stdio.h>
 
#define __u8    unsigned char
#define __u16   unsigned short
 
struct str_struct{
        __u8    a;
        __u8    b;
        __u8    c;
        __u16   d;
} __attribute__ ((packed));
 
typedef struct str_struct str;
 
typedef struct {
        __u8    a;
        __u8    b;
        __u8    c;
        __u16   d;
}str_temp __attribute__ ((packed));
 
typedef struct {
        __u8    a;
        __u8    b;
        __u8    c;
        __u16   d;
}str_nopacked;
 
int main(void)
{
        printf("sizeof str_struct   = %d\n", sizeof(struct str_struct));
        printf("sizeof str          = %d\n", sizeof(str));
        printf("sizeof str_temp     = %d\n", sizeof(str_temp));
        printf("sizeof str_nopacked = %d\n", sizeof(str_nopacked));
        return 0;
}
/*
$ gcc ex.c
ex.c:20:1: warning: ‘packed’ attribute ignored [-Wattributes]
 
$ ./a.out 
sizeof str_struct   = 5
sizeof str          = 5
sizeof str_temp     = 6
sizeof str_nopacked = 6
*/
