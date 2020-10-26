// #include <iostream>
#include <algorithm>
#include <string>

#define str string

using namespace std;


str sumBigNum(str numFirst, str numSecond){
    if(numFirst.length() < numSecond.length()){
        swap(numFirst, numSecond);
    } 
    
    while (numFirst.length() != numSecond.length()){
        numSecond = "0" + numSecond;
    }

    // cout << numFirst << " " << numSecond;

    int extra = 0;

    str sumTwoNum = ""; 
    for(int index = 0; index < numFirst.length(); index++){
        int sumTemp = ( (int) numFirst[numFirst.length() - 1 - index] - 48) +  ( (int) numSecond[numFirst.length() - 1 - index] - 48 ) + extra;
        // cout <<( (int) numFirst[numFirst.length() - 1 - index] - 48) +  ( (int) numSecond[numFirst.length() - 1 - index] - 48 )<< " ";
        
        if(sumTemp > 9){
            extra = 1;
            sumTemp %= 10;
            sumTwoNum += (char) sumTemp + 48;
        } else {
            extra = 0;
            sumTwoNum += (char) sumTemp + 48;
        }
    }

    if(extra == 1){
        sumTwoNum += "1";

    } 

    str newSumTwoNum = "";
    str newFinalSumTwoNum = "";

    for(int index = 0; index < sumTwoNum.length(); index++){
        newSumTwoNum += sumTwoNum[sumTwoNum.length() - index - 1];
    }

    int check = 0;
    bool fix = false;

    for(int index = 0; index < sumTwoNum.length(); index++){
        if(newSumTwoNum[index] == '0'){
            check++;
            fix = true;
        } else {
            break;
        }
    }
    for(int index = check; index < sumTwoNum.length(); index++){
        newFinalSumTwoNum += newSumTwoNum[index];
       
    }
    if(newFinalSumTwoNum.length() == 0){
        return "0";
    }

    return newFinalSumTwoNum;


    
 
    
}

int main(){
    int testCase;
    cin >> testCase;
    cin.ignore();

    while(testCase--){
        str numFirst, numSecond;
        getline(cin, numFirst);
        getline(cin, numSecond);

        cout << sumBigNum(numFirst, numSecond) << endl;
    }
}