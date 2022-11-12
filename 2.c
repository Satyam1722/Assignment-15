#include<stdio.h>

int small(int a[],int n){
 int i,sm=a[1];
 for(i=0;i<n;i++){
    if(sm>a[i])
        sm=a[i];
 }

 return sm;

}

int main(){
 int i,n,a[n];
 printf("enter the limit : ");
 scanf("%d",&n);


 for(i=0;i<n;i++)
    scanf("%d",&a[i]);

 printf("%d ",small(a,n));

 return 0;
}





