#include<stdio.h>
void duplicate(int a[],int n){
  int i,j,f;

  for(i=0;i<n;i++){
        f=1;
    for(j=0;(j<n)&&(j!=i);j++){
        if(a[i]==a[j]){
            f=0;
            break;
        }
    }

   if(f){
    printf("%d ",a[i]);
  }

  }

}

int main(){
 int i,n,a[n];
 printf("enter the limit : ");
 scanf("%d",&n);


 for(i=0;i<n;i++)
    scanf("%d",&a[i]);

  duplicate(a,n);

 return 0;
}










