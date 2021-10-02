//
//  PracticeMatrixChain.hpp
//  testConsole
//
//  Created by 노원종 on 2021/10/01.
//

#ifndef PracticeMatrixChain_hpp
#define PracticeMatrixChain_hpp

#include "Inflator.hpp"

#include <vector>

using namespace std;

class PracticeMatrixChain : public Inflator {
    // 알고리즘 공부
public:
    void ShowResult() override;
    
private:
    int solution(vector<vector<int>> path);
};

#endif /* PracticeMatrixChain_hpp */
