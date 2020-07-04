#!/usr/bin/python3
""" Size island """


def island_perimeter(grid):
    """ return the perimiter of an island surronded by water """
    size = 0
    l = [0, None]
    c = 0
    c2 = 0
    for i in grid:
        c = 0
        for j in i:
            if grid[c2][c] == 1:
                try:
                    if c > 0:
                        if grid[c2][c + 1] in l and grid[c2][c - 1] in l:
                            size += 2
                        elif grid[c2][c + 1] == 1 and grid[c2][c - 1] == 1:
                            size += 0
                        else:
                            size += 1
                    else:
                        if grid[c2][c + 1] in l:
                            size += 2
                        elif grid[c2][c + 1] == 1:
                            size += 1
                    if c2 < (len(grid) - 1):
                        if c2 > 0:
                            if grid[c2 + 1][c] in l and grid[c2 - 1][c] in l:
                                size += 2
                            elif grid[c2 + 1][c] == 1 and grid[c2 - 1][c] == 1:
                                size += 0
                            else:
                                size += 1
                        else:
                            if grid[c2 + 1][c] in l:
                                size += 2
                            elif grid[c2 + 1][c] == 1:
                                size += 1
                    else:
                        if grid[c2 - 1][c] in l:
                            size += 2
                        elif grid[c2 - 1][c] == 1:
                            size += 1
                except:
                    IndexError
            c += 1
        c2 += 1
    return (size)
