# 1264

while True:
    str = input()
    
    if str == '#':
        break
    
    vowel = 'aeiouAEIOU'
    cnt = 0
    
    for char in str:
        if char in vowel:
            cnt += 1;

    print(cnt)
