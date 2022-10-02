1. Define a function to input variable length string and store it in an array without
memory wastage.

#include<stdio.h>
#include <stdlib.h>
char *getLength(int size)
{
   char *ptr;
   ptr= (char *)malloc(size*sizeof (char ));
   printf("Enter string: ");
   fgets(ptr,size,stdin);
   return ptr;
}

int main()
{
   char *q;
   q= getLength(5);
   printf("%s",q);
   return 0;
}


2. Write a program to ask the user to input a number of data values he would like to
enter then create an array dynamically to accommodate the data values. Now take
the input from the user and display the average of data values.

#include <stdio.h>
#include <stdlib.h>
int main()
{
   int n;
   printf("\nEnter number od values: ");
   scanf("%d",&n);
   int *ptr;
   ptr= malloc(n*sizeof (int));
   printf("\nEnter values: ");
   for (int i = 0; i < n; ++i) {
       scanf("%d",ptr+i);
   }

   int sum=0;
   float avg;
   for (int i = 0; i < n; ++i) {
       sum+=ptr[i];
   }
   avg=(sum)/n;
   printf("%f",avg);

   return 0;
}

3. Write a program to calculate the sum of n numbers entered by the user using malloc
and free.

#include <stdio.h>
#include <stdlib.h>
int main()
{
   int n;
   printf("\nEnter number od values: ");
   scanf("%d",&n);
   int *ptr;
   ptr= malloc(n*sizeof (int));
   for (int i = 0; i < n; ++i)
   {
       scanf("%d",ptr+i);
   }
   int sum=0;
   for (int i = 0; i < n; ++i)
   {
       sum+=ptr[i];
   }
   printf("\n%d",sum);
   free(ptr);
   ptr=NULL;

   return 0;
}
4. Write a program to input and print text using dynamic memory allocation.

#include<stdio.h>
#include <stdlib.h>
char *inputText(int size)
{
   char *ptr;
   ptr= (char *)malloc(size*sizeof (char ));
   printf("Enter string: ");
   fgets(ptr,size,stdin);
   return ptr;
}

int main()
{
   char *q;
   q= inputText(20);
   printf("%s",q);
   return 0;
}

5. Write a program to read a one dimensional array, print sum of all elements along with
       inputted array elements using dynamic memory allocation.

#include <stdio.h>
#include <stdlib.h>
int main()
{
   int *ptr;
   ptr= (int *)malloc(5*sizeof (int));
   printf("\nPlease Enter 5 numbers: ");
   for (int i = 0; i < 5; ++i) {
       scanf("%d",ptr+i);
   }
   int sum=0;
   for (int i = 0; i < 5; ++i) {
       printf("%d ",*(ptr+i));
       sum+=ptr[i];
   }
   printf("\n%d",sum);

   return 0;
}

6. Write a program in C to find the largest element using Dynamic Memory Allocation.

#include <stdio.h>
#include <stdlib.h>
int main()
{
   int *ptr;
   ptr= (int *)malloc(5*sizeof (int));
   printf("\nPlease Enter 5 numbers: ");
   for (int i = 0; i < 5; ++i) {
       scanf("%d",ptr+i);
   }
   int max=ptr[0];
   for (int i = 1; i < 5; ++i) {
       if(max<ptr[i])
           max=ptr[i];
   }
   printf("\n%d",max);

   return 0;
}

7. Write a program to demonstrate memory leak in C.

#include <stdio.h>
#include <stdlib.h>
void f1()
{
   int *ptr;
   ptr= (int *)malloc(4*sizeof (int ));
   printf("Enter five number: ");
   for (int i = 0; i < 4; ++i) {
       scanf("%d",ptr+i);
   }

}

int main()
{
   f1();
   return 0;
}

8. Write a program to demonstrate dangling pointers in C.

#include <stdio.h>
#include <stdlib.h>
int main()
{
   int *ptr;
   ptr=(int *) malloc(4*sizeof (int));
   free(ptr);
   return 0;
}


9. Write a program to allocate memory dynamically of the size in bytes entered by the
       user. Also handle the case when memory allocation is failed.

#include<stdio.h>
#include <stdlib.h>
int main()
{
   int size;
   printf("\nEnter size: ");
   scanf("%d",&size);
   int *ptr;
   ptr=(int *) malloc(size*sizeof (int));
   if(ptr==NULL)
   {
       printf("Memory if full\n");
       exit(1);
   }

   return 0;
}


10. Find out the maximum and minimum from an array using dynamic memory allocation
in C
#include <stdio.h>
#include <stdlib.h>
int main()
{
   int *ptr;
   ptr= (int *)malloc(5*sizeof (int));
   printf("\nPlease Enter 5 numbers: ");
   for (int i = 0; i < 5; ++i) {
       scanf("%d",ptr+i);
   }
   int max=ptr[0];
   int min=ptr[0];
   for (int i = 1; i < 5; ++i) {
       if(max<ptr[i])
           max=ptr[i];
       else
           min=ptr[i];
   }
   printf("\nmax is %d",max);
   printf("\n min is %d",min);

   return 0;
}


