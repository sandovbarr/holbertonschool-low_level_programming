#!/usr/bin/python3
'''
    island-perimeter
    computes de perimeter of a
    grid.
'''


def island_perimeter(grid):
    ''' computes perimeter of island grid given '''
    tot = 0

    for row in range(len(grid)):
        for col in range(len(grid[row])):
            if grid[row][col] == 1:
                cellvalue = 4
                if row < len(grid) - 1:
                    if grid[row + 1][col] == 1:
                        cellvalue -= 1
                    if grid[row - 1][col] == 1:
                        cellvalue -= 1
                else:
                    cellvalue -= 1
                if col < len(grid[row]) - 1:
                    if grid[row][col + 1] == 1:
                        cellvalue -= 1
                    if grid[row][col - 1] == 1:
                        cellvalue -= 1
                else:
                    cellvalue -= 1
                tot += cellvalue
    return(tot)
