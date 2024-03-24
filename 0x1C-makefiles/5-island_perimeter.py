#!/usr/bin/python3
"""Returns the perimeter of the island described in grid"""


def island_perimeter(grid):
    perimeter = 0
    x = len(grid)
    y = len(grid[0])

    for i in range(x):
        for j in range(y):
            if grid[i][j] == 1:
                perimeter += 4

                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2

                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2

                if i < x - 1 and grid[i + 1][j] == 1:
                    perimeter -= 2

                if j < y - 1 and grid[i][j + 1] == 1:
                    perimeter -= 2

    return perimeter
