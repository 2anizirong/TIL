# 2752

a, b, c = map(int, input().split())

nums = [a, b, c]
nums.sort(reverse=True)     # 내림차순으로 정렬

print(nums[2], nums[1], nums[0])
