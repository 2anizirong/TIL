# 1236

N, M = map(int, input().split())        # N세로, M가로

guardRow = [False] * N
guardCol = [False] * M          # 먼저, 행과 열을 모두 경비원이 없다고 초기화 해주기
for i in range(N):
    guard = input().strip()     # strip() 메서드: 문자열 양쪽 끝의 공백 문자를 제거
    for j in range(M):
        if (guard[j] == 'X'):
            guardRow[i] = True
            guardCol[j] = True
            
rowCnt = guardRow.count(True)
colCnt = guardCol.count(True)

noGuardRow = N - rowCnt
noGuardCol = M - colCnt      # 전체 행과 열의 갯수에서 각각 경비원 있는 거 갯수 빼기

print(max(noGuardRow, noGuardCol))
