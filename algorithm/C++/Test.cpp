#include <iostream>
#include "NumberTool.h"
#include "ArrayTool.h"
using namespace std;

int length(int* array){
    return sizeof(array)/sizeof(int);
}

void print(int* array,int size){
    for (int i = 0; i <size; i++)
    {
        cout<<array[i]<<endl;
    }

}

void print(float* array,int size){
    for (int i = 0; i <size; i++)
    {
        cout<<array[i]<<endl;
    }

}

void test(){
    cout<<"请依次输入一个小数和一个整数"<<endl;
    NumberTool* tool = new NumberTool();
    double i1 = tool->getDoubleNumber(true);
    NumberTool tool2;
    int i2 = tool2.getIntegerNumber(false);
    cout<<"输入的数据是："<<endl;
    cout<<i1<<endl;
    cout<<i2<<endl;
}

void test2(){
    ArrayTool arrayTool;
    float* array =arrayTool.getRandomFloatArray(5,-10,20);
    // int* array =arrayTool.getRandomIntegerArray(5,-10,20);
    print(array,5);
}

int main()
{
    cout << "-------------------------------------------------" << endl;
test2();
    cout << "-------------------------------------------------" << endl;
    return 0;
}
