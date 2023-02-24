#!/usr/bin/python3
"""
Module for island_perimeter() method
"""


def island_perimeter(grid):
    """
    Computers the length of the perimeter of an island.
    """
   row = len(grid)
    colomun = len(grid[0])

    perimeter = 0
    conections = 0
    for x in range(0, row):
        for y in range(0, colomun):
            if grid[x][y] == 1:
                perimeter += 4
                if x != 0 and grid[x - 1][y]:
                    conections += 1
                if y != 0 and grid[x][y - 1]:
                    conections += 1
    return perimeter - conections * 2
