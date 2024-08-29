# 12865

N, K = map(int, input().split())        # N은 물품 수, K는 준서가 버틸 수 있는 무게

list = []           # W, V을 담을 리스트
for i in range(0, N, 1):
    W, V = map(int, input().split())    # W는 각 물건 무게, V는 물건 가치
    list.append((W, V))

maxWorth = [0] * (K + 1)
for W, V in list:
    for i in range(K, W - 1, -1):      # 거꾸로 가며 최대 가치 찾기, 물건 가치 더해가지고
        maxWorth[i] = max(maxWorth[i], maxWorth[i - W] + V)

print(maxWorth[K])
