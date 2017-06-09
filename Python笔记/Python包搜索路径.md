## Python包搜索路径
python的搜索路径其实是一个列表，它是指导入模块时，python会自动去找搜索这个列表当中的路径，如果路径中存在要导入的模块文件则导入成功，否则失败。
```Python
import sys
sys.path
```
方法一：
```Python
sys.path.append(“/home/chenwen/bin/pylib”)
```
方法二：
在/home/chenwen/.local/lib/python3.5/site-packages/路径下添加.pth文件，写上你要加入的模块文件所在的目录名称，如/home/chenwen/bin/pylib