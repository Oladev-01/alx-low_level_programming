#!/usr/bin/python3
'''this module returns the perimeter of an area of land'''


def island_perimeter(grid):
    """this module calculates the perimeter"""
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:  # Check if it's a land cell
                perimeter += 4  # Each land cell contributes 4 units to perimeter

                # Check neighbors and subtract 2 units for each shared boundary
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2
    return perimeter
