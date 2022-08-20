#!/usr/bin/python3
"""Defines an island perimeter measuring function."""


def island_perimeter(grid):
    """Return the perimeter of an island.

    0 is being represented by water and 1 by land on the grid.

    Args:
        grid (list): A list of list of integers representing an island.
    Returns:
        The perimter of the island defined in grid.
    """
    width = len(grid[0])
    height = len(grid)
    edg = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edg += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edg += 1
    return (size * 4 - edg * 2)
