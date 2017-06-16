## 搭建远程Jupyter Notebook服务器
Jupyter Notebook是数据分析的一大神器，特别是可视化和分享功能强大。数据量大的时候，我的笔记本电脑有点吃力，于是想着在服务器上搭建Jupyter Notebook服务器。
#### 1. 安装Jupyter Notebook库
```bash
$ pip3 install Jupyter
```
#### 2. 生成Jupyter Notebook配置文件
```bash
$ jupyter notebook --generate-config
Writing default config to: /home/you/.jupyter/jupyter_notebook_config.py
```
#### 3. 设置Jupyter Notebook密码
```bash
$ jupyter notebook password
Enter password: *******
Verify password: *******
[NotebookPasswordApp] Wrote hashed password to /home/chenwen/.jupyter/jupyter_notebook_config.json
```
#### 4. 修改jupyter_notebook_config.py
```python
c.NotebookApp.ip = '*'               #所有绑定服务器的IP都能访问
c.NotebookApp.port = 9999            #将端口设置为自己喜欢的吧，默认是8888
c.NotebookApp.open_browser = False   #我们并不想在服务器上直接打开Jupyter Notebook，所以设置成False
```
#### 5. 启动Jupyter Notebook服务器,并让其在后台运行
```bash
$ jupyter notebook &
```
#### 6. 在自己的电脑上打开浏览器访问Jupyter Notebook服务器
![](jupyter_login.png)
输入密码后，就能像本地Jupyter Notebook一样使用啦。