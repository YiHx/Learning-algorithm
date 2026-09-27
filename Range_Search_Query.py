def solve():
    q = int(input())
    s = input()
    t = input()
    for _ in range(q):
        a,b = map(int,input().split())
        curr = s[a-1:b]
        if len(curr) < len(t):
            print("No")
            continue
        if t in curr:
            print("Yes")
        else:
            print("No")



if __name__ == "__main__":
    solve()