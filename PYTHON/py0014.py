# 3765

while True:
    try:        # try except 문 사용하기
        line = input().strip()      # input()으로 한 줄 입력받아 출력
        print(line)
        
    except EOFError:            # 입력이 종료될 때
        break
