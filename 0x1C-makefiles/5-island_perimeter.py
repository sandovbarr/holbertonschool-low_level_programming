#!/usr/bin/python3
'''
    island-perimeter
    computes de perimeter of a
    grid.
'''


def island_perimeter(grid):
    counter = 0
    for row in grid:
        counter += row.count(1)
    counter = (counter + 1)*2
    return (counter)
