//
//  IntegerTriangleLevel3.cpp
//  testConsole
//
//  Created by 노원종 on 2021/09/26.
//

#include "IntegerTriangleLevel3.hpp"

#include <algorithm>

int
IntegerTriangleLevel3::solution(vector<vector<int>> triangle) {
    int answer = 0;
    int sum = triangle.at(0).at(0);
    vector<vector<int>> map;
    if (triangle.size() == 1) {
        return sum;
    }
    vector<int> firstRow = {triangle.at(0).at(0)};
    map.push_back(firstRow);
    
    for (int height = 1 ; height < triangle.size() ; ++height) {
        vector<int> row;
        for (int i = 0 ; i < triangle.at(height).size() ; ++i) {
            int temp = triangle.at(height).at(i);
            
            int leftUp = 0;
            if (i != 0) {
                leftUp = map.at(height - 1).at(i - 1);
            }
            int rightUp = 0;
            
            if (i != triangle.at(height).size() - 1) {
                rightUp = map.at(height - 1).at(i);
            }
            if (leftUp > rightUp) {
                temp += leftUp;
            } else {
                temp += rightUp;
            }
            row.push_back(temp);
        }
        map.push_back(row);
        
    }
    vector<int> lastRow = map.at(map.size() - 1);
    answer = *max_element(lastRow.begin(), lastRow.end());
    
    return answer;
}

void
IntegerTriangleLevel3::ShowResult() {
    vector<vector<int>> inputData = {
        {7}, {3, 8}, {8, 1, 0}, {2, 7, 4, 4}, {4, 5, 2, 6, 5}
    };
    // Result 30
    cout << "ShowResult!" << endl;
    cout << solution(inputData) << endl;
}
