my_string = input()
overwrite_string = input()
s = input()
s = int(s)

def solution(my_string, overwrite_string, s):
    result = my_string[:s] + overwrite_string + my_string[(s+len(overwrite_string)):]
    return result

print(solution(my_string, overwrite_string, s))