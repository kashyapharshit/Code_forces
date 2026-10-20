import sys
input=sys.stdin.readline
def Fence():
    lis=list(map(int,input().split()))
    n=lis[0]
    k=lis[1]
    count=0
    a=list(map(int,input().split()))
    for i in range(n):
        if a[i]<=k:
            count+=1
        elif a[i]>=k:
            count+=2
    print(count)
            
    
def main():
    Fence()
if __name__=="__main__":
    main()