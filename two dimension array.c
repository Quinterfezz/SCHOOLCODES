//arrays in c
#include<stdio.h>
int main(){

int k,m;
int marks[3][2]={{{10,50},{90,15},{30,65}}};
for(k=0;k<3;k++){
for(m=0;m<2;m++){
printf("marks[%d][%d]=%d\n",k,m,marks[k][m]);
}
}
return 0;
}
