#!/usr/bin/env python

def draw_board(board):
	for x in range(len(board)):
		if x % 3 == 0:
			print("+ " + "- "*11 + "+")
		for y in range(len(board)):
			b = board[x][y]
			if y % 3 == 0:
				print("| " , end="")
			print(b , end = " ")
			if y == 8:
				print("|")
		if x  == 8:
			print("+ " + "- "*11 + "+")

def empty_space(board):
	for x in range(len(board)):
		for y in range(len(board)):
			if board[x][y] == 0:
				return (x , y)
	return None

def valid(board , d , pos):
	row , col = pos
	sx = set()
	sy = set()

	# check for valid row
	for x in range(len(board)):
		if board[row][x] in sx:
			return False
		else:
			if board[row][x] != 0:
				sx.add(board[row][x])
		if board[row][x] == d and col != x:
			return False
	# check for valid column
	for y in range(len(board)):
		if board[y][col] in sy:
			return False
		else:
			if board[y][col] != 0:
				sy.add(board[y][col])
		if board[y][col] == d and row != y:
			return False
	# Check box
	box_x = col // 3
	box_y = row // 3
	for i in range(box_y*3, box_y*3 + 3):
		for j in range(box_x * 3, box_x*3 + 3):
			if board[i][j] == d and (i,j) != pos:
				return False	
	return True

def solve_board(board):
	pos = empty_space(board)
	if not pos:
		draw_board(board)
		return True
	else:
		row , col = pos
	for i in range(1 , 10):
		if valid(board , i , pos):
			board[row][col] = i
			if solve_board(board):
				return True
			board[row][col] = 0
	return
board = [
    [5, 3, 0, 0, 7, 0, 0, 0, 0],
    [6, 0, 0, 1, 9, 5, 0, 0, 0],
    [0, 9, 8, 0, 0, 0, 0, 6, 0],
    [8, 0, 0, 0, 6, 0, 0, 0, 3],
    [4, 0, 0, 8, 0, 3, 0, 0, 1],
    [7, 0, 0, 0, 2, 0, 0, 0, 6],
    [0, 6, 0, 0, 0, 0, 2, 8, 0],
    [0, 0, 0, 4, 1, 9, 0, 0, 5],
    [0, 0, 0, 0, 8, 0, 0, 7, 9]
]

if __name__ == '__main__':
	draw_board(board)
	print("="*25)
	if(solve_board(board)):
		print("Solved")
	else:
		print("No solution")
