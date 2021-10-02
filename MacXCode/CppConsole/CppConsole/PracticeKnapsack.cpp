//
//  PracticeKnapsack.cpp
//  testConsole
//
//  Created by 노원종 on 2021/10/02.
//

#include "PracticeKnapsack.hpp"

using namespace std;

int
PracticeKnapsack::solution(vector<vector<int>> knapsack, int capacity) {
    int answer = 0;
    
    vector<vector<int>> map;
    for (int i = 0 ; i < knapsack.size() ; ++ i) {
        vector<int> row(capacity + 1, 0);
        map.push_back(row);
    }
    
    for (int i = 0 ; i <= capacity ; ++i) {
        if (i >= knapsack.at(0).at(0)) {
            map.at(0).at(i) = knapsack.at(0).at(1);
        }
    }
    
    for (int i = 1 ; i < knapsack.size() ; ++i) {
        for (int j = 0 ; j <= capacity ; ++j) {
            int nmgWeight = j - knapsack.at(i).at(0);
            int curValue = 0;
            if (nmgWeight >= 0) {
                curValue = knapsack.at(i).at(1);
                curValue += map.at(i - 1).at(nmgWeight);
            }
            
            if (curValue < map.at(i - 1).at(j)) {
                map.at(i).at(j) = map.at(i - 1).at(j);
            } else {
                map.at(i).at(j) = curValue;
            }
        }
        Inflator::SurfaceVectorDebuging(map);
        cout << "----------------------------" << endl;
    }
    answer = map.at(knapsack.size()-1).at(capacity);
    
    return answer;
}

void
PracticeKnapsack::ShowResult() {
    cout << "ShowPracticeKnapsackResult!" << endl;
    vector<vector<int>> inputData1= {
        {5, 10},
        {4, 40},
        {6, 30},
        {3, 50}
    };
    int inputData2 = 10;
    // 90 result;
    cout << solution(inputData1, inputData2) << endl;
}
