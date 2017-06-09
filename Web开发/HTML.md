## HTML
#### 基本结构
```html
<!DOCTYPE html>
<html>
    <head>
    </head>
    <body>
    </body>
</html>
```
#### HTML注释
```html
<!-- 这是一个注释 -->
```
#### 单标签和双标签
```html
<meta charset="UTF-8"/>
<title>我是一个标题</title>
```
#### 块级标签和內联标签
块级元素在没有任何布局属性作用时，默认排列方式是换行排列；内联元素在没有任何布局属性作用时，默认排列方式是在同行排列，直到宽度超出包含它的容器宽度时才自动换行。
###### 块级标签
```html
<h1>我是一号标题</h1>
<h6>我是六号标题</h6>
<p>我是一个默默无闻的段落</p>
<div>我是块级元素</div>
```
###### 內联标签
```html
<a href="http://www.biochen.com" target="_blank">带你去一个好地方</a>
<img src="logo.png" width="200" height="200"/>
<br/>
<span>我是内联元素</span>
```
#### 表格
```html
<table>
    <tr> <th>我是表头</th> <th>我是表头</th> </tr>
    <tr> <td>我是内容</td> <td>我是内容</td> </tr>
</table>
```
#### 列表
```html
<ul>
    <li>我是无序列表的一个元素</li>
    <li>我是无序列表的一个元素</li>
</ul>
<ol>
     <li>我是有序列表的第一个元素</li>
     <li>我是有序列表的第二个元素</li>
</ol>
```
#### 下拉
```html
<select>
    <option>选项</option>
</select>
```
#### 表单
```html
<form action="" method="post">
    用户名 <input type="text" placeholder="默认文本" name="username"/>
    密码 <input type="text" placeholder="密码" name="password"/>
    一大段文本 <textarea rows="10" cols="10" placeholder="想说的话" name="content"></textarea>
    <button type="submit">登陆</button>
</form>
```
input的type：button、checkbox、color、date、datetime、email、file、month、number、password、radio、range、submit、text、time
#### 元素的属性
id、class、style
```html
<a href="#id">跳转到某个id的元素</a>
```


