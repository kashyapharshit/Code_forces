import sys
input=sys.stdin.readline
def Expansion():
    n,x,y=map(int,input().split())
    move=input()
    # moves=[]
    # print(move[3])
    # for i  in range(len(move)):
    #     moves+=move[i]
    x=abs(x)
    y=abs(y)
    a=0
    b=0
    for i in range(n):
        if move[i]=="4":
            a+=1
        else:
            b+=1
    if (a+2*b)>=(x+y) and (a+b)>=max(x,y):
        print("YES")
        return
    else:
        print("NO")
        return  
def main():
    t=int(input())
    for _ in range(t):
        Expansion()
if __name__=="__main__":
    main()
