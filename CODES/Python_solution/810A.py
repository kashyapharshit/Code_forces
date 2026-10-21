import sys
input=sys.stdin.readline
def Straight():
    n,k=list(map(int,input().split()))
    marks=list(map(int,input().split()))
    count=0
    summ=sum(marks)
    lennew=len(marks)
    while True:
        avg=summ/lennew
        if int(avg+0.5)>=k:
            break
        else:
            summ+=k
            lennew+=1
            count+=1
    print(count)
def main():
    Straight()
if __name__=="__main__":
    main()

    