#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculate the perimeter of the island in the grid.

    Args:
        grid (List[List[int]]): A list of lists representing the grid.

    Returns:
        int: The perimeter of the island.

    """
    perimeter = 0

    # Define the directions to check around the cell
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    for row in range(len(grid)):
        for col in range(len(grid[0])):
            if grid[row][col] == 1:
                perimeter += 4  # Start with the maximum perimeter

                # Check each direction and subtract 1 from the perimeter
                # for each neighboring land cell
                for dr, dc in directions:
                    r, c = row + dr, col + dc
                    if 0 <= r < len(grid) and 0 <= c < len(grid[0]) and grid[r][c] == 1:
                        perimeter -= 1

    return perimeter
