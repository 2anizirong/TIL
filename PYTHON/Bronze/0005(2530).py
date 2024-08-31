# 2530

A, B, C = map(int, input().split())
D = int(input())

total_seconds = A * 3600 + B * 60 + C
total_seconds += D

total_seconds %= 86400      # 24시간 = 86400초

hours = total_seconds // 3600
total_seconds %= 3600
minutes = total_seconds // 60
seconds = total_seconds % 60

print(hours, minutes, seconds)
