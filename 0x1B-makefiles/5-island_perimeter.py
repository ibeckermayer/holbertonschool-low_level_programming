#!/usr/bin/python3
'''
Defines a function island_perimeter
'''


def island_perimeter(grid):
    '''Returns the perimeter of an island described in grid
    Return:
        returns the perimeter of the island
    '''
    adjacent = 0
    cnt = 0
    for x in range(len(grid)):
        for y in range(len(grid[x])):
            if grid[x][y]:  # == 1:
                cnt += 1
                if (y != len(grid[x]) - 1 and grid[x][y + 1]):
                    adjacent += 1
                if (x != len(grid) - 1 and grid[x + 1][y]):
                    adjacent += 1
    return 4 * cnt - 2 * adjacent
