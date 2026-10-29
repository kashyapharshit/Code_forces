import sys 
input=sys.stdin.readline
def Maximums():
    n=int(input())
    b=list(map(int,input().split()))
    a=[0]*n
    a[0]=b[0]
    x=a[0]
    for i in range(1,n):
        a[i]=x+b[i]
        x=max(x,a[i])
    print(a)
        
    
def main():
    t=int(input())
    for _ in range(t):
        Maximums()
if __name__=="__main__":
    main()
