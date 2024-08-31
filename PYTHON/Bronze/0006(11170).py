# 11170

T = int(input())        # 테스트 케이스

for i in range(T):
    N, M = map(int, input().split())
    
    cnt0 = 0
    for n in range(N, M + 1):
        cnt0 += str(n).count('0')
    
    print(cnt0)
