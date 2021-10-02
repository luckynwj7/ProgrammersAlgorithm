//
//  PracticeMatrixChain.cpp
//  testConsole
//
//  Created by 노원종 on 2021/10/01.
//

#include "PracticeMatrixChain.hpp"

int
PracticeMatrixChain::solution(vector<vector<int>> path) {
    int answer = 0;
    
    vector<vector<int>> calMap(4);
    for (int i = 0 ; i < calMap.size() ; ++i) {
        vector<int> row(calMap.size());
        calMap.at(i) = row;
        calMap.at(i).at(i) = 0; // calMap초기화
    }
    
    for (int margin = 0 ; margin < path.size() - 1 ; ++margin) {
        for (int i = 0 ; i < path.size() - 1 ; ++i) {
            for (int j = i + 1 ; j < path.size() ; ++j) {
                calMap.at(i).at(j) = path.at(i).at(0) * path.at(i).at(1) * path.at(j).at(1);
                
            }
        }
    }

    return answer;
}

void
PracticeMatrixChain::ShowResult() {
    cout << "ShowResult!" << endl;
    vector<vector<int>> inputData= {
        {10, 20},
        {20, 5},
        {5, 15},
        {15, 30}
    };
    cout << solution(inputData) << endl;
}
