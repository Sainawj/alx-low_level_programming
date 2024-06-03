#!/usr/bin/python3
"""5-island_perimeter module"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid"""
    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += count_water_borders(grid, i, j, rows, cols)

    return perimeter


def count_water_borders(grid, i, j, rows, cols):
    """Counts the number of water borders around a land cell"""
    borders = 0

    if i == 0 or grid[i - 1][j] == 0:
        borders += 1  
    if i == rows - 1 or grid[i + 1][j] == 0:
        borders += 1  
    if j == 0 or grid[i][j - 1] == 0:
        borders += 1  
    if j == cols - 1 or grid[i][j + 1] == 0:
        borders += 1  

    return borders
