
import sys
input = sys.stdin.readline

def RashikBox():
    n, m = map(int, input().split())
    matrix = [input().split() for _ in range(n)]

    # Initial gravity
    matrix = gravity(matrix, n, m)

    k = int(input())

    for _ in range(k):
        inst = input().strip()

        if inst == "right":
            matrix = rightrot(matrix, n, m)
        else:
            matrix = leftrot(matrix, n, m)

        n, m = m, n

    for row in matrix:
        print(*row)


def gravity(matrix, n, m):
    for j in range(m):
        write = n - 1

        for i in range(n - 1, -1, -1):
            if matrix[i][j] == "*":
                matrix[write][j] = "*"
                write -= 1

        for i in range(write, -1, -1):
            matrix[i][j] = "."

    return matrix


def rightrot(mat, n, m):
    new_mat = [["."] * n for _ in range(m)]

    for i in range(n):
        for j in range(m):
            new_mat[j][n - 1 - i] = mat[i][j]

    return gravity(new_mat, m, n)


def leftrot(mat, n, m):
    new_mat = [["."] * n for _ in range(m)]

    for i in range(n):
        for j in range(m):
            new_mat[m - 1 - j][i] = mat[i][j]

    return gravity(new_mat, m, n)


def main():
    RashikBox()

if __name__ == "__main__":
    main()
