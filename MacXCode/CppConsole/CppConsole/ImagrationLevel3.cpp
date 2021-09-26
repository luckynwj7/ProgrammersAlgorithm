//
//  ImagrationLevel3.cpp
//  testConsole
//
//  Created by 노원종 on 2021/09/26.
//

#include "ImagrationLevel3.hpp"

#include <string>
#include <vector>

using namespace std;

long long
ImagrationLevel3::solution(int n, vector<int> times) {
    long long answer = 0;
    
    /*int count = 0;
    while (n > 0) {
        for (int i = 0 ; i < times.size() ; ++i) {
            if (count % times.at(i) == 0) {
                --n;
            }
        }
        ++count;
    }
    answer = count;*/
    
    /*int maxValue = *max_element(times.begin(), times.end());
    maxValue *= n;
    int curValue = maxValue;
    int minValue = 0;
    while (true) {
        int hap = 0;
        for (int i = 0 ; i < times.size() ; ++i) {
            hap += (curValue / times.at(i));
        }
        if (hap == n) {
            answer = curValue;
            break;
        } else if (hap > n) {
            maxValue = curValue;
            curValue -= (maxValue - minValue) / 2;
        } else if (hap < n) {
            minValue = curValue;
            curValue += (maxValue - minValue) / 2;
        }
    }*/
    
    sort(times.begin(), times.end());
    long long left = 0;
    long long right = (long long) n * times[times.size() -1];
    while (left <= right) {
        long long mid = (left + right) / 2;
        cout << "TEST" << left << ":" << mid << ":" << right << endl;
        long sum = 0;
        for (int i = 0 ; i < times.size(); ++i) {
            sum += (mid / times.at(i));
        }
        if (sum < n) {
            left = mid + 1;
        } else {
            right = mid - 1;
            answer = mid;
        }
    }
    
    return answer;
}


void
ImagrationLevel3::ShowResult() {
    int inputData1 = 6;
    vector<int> inputData2 = {7, 10};
    // result : 28
    cout << "TestResult:" << solution(inputData1, inputData2) << endl;
    
}
