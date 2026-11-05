import sys
import time
input=sys.stdin.readline
def MakeitZero():
    # start=time.time()
    n=int(input())
    elements=list(map(int,input().split()))
    if (n&1):
        print(4)
        print(1, n-1)
        print(1, n-1)
        print(n-1, n)
        print(n-1, n)
    else:
        print(2)
        print(1,n)
        print(1,n)
    # print(time.time()-start)
    
def main():
    t=int(input())
    for _ in range(t):
        MakeitZero()
        
if __name__=="__main__":
    main()
    