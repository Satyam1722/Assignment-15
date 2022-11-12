#include<stdio.h>
void frequency(int a[],int n){
  int i,j,count,f;

  for(i=0;i<n;i++){
        f=1;
        count=1;
    for(j=0;j<i;j++){
        if(a[i]==a[j]){
            f=0;
            break;
        }

    }

    if(f){
       for(j=i+1;j<n;j++)
        if(a[i]==a[j])
        count++;

    printf("%d : %d times\n",a[i],count);
    }

  }


}

int main(){
 int i,n,a[n];
 printf("enter the limit : ");
 scanf("%d",&n);


 for(i=0;i<n;i++)
    scanf("%d",&a[i]);

 frequency(a,n);

 return 0;
}











