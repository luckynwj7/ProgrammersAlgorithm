//
//  124NationLevel2.hpp
//  testConsole
//
//  Created by 노원종 on 2021/09/20.
//

#ifndef OneTwoFourNationLevel2_hpp
#define OneTwoFourNationLevel2_hpp

#include "Inflator.hpp"

using namespace std;

class OneTwoFourNationLevel2 : public Inflator {
    // https://programmers.co.kr/learn/courses/30/lessons/12899
public:
    void ShowResult() override;
    
private:
    string solution (int n);
};

#endif /* OneTwoNationLevel2_hpp */
