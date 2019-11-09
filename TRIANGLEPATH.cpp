// TRIANGLEPATH
#include <iostream>

int main(void){

  int Total = 1;
  int repeat = 5;
  int loop = 0;
  int Test_Value[20]={6,1,2,3,7,4,9,4,1,7,2,7,5,9,4};
  int i=0;
  int index=0;

    for(i = 0; i<repeat; i++){
      for(loop = 0; loop <= i; loop++){
          std::cout<<Test_Value[index]<<" ";
          index++;
      }

      std::cout<<std::endl;
      std::cout<<"test"<<std::endl;
    }



  return 0;
}
