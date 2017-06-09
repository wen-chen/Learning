## 使用CSV模块处理表格文件
```Python
import csv
#读CSV文件
f = open(“test.csv”,  “r”)
f_csv = csv.reader(f)
for row_list in f_csv:
    print(row_list)#遍历csv对象，返回的是列表
f.close()
#写CSV文件
f = open(“test.csv”, “w”)
f_csv = csv.write(f)
f_csv.writerow(row_list)#将一个列表写入CSV对象
f.close()
```
其他参数：
dialect = “excel-tab”