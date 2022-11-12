#include<stdio.h>

int max(int a[],int n){
 int i,max=a[1];
 for(i=1;i<n;i++){
    if(max<a[i])
        max=a[i];
 }

 return max;

}

int main(){
 int i,n,a[n];
 printf("enter the limit : ");
 scanf("%d",&n);


 for(i=0;i<n;i++)
    scanf("%d",&a[i]);

 printf("%d ",max(a,n));

 return 0;
}




