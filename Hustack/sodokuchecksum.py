import os
os.system('cls' if os.name == 'nt' else 'clear') 

SUM = 15

list_combinations = []
arr = [[0 for _ in range(3)] for _ in range(3)]

def gotoxy(lin, col):
    print(f"\033[{lin};{col}H", end="")

def box(l, c):
    l *= 4
    c *= 8
    for i in range(3):
        gotoxy(i + l + 1, c + 1)
        for j in range(3):
            print(f" {arr[i][j]}", end="")
        print()

def test_arr():
    if (arr[0][0] + arr[1][0] + arr[2][0]) != SUM: return False
    if (arr[0][1] + arr[1][1] + arr[2][1]) != SUM: return False

    if (arr[0][0] + arr[1][1] + arr[2][2]) != SUM: return False
    if (arr[2][0] + arr[1][1] + arr[0][2]) != SUM: return False
    
    for j in range(3):
        n = arr[0][j]
        for i in range(3):
            if arr[1][i] == n or arr[2][i] == n:
                return False
    return True

def main():
    global arr

    bl, bc, x = 0, 0, 0
    for a in range(1, 10):
        for b in range(1, 10):
            for c in range(1, 10):
                if (a + b + c) == SUM and a != b and a != c and b != c:
                    list_combinations.append([a, b, c])
                    x += 1
    
    for l0 in range(len(list_combinations)):
        for l1 in range(len(list_combinations)):
            for l2 in range(len(list_combinations)):
                if l0 != l1 and l0 != l2 and l1 != l2:
                    for x in range(3):
                        arr[0][x] = list_combinations[l0][x]
                        arr[1][x] = list_combinations[l1][x]
                        arr[2][x] = list_combinations[l2][x]

                    if test_arr():
                        box(bl, bc)
                        bc += 1
                        if bc > 3:
                            bc = 0
                            bl += 1


main()
