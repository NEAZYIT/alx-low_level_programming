#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculate the perimeter of the island in the grid.

    Args:
        grid (List[List[int]]): A list of lists representing the grid.

    Returns:
        int: The perimeter of the island.

    """
    lands = 0
    side = 0
    for height in range(len(grid)):
        for width in range(len(grid[height])):
            if grid[height][width] == 1:
                lands += 1
                if height > 0 and grid[height-1][width] == 1:
                    side += 1
                if width > 0 and grid[height][width-1] == 1:
                    side += 1
    return lands * 4 - side * 2
