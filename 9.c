#include<stdio.h>
void merge(int a[],int b[],int n){
  int i,j,c[n+n],temp;

  for(i=0;i<n;i++)
    c[i]=a[i];
  for(i=0;i<n;i++)
    c[n+i]=b[i];

   for(i=0;i<2*n;i++){
    for(j=0;j<2*n;j++){
        if(c[i]>c[j]){
            int temp=c[j];
            c[j]=c[i];
            c[i]=temp;
        }
    }

 }

 for(i=0;i<2*n;i++)
    printf("%d ",c[i]);


}

int main(){
 int i,n,a[n],b[n];
 printf("enter the limit : ");
 scanf("%d",&n);


 for(i=0;i<n;i++)
    scanf("%d",&a[i]);

 for(i=0;i<n;i++)
    scanf("%d",&b[i]);

  merge(a,b,n);

 return 0;
}











