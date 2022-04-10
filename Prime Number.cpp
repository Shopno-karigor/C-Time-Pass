//Find Prime numbers from 0 to given limit
#include<stdio.h>
int main()
{
   int n, i = 3, count, c;
   printf("Enter the high limit of prime numbers required:\n");
   scanf("%d",&n);
   if ( n >= 1 )
   {
      printf("Prime numbers from 0 to %d are :\n",n);
      printf("2\n");
   }
   for ( count = 2 ; count <= n ; count++  )
   {
      for ( c = 2 ; c <= i - 1 ; c++ )
      {
         if ( i%c == 0 )
            break;
      }
      if ( c == i )
      {
         printf("%d\n",i);
         count++;
      }
      i++;
   }
   return 0;
}
