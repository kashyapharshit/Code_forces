import sys
input=sys.stdin.readline
def Threshold_mov():
    n=int(input())
    a=list(map(int,input().split()))
    L = float('-inf')
    R = float('inf')
    if n%2!=0:
       print("NO")
       return 
    for i in range(n):
        if i%2!=0:
            R=min(a[i],R)
        else:
            L=max(a[i],L)
    if R-L>=2:
        print("YES")
    else:
     print("NO")           
            
       

def main():
    t=int(input())
    for _ in range(t):
        Threshold_mov()
if __name__ == "__main__":
    main()