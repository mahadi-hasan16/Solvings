# MD. MAHADI HASAN
# Dept. of Computer Science and Telecommunication Engineering (CSTE).
# Noakhali Science and Technology University (NSTU).

t=int(input())
for _ in range(t):
    n=int(input())
    if n<10:
        print(n)
        continue
    ans=""
    c=0
    for i in range(2,10):
        if n%i==0 and n/i<10:
            ans+=str(i)
            ans+=str(int(n/i))
            c=1
            break
    if c:
        print(ans)
    else:
        print(-1)