import sys
input = sys.stdin.readline

def Vasilije():
    n, k, x = map(int, input().split())

    minsum = k * (k + 1) // 2
    maxsum = (n * (n + 1) // 2) - ((n-k) * (n-k+1) // 2)

    if minsum <= x <= maxsum:
        print("YES")
    else:
        print("NO")


def main():
    t = int(input())
    for _ in range(t):
        Vasilije()


if __name__ == "__main__":
    main()