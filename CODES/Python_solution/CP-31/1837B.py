import sys
input = sys.stdin.readline

def Comparison():
    n=int(input())
    s=input()
    count=1
    ans=1
    for i in range(1,n):
        if s[i]!=s[i-1]:
            count=1
        else:
            count+=1
        ans=max(ans,count)
    print(ans+1)
        
    

def main():
    t = int(input())
    for _ in range(t):
       Comparison()

if __name__ == '__main__':
    main()