import sys
import math
input = sys.stdin.readline

def permutation():
    n=int(input())
    p=list(map(int,input().split()))
    ans=0
    for i in range(n):
        ans=math.gcd(ans,abs(p[i]-(i+1)))
    print(ans)
        
    
    

def main():
    t = int(input())
    for _ in range(t):
        permutation()

if __name__ == '__main__':
    main()