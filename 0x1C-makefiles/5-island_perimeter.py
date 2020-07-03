#!/usr/bin/python3
'''
    island-perimeter
    computes de perimeter of a
    grid.
'''


def island_perimeter(grid):
    ''' computes perimeter of island grid given '''
    counter = 0
    per = 0
    for row in grid:
        counter += row.count(1)
    counter += 1
    per = counter * 2
    return(per)
