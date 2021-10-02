//
//  PracticeAllPairsShortest.hpp
//  testConsole
//
//  Created by 노원종 on 2021/10/01.
//

#ifndef PracticeAllPairsShortest_hpp
#define PracticeAllPairsShortest_hpp

#include "Inflator.hpp"

#include <vector>

using namespace std;

class PracticeAllPairsShortest : public Inflator {
    // 알고리즘 공부
public:
    void ShowResult() override;
    
private:
    vector<vector<int>> solution(vector<vector<int>> path);
};
#endif /* PracticeAllPairsShortest_hpp */
