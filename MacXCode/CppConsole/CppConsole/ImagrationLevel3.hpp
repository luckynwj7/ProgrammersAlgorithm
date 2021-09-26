//
//  ImagrationLevel3.hpp
//  testConsole
//
//  Created by 노원종 on 2021/09/26.
//

#ifndef ImagrationLevel3_hpp
#define ImagrationLevel3_hpp

#include "Inflator.hpp"

using namespace std;

class ImagrationLevel3 : public Inflator {
    // https://programmers.co.kr/learn/courses/30/lessons/12899
public:
    void ShowResult() override;
    
private:
    long long solution(int n, vector<int> times);
};
#endif /* ImagrationLevel3_hpp */
