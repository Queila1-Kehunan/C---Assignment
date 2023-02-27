#include<stdio.h>

int Largest(int *pa,int *pb,int *pc){
	
	int a,b,c;
 *pa = &a;
 *pb = &b;
  *pc = &c;

  if (*pa > *pb)
  {
    if(*pa > *pc)
    {
      printf("\nThe Largest Among Three = %d\n", *pa);
    }
    else
    {
      printf("\nThe Largest Among Three = %d\n", *pc);
    }
  }
  else
  {
    if(*pb > *pc)
    {
      printf("\nThe Largest Among Three = %d\n", *pb);
    }
    else
    {
      printf("\nThe Largest Among Three = %d\n", *pc);
    }
  }
}
	


 
}
main(){

 int a, b, c; 

  printf("Please Enter three Number to find Largest\n");
  scanf("%d %d %d", &a, &b, &c);	
}
