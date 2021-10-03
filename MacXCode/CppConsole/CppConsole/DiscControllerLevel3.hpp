//
//  DiscControllerLevel3.hpp
//  testConsole
//
//  Created by 노원종 on 2021/10/03.
//

#ifndef DiscControllerLevel3_hpp
#define DiscControllerLevel3_hpp

#include "Inflator.hpp"

#include <vector>

class DiscControllerLevel3 : public Inflator {
    // https://programmers.co.kr/learn/courses/30/lessons/42627
public:
    void ShowResult() override;
    
private:
    int solution(std::vector<std::vector<int>> jobs);
};

#endif /* DiscControllerLevel3_hpp */
