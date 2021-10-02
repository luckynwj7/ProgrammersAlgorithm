//
//  PracticeDPCoinChange.hpp
//  testConsole
//
//  Created by 노원종 on 2021/10/02.
//

#ifndef PracticeDPCoinChange_hpp
#define PracticeDPCoinChange_hpp

#include "Inflator.hpp"

#include <vector>

class PracticeDPCoinChange : public Inflator {
    // 알고리즘 공부
public:
    void ShowResult() override;
    
private:
    int solution(std::vector<int> coinValue, int balance);
};

#endif /* PracticeDPCoinChange_hpp */
