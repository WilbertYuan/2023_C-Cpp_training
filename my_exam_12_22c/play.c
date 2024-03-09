#include<stdio.h>
#define initial(a) int main(){ a return 0;}
#define print(a) printf("a");
#define print_int(a) printf("%d",a);
#define input(a) scanf_s("%d",&a);
#define create(a) int a = 0;
#define doublenode(a) typedef struct a{struct a* prev;int data;struct a* next;}a;
#define if_it_is_NULL(a) if(a == NULL) {printf("error !");exit(1);}
#define content_of(a) a->data
#define nextone_of(a) a->next
#define previousone_of(a) a->prev

doublenode(haha)

initial(create(s)
	     input(s)
	 print_int(s))
	