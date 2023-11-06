#include <stdio.h>

int main()
{
  int main;
  int hour,min;
  double ha,ma,tmp1,tmp2,angle;
  scanf("%d %d",&hour,&min);
  ha=(hour*60+min)*0.5;
  ma=min*6;
  if(ha<=ma){
      tmp1=ma;
      tmp2=ha;
  }
  else{
      tmp1=ha;
      tmp2=ma;
  }
  angle=tmp1-tmp2;
  if(angle>180){
      angle=360-angle;
      printf("%0.3f\n",angle);
  }
  else{
      printf("%0.3f\n",angle);
  }
}
  
