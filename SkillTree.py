'https://programmers.co.kr/learn/courses/30/lessons/49993?language=python3'

def Act():
    'input'
    skill = "CBD"
    skill_tress = ["BACDE", "CBADF", "AECB", "BDA"]

    result = solution(skill, skill_tress)
    print(str(result))

'skill로 주어진 문자열의 문자를 skill_trees와 비교해서 문자열 순서가 뒤죽박죽이라면 숫자를 세지 않는 방식으로 진행'

def solution(skill, skill_trees):
    answer = 0

    for listStr in skill_trees:
        maxPosition = -1

        prevFind = False
        for strIndex in range(0,len(skill)):
            findPosition = listStr.find(skill[strIndex])

            if findPosition == -1:
                prevFind = False
            elif maxPosition > findPosition or (prevFind == False and strIndex>0) :
                "실패"
                break
            elif maxPosition < findPosition:
                maxPosition = findPosition
                prevFind = True

            "성공"
            if strIndex == len(skill)-1:
                answer += 1

    return answer