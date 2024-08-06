# 1247

S = [0] * 3         # 더한 거 부호 저장

for i in range(3):
    N = int(input())        # 한 테스트에서 정수 개수
    
    total = 0           # 더한 값 저장
    for j in range(N):
        num = int(input())
        total += num
        
        if total > 0:
            S[i] = '+'
        elif total == 0:
            S[i] = 0
        else:
            S[i] = '-'
            
for i in range(3):
    print(S[i])
