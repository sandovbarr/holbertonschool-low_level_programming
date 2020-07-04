#!/usr/bin/python3
'''
    island-perimeter
    computes de perimeter of a
    grid.
'''


def island_perimeter(grid):
    ''' computes perimeter of island grid given '''
    cellvalue = 0

    for row in range(len(grid)):
        for col in range(len(grid[row])):
            if grid[row][col] == 1:
                if grid[row + 1][col] == 0:
                    cellvalue += 1
                if grid[row - 1][col] == 0:
                    cellvalue += 1
                if grid[row][col + 1] == 0:
                    cellvalue += 1
                if grid[row][col - 1] == 0:
                    cellvalue += 1
    return(cellvalue)
