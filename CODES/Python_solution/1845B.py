
import sys
input = sys.stdin.readline

def ComeTogether():
    xa, ya = map(int, input().split())
    bx, by = map(int, input().split())
    cx, cy = map(int, input().split())

    a = b = 0

    if bx > xa and cx > xa:
        a = min(bx, cx) - xa
    elif bx < xa and cx < xa:
        a = xa - max(bx, cx)

    if by > ya and cy > ya:
        b = min(by, cy) - ya
    elif by < ya and cy < ya:
        b = ya - max(by, cy)

    print(a + b + 1)

def main():
    t = int(input())
    for _ in range(t):
        ComeTogether()

if __name__ == "__main__":
    main()
