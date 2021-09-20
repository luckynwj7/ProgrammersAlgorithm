//
//  OpenChatLevel2.hpp
//  testConsole
//
//  Created by 노원종 on 2021/09/20.
//

#ifndef OpenChatLevel2_hpp
#define OpenChatLevel2_hpp

#include "Inflator.hpp"

using namespace std;

class OpenChatLevel2 : public Inflator {
    // https://programmers.co.kr/learn/courses/30/lessons/42888
public:
    void ShowResult() override;
    
private:
    std::vector<string> splitStrVec(string input, char split);
    vector<string> solution(vector<string> record);
    
};

#endif /* OpenChatLevel2_hpp */
