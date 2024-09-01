# 1524

T = int(input())        # 테스트 케이스의 개수

for i in range(T):
    input()         # 줄 바꿈  --> 처음에 이거 안 넣어서 계속 ValueError 뜸
    N, M = map(int, input().split())
    
    s = list(map(int, input().split()))
    b = list(map(int, input().split()))
    
    maxS = max(s)       # 세준이네에서 가장 강한 놈
    maxB = max(b)       # 세비네에서 가장 강한 놈
    
    if maxS < maxB:
        print("B")      # 세비가 이김
    elif maxS >= maxB:
        print("S")      # 세준이가 이김
    else:
        print("C")
