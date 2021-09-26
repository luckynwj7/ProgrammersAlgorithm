//
//  124NationLevel2.cpp
//  testConsole
//
//  Created by 노원종 on 2021/09/20.
//

#include "OneTwoFourNationLevel2.hpp"

#include <string>
#include <vector>

string
OneTwoFourNationLevel2::solution(int n) {
    string answer = "";
    /*for (int i = 1 ; i < n ; ++i) {
        int strPoint = static_cast<int>(answer.length() - 1);
        bool exitFlag = true;
        for ( ; strPoint >= 0 ; --strPoint) {
            switch (answer.at(strPoint)) {
                case '1':
                    answer.at(strPoint) = '2';
                    exitFlag = true;
                    break;
                case '2':
                    answer.at(strPoint) = '4';
                    exitFlag = true;
                    break;
                case '4':
                    answer.at(strPoint) = '1';
                    exitFlag = false;
                    if (strPoint == 0) {
                        answer = "1" + answer;
                        exitFlag = true;
                    }
                    break;
            }
            if (exitFlag) {
                break;
            }
        }
    }*/
    string temp[3]{"4", "1", "2"};
    while (n) {
        answer = temp[n % 3]+ answer;
        if (!(n % 3))
            n = n / 3 - 1;
        else
            n = n/3;
    }
    
    return answer;
}

void
OneTwoFourNationLevel2::ShowResult() {
    // n    result
    // 1    1
    // 2    2
    // 3    4
    // 4    11
    int inputData;
    for (inputData = 1 ; inputData < 100 ; inputData ++) {
        cout << inputData << ":" << solution(inputData) << endl;
    }
    
}
