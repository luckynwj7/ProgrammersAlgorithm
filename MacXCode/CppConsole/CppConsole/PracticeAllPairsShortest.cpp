//
//  PracticeAllPairsShortest.cpp
//  testConsole
//
//  Created by 노원종 on 2021/10/01.
//

#include "PracticeAllPairsShortest.hpp"

vector<vector<int>>
PracticeAllPairsShortest::solution(vector<vector<int>> path) {
    for (int k = 0 ; k < path.size(); ++k) {
        for (int i = 0 ; i < path.size() ; ++i) {
            for (int j = 0 ; j < path.size(); ++j) {
                int cmpValue = path.at(i).at(k) + path.at(k).at(j); // k라는 점을 지났을 때의 값
                // K라는 점을 들려보고 난 다음에 최적의 경로를 찾아낸다.
                if (cmpValue < path.at(i).at(j)) {
                    path.at(i).at(j) = cmpValue;
                }
            }
        }
    }
    return path;
}

void
PracticeAllPairsShortest::ShowResult() {
    cout << "ShowResult!" << endl;
    vector<vector<int>> inputData = {
        {0, 4, 2 ,5, 99},
        {99, 0, 1, 99 ,4},
        {1, 3, 0, 1 ,2},
        {-2, 99, 99, 0, 2},
        {99, -3, 3, 1, 0}
    };
    for (vector<int> row : solution(inputData)) {
        for (int col : row) {
            cout << col << "    ";
        }
        cout << endl;
    }
}
