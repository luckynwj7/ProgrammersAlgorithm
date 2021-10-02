//
//  PracticeDPCoinChange.cpp
//  testConsole
//
//  Created by 노원종 on 2021/10/02.
//

#include "PracticeDPCoinChange.hpp"

using namespace std;

int
PracticeDPCoinChange::solution(vector<int> coinValue, int balanace) {
    int answer = 0;
    
    vector<int> map(balanace + 1, 0);
    for (int i = 1 ; i < map.size(); ++i) {
        int minValue = 9999;
        for (int j = 0 ; j < coinValue.size(); ++j) {
            int nmgBalance = i - coinValue.at(j);
            int curValue = 9999;
            if (nmgBalance >= 0) {
                curValue = 1 + map.at(nmgBalance);
            }
            if (minValue > curValue) {
                minValue = curValue;
            }
        }
        map.at(i) = minValue;
        cout << i << ":" << minValue << endl;
    }
    answer = map.at(balanace);
    
    
    return answer;
}

void
PracticeDPCoinChange::ShowResult() {
    cout << "PracticeDPCoinChange!" << endl;
    vector<int> inputData1 = {16, 10, 5, 1};
    int inputData2 = 20;
    cout << solution(inputData1, inputData2) << endl;
}
