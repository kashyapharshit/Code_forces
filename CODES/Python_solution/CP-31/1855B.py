def interval():
    n=int(input())
    if(n%2!=0):
        return 1
    else:
        for i in range(1,n):
            if n==2:
                return 2
            elif n%i==0:
                i+=1
            else:
                x=i
                return x-1

def main():
    t=int(input())
    for _ in range(t):
        ans=interval()
        print(ans)
if __name__=="__main__":
    main()