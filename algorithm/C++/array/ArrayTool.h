#ifndef _ARRAYTOOL_H_
#define _ARRAYTOOL_H_
#include <iostream>
#include <cstring>
#include <math.h>
#include <cstdlib> 
#include <ctime>
#include "NumberTool.h"
using namespace std;

class ArrayTool
{
private:

public:
ArrayTool(){}
~ArrayTool(){}
double maxCompare(double num1,double num2);
double minCompare(double num1,double num2);
int* getRandomIntegerArray(int size,double min,double max);
float* getRandomFloatArray(int size,double min,double max);
int* getCustomIntegerArray(int size,bool DataCanBeNegative);
float* getCustomFloatArray(int size,bool DataCanBeNegative);
void output(){
      cout << "Please enter the data of the array in turn,and after each data is written, press enter." << endl;
   }
};

double ArrayTool::maxCompare(double num1,double num2){
    if (num1>num2) return num1;
    else return num2;
}

double ArrayTool::minCompare(double num1,double num2){
    if (num1<num2) return num1;
    else return num2;

}

int* ArrayTool::getRandomIntegerArray(int size,double min,double max){
    int* array = new int[size];
    max = maxCompare(min,max);
    min = minCompare(min,max);
    srand(time(0));  //设置时间种子
    for (int i = 0; i < size; i++) {
        array[i] = rand() / (double)RAND_MAX *(max - min) + min;
    }
    return array;
    }

 float* ArrayTool::getRandomFloatArray(int size,double min,double max){
        float* array = new float[size];
        max = maxCompare(min,max);
        min = minCompare(min,max);
        srand(time(0));  //设置时间种子
        for (int i = 0; i < size; i++) {
            array[i] =rand() / (double)RAND_MAX *(max - min) + min;
        }
        return array;
    }

 int* ArrayTool::getCustomIntegerArray(int size,bool DataCanBeNegative){
        int* array = new int[size];
        cout<<"------------------------------------------"<<endl;
        output();
        NumberTool numTool;
        for (int i = 0; i < size; i++) {
            array[i] = numTool.getIntegerNumber(DataCanBeNegative);
        }
       cout<<"------------------------------------------"<<endl;
        return array;
    }

 float* ArrayTool::getCustomFloatArray(int size,bool DataCanBeNegative){
        float* array = new float[size];
        cout<<"------------------------------------------"<<endl;
        output();
        NumberTool numTool;
        for (int i = 0; i < size; i++) {
            array[i] = numTool.getDoubleNumber(DataCanBeNegative);
        }
        cout<<"------------------------------------------"<<endl;
        return array;
    }

#endif