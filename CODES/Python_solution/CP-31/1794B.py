import sys
input = sys.stdin.readline

def NotDividing():
    n=int(input())
    a=list(map(int,input().split()))
    maxoper=2*n
    oper=0
    for i in range(1,n):
        if a[i-1]==1:
            a[i-1]+=1
        if a[i]==1:
            a[i]+=1
        
        if a[i]%a[i-1]==0:
            a[i]+=1
            oper+=1
    for item in a:
        print(item,end=" ")
    print()       
            
            
def main():
    t = 1
    t = int(input())
    for _ in range(t):
        NotDividing()
if __name__ == '__main__':
    main()