# 2845

L, P = map(int, input().split())        # L 사람의 수, P 파티 장소 넓이

calPar = L * P

par = list(map(int, input().split()))

for i in range(0, 5, 1):
    print(par[i] - calPar)
