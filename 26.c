//wap to input subject of five marks and diplay grade accordingly
#include<stdio.h>
int main(){
int m1,m2,m3,m4,m5,total,average;
printf("Enter marks of five sujects");
scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
total=m1+m2+m3+m4+m5;
average=total/5;
if(average>=90){
    printf("GRADE:A+");
}
else if(average>=80 && average<90){
    printf("GRADE:A");
}
else if(average>=70 && average<80){
    printf("GRADE:B+");
}
else if(average>=60 && average<70){
    printf("GRADE:B");
}
else if(average>=50 && average<60){
    printf("GRADE:C");
}
else if(average<50){
    printf("GRADE:FAIL");
}
return 0;
}