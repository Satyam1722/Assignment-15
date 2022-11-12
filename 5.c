#include<stdio.h>
int duplicate(int a[],int n){
  int i,temp=a[0];

  for(i=1;i<n;i++){
    if(temp==a[i])
        return a[i];
    temp=a[i];
  }
  return 0;

}

int main(){
 int i,n,a[n];
 printf("enter the limit : ");
 scanf("%d",&n);


 for(i=0;i<n;i++)
    scanf("%d",&a[i]);

  printf("adjacent duplicate value is : %d",duplicate(a,n));

 return 0;
}








