#include <stdio.h>

int main()
{
  int main;
  int tim,rate;
  double total;
  scanf("%d %d",&tim,&rate);
  if(tim<=60){
    total=tim*rate;
    printf("%0.1f\n",total);
  }
  else if(tim>60&&tim<=120){
    total=tim*rate*1.3;
    printf("%0.1f\n",total);
  }
  else if(tim>120){
    total=tim*rate*1.66;
    printf("%0.1f\n",total);
  }

}
