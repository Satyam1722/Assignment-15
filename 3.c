#include<stdio.h>

void sort(int a[],int n){
  int i,j,temp;
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if(a[i]<a[j]){
            int temp=a[j];
            a[j]=a[i];
            a[i]=temp;
        }
    }

  }

}

int main(){
 int i,n,a[n];
 printf("enter the limit : ");
 scanf("%d",&n);


 for(i=0;i<n;i++)
    scanf("%d",&a[i]);

  sort(a,n);

  for(i=0;i<n;i++)
    printf("%d ",a[i]);

 return 0;
}






