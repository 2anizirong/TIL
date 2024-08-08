# 2010

# 처음 코드 --> 시간초과
N = int(input())
plug = [0] * N          # 플러그 꽂을 수 있는 개수 입력
sum = 1         # 먼저 플러그 하나는 꽂을 수 있음
for i in range(N):
    plug[i] = int(input())
    # 문제에서 N이 500,000이므로 input() 호출을 500,000번 하는 것에서 시간초과가 발생한다!
    sum += (plug[i]-1)
    
print(sum)

# 수정한 코드
# import sys를 하고 input()을 sys.stdin.readline()로 수정하였더니 괜찮아졌다!
import sys

N = int(sys.stdin.readline())
plug = [0] * N
sum = 1
for i in range(N):
    plug[i] = int(sys.stdin.readline())
    sum += (plug[i]-1)
    
print(sum)

# import sys: python의 표준 라이브러리 중 하나인 'sys' 모듈을 가져오는 구문
# --> sys모듈은 주로 시스템 관련 작업이나 입력, 출력 처리에 사용된다.

# sys.stdin, sys.stdout, sys.stderr를 사용하여 입력과 출력을 처리할 수 있다.
# 특히 sys.stdin.read()를 사용하면 전체 입력을 한 번에 읽어올 수 있어, 많은 양의 입력을 처리하는 데 유리하다.
