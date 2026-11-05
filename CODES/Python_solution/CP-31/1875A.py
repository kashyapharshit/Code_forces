
import sys
input = sys.stdin.readline

def Jellyfish():
    a, b, n = map(int, input().split())
    x = list(map(int, input().split()))

    ans = b

    for item in x:
        ans += min(item, a-1)

    print(ans)

def main():
    t = int(input())
    for _ in range(t):
        Jellyfish()

if __name__ == "__main__":
    main()
