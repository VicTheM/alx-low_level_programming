#!/usr/bin/python3
""" Technical Interview """


def island_perimeter(grid):
    """
    returns the perimeter of the island
    described in grid
    
    grid = [
    [1, 0]
    [0, 0]
    ]
    """
    MAX_LEN = 100
    row, col = 0, 0


def perimeter(length, breadth):
    """ Computes the perimeter of a single rect """

    return 2 * (length + breadth)

def get_rect(grid):
    """
    Returns the number of connected rectangles
    """

    n_rect = 0
    n_grid = 0
    idx = 0
    horizontal = False

    for row in grid:
        length = len(row)
        for index, value in enumerate(row):
            if value == 1:
                n_rect += 1

                while index < length - 1 and row[index + 1] == 1:
                    horizontal = True
                    n_rect += 1
                    index += 1









