#include<stdio.h>
void printar(int a[],int n){
int i=0;

for(i=0;i<n;i++){
printf("\t %d",a[i]);
}
printf("\n \n");
}
void main(){

int a[5]={4,5,1,3,8};
printar(a,5);
int n=5;
int i,j;
int key;
j=1;
for(j=1;j<n;j++){
i=j-1;
key=a[j];
while(i>=0 && a[i]>key){
a[i+1]=a[i];
i--;

}
a[i+1]=key;
}
printar(a,5);
}
