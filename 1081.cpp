import sys
import httplib
import json

input = ''
lines = ['', '', '']
i = 0
for line in sys.stdin:
    input = input + line
    lines[i] = line.replace('\n', '')
    i = i + 1

a = float(lines[0])

sum = 0.0
cor = 0.0
for i in range(len(lines[1])):
    sum = sum + 1.0
    if lines[1][i] == lines[2][i]:
        cor = cor + 1.0

p = cor / sum
if p >= a:
    print 'Passing'
else:
    print 'No passing'

params = json.dumps(input)
conn = httplib.HTTPConnection('121.43.170.246', 8080, timeout=10)
headers = {"Content-type": "application/json"}
conn.request("POST", "/input", params, headers)
response = conn.getresponse()
conn.close()
