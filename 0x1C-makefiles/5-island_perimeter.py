#!/usr/bin/python3

def island_perimeter(grid):
  """
  Returns the perimeter of the island described in grid.

  Args:
    grid: A list of lists of integers.

  Returns:
    The perimeter of the island.
  """

  perimeter = 0
  #initialize the perimeter to 0
  for i in range(len(grid)):
    for j in range(len(grid[0])):
      if grid[i][j] == 1:
        perimeter += 4
        if i > 0 and grid[i - 1][j] == 1:
          perimeter -= 1
        if j > 0 and grid[i][j - 1] == 1:
          perimeter -= 1
        if i < len(grid) - 1 and grid[i + 1][j] == 1:
          perimeter -= 1
        if j < len(grid[0]) - 1 and grid[i][j + 1] == 1:
          perimeter -= 1

  return (perimeter)
