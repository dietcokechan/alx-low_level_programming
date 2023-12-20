#!/usr/bin/python3
"""gets perimeter of the island"""


def island_perimeter(grid):
    """function definition"""
    count = 0
    if grid:
        gridlen = len(grid)
        radiuslen = len(grid[0])
        for i, row in enumerate(grid):
            for j, pt in enumerate(row):
                if pt:
                    if i == 0:
                        count += 1
                    else:
                        if not grid[i - 1][j]:
                            count += 1
                    if i >= gridlen - 1:
                        count += 1
                    else:
                        if not grid[i + 1][j]:
                            count += 1
                    if j == 0:
                        count += 1
                    else:
                        if not row[j - 1]:
                            count += 1
                    if j >= radiuslen - 1:
                        count += 1
                    else:
                        if not row[j + 1]:
                            count += 1
    return count
