## Anaconda
Python语言简洁，学习起来非常快，使用Python的科研工作者越来越多。Python拥有丰富的扩展包，这使得它可以轻松处理各种问题。
Python用于科学计算的包括但不限于如下：
Numpy：提供了许多高级的数值编程工具，如：矩阵数据类型、矢量处理，以及精密的运算库等。
Scipy：提供许多科学计算函数库，包括统计,优化,整合,线性代数模块,傅里叶变换,信号和图像处理,常微分方程求解器等。
Pandas：基于Numpy，提供了大量库和一些标准的数据模型，比如二维数组。
Matplotlib：绘图包，旨在替代MATLAB。
……

Anaconda是一个集合，包括conda，python解释器，一些第三方库。
conda用于包管理和环境管理。包管理与pip类似，管理python第三方库。conda将一切都看成包，包括conda本身和python解释器。环境管理类似于virtualenv，能够允许用户使用不同版本的python和不同的第三方库环境，并灵活切换。

用Anaconda来管理环境和第三方库将是非常方便的，而且自己安装这些库对新手来说是一个不小的挑战。

Anaconda包括了科学、数学、工程、数据分析中最受欢迎的300多个python包，支持python2/3, Windows/Linux/Mac，而且还是非常有好的安装包（.exe/.sh/.pkg)。一键安装科学计算中常用的包，爽！

安装Anaconda之后，Win键+R，输入’cmd’，进入命令行窗口，输入如下命令验证Anaconda是否安装成功，并查看它的版本。
```BASH
conda --version
```
Anaconda安装成功之后，我们首先将软件源修改为国内镜像，运行如下命令。
```BASH
conda config --add channels https://mirrors.tuna.tsinghua.edu.cn/anaconda/pkgs/free/
conda config --set show_channel_urls yes
```
我们现在就可以通过create命令来创建虚拟环境了。
```BASH
conda create --name tensorflow python=3.5
```
这样我就创建了一个名叫tensorflow的虚拟环境，当然你可以用任何你喜欢的名字代替。我还指定了Python版本是3.5。

环境创建完毕后，我们可以使用info命令查看所有环境。
```BASH
conda info --envs
```

如果需要切换到该虚拟环境，可以使用activate命令。
```BASH
activate tensorflow
```
如果想取消激活，使用deactivate命令即可。
```BASH
deactivate tensorflow
```
如果想删除虚拟环境，使用remove命令。
```BASH
conda remove --name tensorflow --all
```

当我们切换到某个虚拟环境后，就可以进行第三方库的管理了。如果只是简单的学习Python，直接用系统环境就可以了，没有必要创建虚拟环境。

查看安装的包，可以使用list命令。
```BASH
conda list
```

如果你发现某个包默认没有装，比如scikit-learn，可以使用conda install 命令安装。
```BASH
conda install scikit-learn
```
更新包，可以使用conda update命令
```BASH
conda update scikit-learn
```

此外，我还非常喜欢Anaconda带的IDE工具spyder，比起python官方自带的IDLE强很多，但是又不复杂。