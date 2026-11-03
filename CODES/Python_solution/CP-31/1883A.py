import sys 
input=sys.stdin.readline
def Chemistry():
    n,k=map(int,input().split())
    s=input().rstrip("\n")
    slist=list(s)
    uniquelist=[]
    freq=[]
    nodd=0
    neven=0
    for item in slist:
        if item not in uniquelist:
            uniquelist.append(item)
    for i in range(len(uniquelist)):
        freq.append(slist.count(uniquelist[i]))
    for item in freq:
        if item%2!=0:
            nodd+=1
    if nodd>(k+1):
        print("NO")
        return
    else:
        print("YES")
        return
    

def main():
    t=int(input())
    for _ in range(t):
        Chemistry()
if __name__=="__main__":
    main()