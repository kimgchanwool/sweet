index_l = 0
index_r = 0

def greedy(name, index, answer):
    name[index] = 0; flag = 0
    for i in name:
        if (i != 0):
            flag = 1;
    if (flag == 0):
        return (answer);
    answer += (right(name, index) if left(name, index) > right(name,index) else left(name, index))
    #삼항 연산자
    # rtrue if a > b else false
    index = (index_l if index_l < index_r else index_r)
    return greedy(name, index, answer)

def left(name_int, index):
    for i in range(len(name_int)):
        if index - i == -1:
            index = len(name_int)
        index_l = index - i
        if name_int[index - i] != 0:
            return (i)
    
def right(name_int, index):
    for i in range(len(name_int)):
        if index + i == len(name_int):
            index = 0
        index_r = index + i
        if name_int[index + i] != 0:
            return (i)
    
def solution(name):
    answer = 0; name_int = [];
    for i in name:
        name_int.append(ord(i) - 65) #0 부터 25까지. (a ~ z)
    for j in range(0, len(name)):
        if name_int[j] > 13:
            name_int[j] = 25 - name_int[j] + 1
        answer += name_int[j]
        if name_int[j] != 0:
            name_int[j] == 1
    return greedy(name_int, 0, answer):                                                                                                                                                                                                                  return greedy(name_int, 0, answer):
