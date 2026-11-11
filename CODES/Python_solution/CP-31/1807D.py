import sys
input = sys.stdin.readline

def Odd():
    n, q = map(int, input().split())
    a = list(map(int, input().split()))
    prefix=[0]*(len(a)+1)
    for i in range(n):
        prefix[i+1]=prefix[i]+a[i]

    for i in range(q):
        l, r, k = map(int, input().split())

        segment_sum = prefix[r]-prefix[l-1]

       

        res = prefix[n] - segment_sum + (k * (r-l+1))

        if res % 2 != 0:
            print("YES")
        else:
            print("NO")

def main():
    t = int(input())
    for _ in range(t):
        Odd()

if __name__ == '__main__':
    main()