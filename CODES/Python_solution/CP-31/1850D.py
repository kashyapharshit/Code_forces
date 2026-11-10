def Balance():
    n,k=map(int,input().split())
    a=list(map(int,input().split()))
    a=sorted(a)
    cnt=1
    ans=1
    for i in range(1,n):
        if a[i]-a[i-1]>k:
            cnt=1
        else:
            cnt+=1
        ans=max(cnt,ans)
    print(n-ans)

def main():
    t=int(input())
    for _ in range(t):
        Balance()
if __name__=="__main__":
    main()