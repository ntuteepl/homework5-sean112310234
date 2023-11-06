#include <stdio.h>

int main()
{
  int main;
  int tim,rate;
  double t1,t2,t3;
  scanf("%d %d",&tim,&rate);
  if(tim<=60){
    t1=tim*rate;
    printf("%0.1f\n",t1);
  }
  else if(tim>60&&tim<=120){
    t2= t1+(tim-60)*rate*1.3;
    printf("%0.1f\n",t2);
  }
  else if(tim>120){
    t3=t2+(tim-120)*rate*1.66;
    printf("%0.1f\n",t3);
  }

}
