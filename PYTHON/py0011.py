# 2985

a, b, c = map(int, input().split())     # 정인이가 적어준 세 정수
oper = ['+', '-', '*', '/']

for op1 in oper:
    for op2 in oper:         # a op1 b = c
        if op1 == '+':
            if a + b == c:
                print(f'{a}+{b}={c}')
                # 처음에는 print(a, '+', b, '=', c) 이런 식으로 썼는데 출력값이 3 + 5 = 8 이런 식으로 나와서 틀렸다.
                # 3+5=8 이렇게 나오게 하려면 f-string을 사용하여 문자열 포맷팅을 하는 것이 필요하다.
                exit()
        elif op1 == '-':
            if a - b == c:
                print(f'{a}-{b}={c}')
                exit()
        elif op1 == '*':
            if a * b == c:
                print(f'{a}*{b}={c}')
                exit()
        elif op1 == '/':
            if a + b == c and b != 0:
                print(f'{a}/{b}={c}')
                exit()
            
        # a = b op2 c
        if op2 == '+':
            if a == b + c:
                print(f'{a}={b}+{c}')
                exit()
        elif op2 == '-':
            if a == b - c:
                print(f'{a}={b}-{c}')
                exit()
        elif op2 == '*':
            if a == b * c:
                print(f'{a}={b}*{c}')
                exit()
        elif op2 == '/':
            if a == b / c and c != 0:
                print(f'{a}={b}/{c}')
                exit()
