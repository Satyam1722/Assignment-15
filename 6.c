#include<stdio.h>
void r_w(int a[],int n){
 int i;
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);

  for(i=n-1;i>=0;i--)
    printf("%d ",a[i]);

}

int main(){
 int i,n,a[n];
 printf("enter the limit : ");
 scanf("%d",&n);
 r_w(a,n);

 return 0;
}








