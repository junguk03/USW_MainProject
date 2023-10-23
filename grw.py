def solution(code):
    mode = 0
    ret = list()
    for idx in range(len(code)):
        if mode == 0:
            if code[idx] != "1":
                if idx%2 == 0:
                    ret.append(code[idx])
            else:
                mode = 1
        else:
            if code[idx] != "1":
                if idx%2 != 0:
                    ret.append(code[idx])
            else:
                mode = 0
    return ret

print(solution("abc1abc1abc"))