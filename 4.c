#include<stdio.h>
void rotate(int a[],int n,int p,int d){
  int i,j,temp;

  if(d==1){
    for(i=0;i<p;i++)
  {
      temp=a[0];
      for(j=0;j<n-1;j++)
        a[j]=a[j+1];
      a[n-1]=temp;
  }

  }
  else if(d==2){
    for(i=0;i<p;i++)
  {
      temp=a[n-1];
      for(j=n-1;j>=0;j--)
        a[j]=a[j-1];
      a[0]=temp;
  }
  }
  else
    printf("invalid direction");

}

int main(){
 int i,n,d,p,a[n];
 printf("enter the limit : ");
 scanf("%d",&n);


 for(i=0;i<n;i++)
    scanf("%d",&a[i]);

 printf("enter the number of position : ");
 scanf("%d",&p);
 printf("enter the direction : 1:left 2:right  ::");
 scanf("%d",&d);

  rotate(a,n,p,d);

  for(i=0;i<n;i++)
    printf("%d ",a[i]);

 return 0;
}







