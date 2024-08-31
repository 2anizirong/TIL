# 2420

#N = int(input())
#M = int(input())

# 한 줄로 입력받기
N, M = map(int, input().split())

if (N - M >= 0):
    print(N - M)
else:
    print(-(N - M))
    
# print(abs(N - M))
