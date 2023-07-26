#!/usr/bin/python

def island_perimeter(grid):
  """
  Calculater the Island's perimeter

    Parameter:
        grid (array): An 0's and 1's array that represents an island (1)
        sourrounded by water (0)

    Returns:
        The island's perimeter
  """
  perimeter = 0
  for i in range(len(grid)):
    for j in range(len(grid[0])):
      if grid[i][j] == 1:
        perimeter += 4
        if i > 0 and grid[i - 1][j] == 1:
          perimeter -= 1
        if j > 0 and grid[i][j - 1] == 1:
          perimeter -= 1
  return perimeter
