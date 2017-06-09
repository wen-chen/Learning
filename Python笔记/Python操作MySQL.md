Python操作MySQL

MySQLdb
安装：pip install mysql-python

加载包 
import MySQLdb
import MySQLdb.cursors



建立连接
db = MySQLdb.connect(host='127.0.0.1', user='root', passwd='root', db='douban', port=8889, charset='utf8', cursorclass = MySQLdb.cursors.DictCursor)
db.autocommit(True)
cursor = db.cursor()

执行操作
CURD
cursor.execute(sql)

关闭连接
cursor.close()
db.close()