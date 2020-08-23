#include <4digit7segment.h>

void setup(){
  init_7seg();
}

int count1=0;
int count2=0;
void time_Display(int current_hour,int current_minute){
  if(count1==0){
    for(int i=current_hour;i<24;i++){
      if(count2==0){
        for(int j=current_minute;j<60;j++){
          Display_4digit_2(i,j);
        }
        count2++;
      }else if(count2>=1){
        for(int j=0;j<60;j++){
          Display_4digit_2(i,j);
        }
      }
    }
    count1++;
  }else if(count1>=1){
    for(int i=0;i<24;i++){
      for(int j=0;j<60;j++){
        Display_4digit_2(i,j);
      }
    }
  }
}

void loop(){
  time_Display(12,34);
}
