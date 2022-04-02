def solution(board, moves):
    stack = []
    answer = 0
    for select in moves:
        for row in board:
            choiceitem = row [select-1]

            # 0이면 그냥 다음 행으로 넘어 간다
            if choiceitem == 0:
                continue
            # 0이 아니면 stack에서 이전 것이 choiceitem과 같은 것인지 확인하고
            # 같으면 stack pop() 하고 answer값을 +2
            # 다르면 stack push() 해준다.
            else:
                if stack :
                    if stack[-1] != choiceitem:
                        stack.append(choiceitem)
                        break
                    else:
                        stack.pop()
                        answer += 2
                        break
                else: stack.append(choiceitem)
    return answer
        

ans = solution([[0,0,0,0,0],[0,0,1,0,3],[0,2,5,0,1],[4,2,4,4,2],[3,5,1,3,1]], [1,5,3,5,1,2,1,4])
print(ans)