import sys
input=sys.stdin.readline

def Oleg():
    lis=list(map(int,input().split()))
    n=lis[0]
    k=lis[1]
    a=list(map(int,input().split()))
    mina=min(a)
    oper=0
    for num in a:
        diff=num-mina
        if diff % k==0:
            step=(diff)//k
            oper+=step
        else:
            print("-1")
            return
    print(oper)
    
def main():
    Oleg()
if __name__== "__main__":
    main()