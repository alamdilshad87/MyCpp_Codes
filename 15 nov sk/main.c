#include <stdio.h>
#include <string.h>
union work

{
    int i;
    float f;
    char str[20];
};
int main()
{
    union work staff;
    staff.i=10;
    staff.f=500.80;
    strcpy(staff.str"salary details");
    printf("staff.i:%d\n",staff.i);
    printf("staff.f:%f\n",staff.f);
    printf("staff.str:%s\n",staff.str);
    return 0;
}
