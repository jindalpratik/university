#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the solve function below.
def solve(s):
    li_s = s.split()
    new_str = ""
    for i in li_s:
        new_str += chr(ord(i[0])-32) + i[1:] + " "
    return new_str

s = input()

result = solve(s)
print(result)