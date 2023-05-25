#!/usr/bin/python3
""" get perimeter of island represent in grid """


def island_perimeter(grid):
    found = 0
    for r in range(1, len(grid)):
        for c in range(1, len(grid[0])):
            if grid[r][c] == 1:
                found += 1
                if grid[r][c+1] == 1:
                    continue
                elif grid[r+1][c] == 1:
                    r += 1
                    break
    return (found * 2 + 2)
