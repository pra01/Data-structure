#include <iostream>
using namespace std;
int size;

int hasht(int key)
{
 int i ;
 i = key%size ;
 return i;
}

int linear_probing(int key)
{
 int i ;
 i = (key+1)%size ;
 return i ;
}
int quadratic_probing(int key, int j)
{
 int i ;
 i = (key+(j*j))%size ;
 return i ;
}

int main()
{
    int key,arr[20],hash[20],i,n,s,op,j,k ;

    printf ("Enter the size of the hash table:  ");
    scanf ("%d",&size);

    printf ("\nEnter the number of elements: ");
    scanf ("%d",&n);

    for (i=0;i<size;i++)
 hash[i]=-1 ;

    printf ("Enter Elements: ");
    for (i=0;i<n;i++)
    {
 scanf("%d",&arr[i]);
    }

    do
    {
 printf("\n\n1.Linear Probing\n2.Quadratic Probing \n3.Exit \nEnter your option: ");
 scanf("%d",&op);
 switch(op)
 {
 case 1:
     for (i=0;i<size;i++)
     hash[i]=-1 ;

     for(k=0;k<n;k++)
     {
  key=arr[k] ;
  i = hasht(key);
  while (hash[i]!=-1)
  {
      i = linear_probing(i);
  }
  hash[i]=key ;
     }
     printf("\nThe elements in the array are: ");
     for (i=0;i<size;i++)
     {
  printf("\n  Element at position %d: %d",i,hash[i]);
     }
     break ;

 case 2:
     for (i=0;i<size;i++)
  hash[i]=-1 ;

     for(k=0;k<n;k++)
     {
  j=1;
  key=arr[k] ;
  i = hasht(key);
  while (hash[i]!=-1)
  {
      i = quadratic_probing(i,j);
      j++ ;
  }
  hash[i]=key ;
     }
     printf("\nThe elements in the array are: ");
     for (i=0;i<size;i++)
     {
  printf("\n Element at position %d: %d",i,hash[i]);
     }
     break ;

 }
    }while(op!=3);


}
