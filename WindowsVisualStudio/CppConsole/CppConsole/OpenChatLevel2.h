//
//  OpenChatLevel2.hpp
//  testConsole
//
//  Created by ณ๋ฟ๘มพ on 2021/09/20.
//

#ifndef OpenChatLevel2_h
#define OpenChatLevel2_h

#include "Inflator.h"

using namespace std;

class OpenChatLevel2 : public Inflator {
    // https://programmers.co.kr/learn/courses/30/lessons/42888
public:
    void ShowResult() override;

private:
    vector<string> splitStrVec(string input, char split);
    vector<string> solution(vector<string> record);

};

#endif /* OpenChatLevel2_h */
