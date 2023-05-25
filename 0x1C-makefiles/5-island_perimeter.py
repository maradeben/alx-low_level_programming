#!/usr/bin/python3
""" get perimeter of island represent in grid """


def immediate_perim(grid, r, c):
    """ calculate immediate perimeter of current land block """
    count = 0
    if grid[r][c-1] == 0:
        count += 1
    if grid[r][c+1] == 0:
        count += 1
    if grid[r-1][c] == 0:
        count += 1
    if grid[r+1][c] == 0:
        count += 1
    return (count)


def island_perimeter(grid):
    """ calculate the perimeter of island """
    perimeter = 0
    for r in range(1, len(grid)):
        for c in range(1, len(grid[0])):
            if grid[r][c] == 1:
                perimeter += immediate_perim(grid, r, c)
                if grid[r][c+1] == 1:
                    continue
                elif grid[r+1][c] == 1:
                    r += 1
                    break
    return (perimeter)
