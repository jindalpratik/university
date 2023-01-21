#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the solve function below.
def solve(s):
    new_str = ""
    for i in range(len(s)):
        if ord(s[i]) > 96 and  ord(s[i]) < 123 and (s[i-1] == " " or i == 0):
            new_str += chr(ord(s[i])-32)
        else:
            new_str += s[i]
    return new_str

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = solve(s)

    fptr.write(result + '\n')

    fptr.close()