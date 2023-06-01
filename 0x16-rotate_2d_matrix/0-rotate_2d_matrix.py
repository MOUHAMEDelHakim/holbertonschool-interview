#!/usr/bin/python3
""" Give an n x n 2D matrix and Rotate it in 90 degrees """


def rotate_2d_matrix(matrix):
    """ The matrix is edited in-places that don't return nothing. """

    l = len(matrix)
    for k in range(3):
        for i in range(0, int(l/2)):
            for j in range(i, l - 1 - i):
                temp = matrix[i][j]
                matrix[i][j] = matrix[j][l - 1 - i]
                matrix[j][l - 1 - i] = matrix[l - 1 - i][l - 1 - j]
                matrix[l - 1 - i][l - 1 - j] = matrix[l - 1 - j][i]
                matrix[l - 1 - j][i] = temp

