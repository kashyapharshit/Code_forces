import sys
input=sys.stdin.readline
def KanaDragon():
    x,n,m=map(int,input().split())
    while x>0 and n and x>20:
        n=n-1
        x=(x//2) + 10
    if x<=m*10:
        print("YES")
    else:
        print("NO")
        
        

def main():
    t=int(input())
    for _ in range(t):
        KanaDragon()
if __name__=="__main__":
    main()
    
    