//
//  PracticeKnapsack.hpp
//  testConsole
//
//  Created by 노원종 on 2021/10/02.
//

#ifndef PracticeKnapsack_hpp
#define PracticeKnapsack_hpp

#include "Inflator.hpp"

#include <vector>

class PracticeKnapsack : public Inflator {
    // 알고리즘 공부
public:
    void ShowResult() override;
    
private:
    int solution(std::vector<std::vector<int>> knapsack, int capacity);
};

#endif /* PracticeKnapsack_hpp */
