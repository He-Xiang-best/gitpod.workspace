#ifndef _NUMBERTOOL_H_
#define _NUMBERTOOL_H_

#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;

/*
 * @ClassName NumberTool
 * @description: TODO
 * @author: 何翔
 * @Date 2021/4/10 23:22
 */

class NumberTool
{

public:
NumberTool(){};
~NumberTool(){};
   int getIntegerNumber(bool DataCanBeNegative);
   double getDoubleNumber(bool DataCanBeNegative);
   void output(){
      cout << "The data currently entered is incorrect. Please re-enter it." << endl;
   }
};

int NumberTool::getIntegerNumber(bool DataCanBeNegative)
{
   string str;
   cin >> str;
   int i = 0;
   bool state = true;
   if (!DataCanBeNegative)
   {
      //不允许为负数的状态量
      state = false;
   }
   for (; i < str.length(); i++)
   {
      if (DataCanBeNegative)
      {
         if (str.at(0) == '-')
         {
            DataCanBeNegative = false;
            continue;
         }
      }
      if (!isdigit(str.at(i)))
      {
         output();
         cin >> str;
         i = -1;
         if (state)
            DataCanBeNegative = true;
      }
   }
   return atoi(str.c_str());
}

double NumberTool::getDoubleNumber(bool DataCanBeNegative){
      string str ;
      cin>>str;
        int i = 0;
        int pointCount=0;
        bool state =true;
        if (!DataCanBeNegative) {
            //不允许为负数的状态量
             state = false;
        }
        for (; i < str.length(); i++) {
            if(DataCanBeNegative){
                if (str.at(0)=='-'){
                    DataCanBeNegative = false;
                    continue;
                }
            }
            if (!isdigit(str.at(i))){
                if (str.at(i)=='.'){
                    pointCount++;
                    if (pointCount>1||i==0){
                      output();
                        cin>>str;
                        pointCount=0;
                        i=-1;
                        if(state) DataCanBeNegative = true;
                    }
                }else {
                  output();
                    cin>>str;
                    i=-1; pointCount=0;
                    if(state) DataCanBeNegative = true;
                }
            }
        }

    return atof(str.c_str());
}


#endif
