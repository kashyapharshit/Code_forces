import sys
input=sys.stdin.readline
def Forked():
    a,b=map(int,input().split())
    xk,yk=map(int,input().split())
    xq,yq=map(int,input().split())
    moves=[(a,b),(a,-b),(-a,b),(-a,-b),(b,a),(-b,-a),(-b,a),(b,-a)]
    king=set()
    for dx,dy in moves:
        king.add((xk+dx,yk+dy))
    queen=set()
    for dx,dy in moves:
            queen.add((xq+dx,yq+dy))
    total=king.intersection(queen)
    return len(total) 
def main():
    t=int(input())
    for _ in range(t):
        ans=Forked()
        print(ans)
if __name__=="__main__":
     main()
    