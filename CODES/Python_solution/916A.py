import sys
input=sys.stdin.readline
def Jamie():
    x=int(input())
    hh,mm=map(int,input().split())
    count = 0

    while True:
        if '7' in str(hh) or '7' in str(mm):
                  print(count)
                  return 

        mm -= x

        while mm < 0:
            mm += 60
            hh -= 1

        if hh < 0:
            hh = 23

    count += 1
  
def main():
    Jamie()
if __name__=="__main__":
    main()