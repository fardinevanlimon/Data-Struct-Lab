#include<stdio.h>
struct xyz
{
 char c[5];
 int i[10];
 double d[2];
 float f[3];
};

struct xyz m[3];

int main(){
printf("size of xyz = %d\n",sizeof(m));
}
