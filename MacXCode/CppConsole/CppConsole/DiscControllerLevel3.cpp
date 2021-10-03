//
//  DiscControllerLevel3.cpp
//  testConsole
//
//  Created by 노원종 on 2021/10/03.
//

#include "DiscControllerLevel3.hpp"

#include <algorithm>
#include <queue>
#include <iostream>

using namespace std;

struct compare {
    bool operator() (vector<int> a, vector<int> b) {
        return a.at(1) > b.at(1);
    }
};

int
DiscControllerLevel3::solution(std::vector<std::vector<int>> jobs) {
    int answer = 0;
    sort(jobs.begin(), jobs.end());
    priority_queue<vector<int>, vector<vector<int>>, compare> pq;
    
    int jobsIndex = 0;
    int curTime = 0;
    int result = 0;
    while (jobsIndex < jobs.size() || pq.size() > 0) {
        if (jobsIndex < jobs.size() && curTime >= jobs.at(jobsIndex).at(0)) {
            pq.push(jobs.at(jobsIndex));
            jobsIndex++;
            continue;
        }
        
        if(pq.size() > 0) {
            vector<int> curVec = pq.top();
            pq.pop();
            curTime += curVec.at(1);
            result += (curTime - curVec.at(0));
        } else {
            curTime = jobs.at(jobsIndex).at(0);
        }
    }
    answer = result / jobs.size();
    return answer;
}

void
DiscControllerLevel3::ShowResult() {
    cout << "DiscControllerLevel3 Result Show!" << endl;
    vector<vector<int>> inputData = {
        {0, 3}, {1, 9}, {2,6}
    };
    // Result 9
    cout << solution(inputData) << endl;
}
