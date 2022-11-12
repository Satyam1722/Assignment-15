#include<stdio.h>
int duplicate(int a[],int n){
  int i,j,count=0;

  for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(a[i]==a[j]){
            count++;
            break;
        }
    }

  }

  return count;

}

int main(){
 int i,n,a[n];
 printf("enter the limit : ");
 scanf("%d",&n);


 for(i=0;i<n;i++)
    scanf("%d",&a[i]);

  printf("total duplicate is : %d",duplicate(a,n));

 return 0;
}









