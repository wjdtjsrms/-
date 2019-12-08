#include <iostream>

int main(){

  char operation;
  double LValue,RValue=0.00;
  double result=0.00;

  std::cin>>operation>>LValue>>RValue;

  if(operation=='+'){
    result=LValue+RValue;
  }
  else if(operation=='-'){
    result=LValue-RValue;
  }
  else if(operation=='*'){
    result=LValue*RValue;
  }
  else if(operation=='/'){
    result=LValue/RValue;
  }

  else{
    std::cout<<"Wrong Value"<<std::endl;
    return 0;
  }

  std::cout<<result<<std::endl;

  return 0;
}
