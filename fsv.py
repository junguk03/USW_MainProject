def solution(s):
    arr = []
    for i in range(len(s)):
        if s.find(s[i],0,i) != -1:
            arr.insert(i,int(i - s.rfind(s[i],0,i)))
        else:
            arr.insert(s.find(s[i]),-1)
    return arr

print(solution("banana"))