import sys
input=sys.stdin.readline
def Squares():
    a1,b1=map(int,input().split())
    a2,b2=map(int,input().split())
    a1max=max(a1,b1)
    a2max=max(a2,b2)
    a1min=min(a1,b1)
    a2min=min(a2,b2)
    if a1max==a2max and (a1min+a2min)==a1max:
        print("YES")
    else:
        print("NO")
    
def main():
    t=int(input())
    for _ in range(t):
        Squares()
if __name__=="__main__":
    main()