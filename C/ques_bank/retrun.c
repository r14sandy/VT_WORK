#include<stdio.h>
int fun()
{
	int x;
	x=1;
	x++;
	return x;
}
int main()
{
	int a;
	a=fun();
//	printf("%d\n",fun());
	printf("%d\n",a);

}
/*int foo1(void)
{
    int p;
    p = 99;
    return p;
}

char *foo2(void)
{
//    char buffer[] = "test_123";
	char *buffer;
	buffer=malloc(10);
	strcpy(buffer,"sandeep");
    return buffer;
}

int *foo3(void)
{
    int t[3] = {1,2,3};
    return t;
}

int main(void)
{
    int *p;
    char *s;

    printf("foo1: %d\n", foo1());
    printf("foo2: %s\n", foo2());
   // printf("foo3: %d, %d, %d\n", p[0], p[1], p[2]);
    return 0;
}*/
