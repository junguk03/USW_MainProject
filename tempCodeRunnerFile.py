def solution(s):
    arr = list(range(0,len(s)))
    for i in range(len(s)):
        if s.find(s[i],i+1,len(s)) != -1:
            arr.insert(s.find(s[i],i+1,len(s),int(s.find(s[i],i+1,len(s)) - i)))
        arr.insert(s.find(s[i]),-1)
    return arr