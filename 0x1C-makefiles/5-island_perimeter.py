#!/usr/bin/python3
"""Defines an island perimeter measuring function."""

def island_perimeter(grid):
    """Returns the perimeter of the island described in grid.

    The grid represents water by 0 and land by 1.

    Args:
        grid (list): a list of list of integers.
    Returns:
        the perimeter of the island described in grid.
    """

    h = len(grid)
    w = len(grid[0])
    s = 0
    edge = 0

    for i in range(h):
        for j in range(w):
            if grid[i][j] == 1:
                s += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edge += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edge += 1
    return s * 4 - edge * 2
