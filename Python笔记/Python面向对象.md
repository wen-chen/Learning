## Python面向对象
##### 定义个Monk类
```python
class Monk():
    __slots__ = ("name", "age")
    def __init__(self, name, age):
        self.name = name
        self.age = age
    def info(self):
        print("I am {}, {} years old！".format(self.name, self.age))
```
#### 实例化Monk类
```python
A_Monk = Monk("biochen", 28)
```
#### 查看对象类型
```python
A_Monk.__class__
type(A_Monk)
```
#### 查看对象属性
```python
A_Monk.name
```
#### 调用对象方法
```python
A_Monk.info()
```