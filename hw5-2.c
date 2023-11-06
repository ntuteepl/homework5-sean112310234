#include <stdio.h>
#include <stdlib.h>

int main()
{
  int min;
  double f,g,h;
  scanf("%d",&min);
  if(min<=800){
    f=min*0.9;
    printf("%0.2f\n",f);
  }
  else if(min>800&&min<=1500){
    f=min*0.9*0.9;
    printf("%0.2f\n",f);
  }
  else if(min>1500){
    f=min*0.79;
    printf("%0.2f\n",f);
  }

}
