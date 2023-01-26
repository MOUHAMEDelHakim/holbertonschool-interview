#!/usr/bin/python3
""" Log parsing """
import sys
import random

i = 0
FileSize = 0
STATUS = {'200': 0, '301': 0,
          '400': 0, '401': 0,
          '403': 0, '404': 0,
          '405': 0, '500': 0}
