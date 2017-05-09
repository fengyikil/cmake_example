这是自己在学习cmake的过程中写的一些小例子，学习还在继续。。。
参考博客：http://blog.csdn.net/dbzhang800/article/details/6314073

例子清单：

test1: 入门,单文件，单目录，编译第一个程序.
test2: 多文件,单目录，一个个添加.
test3: 多文件，单目录，添加当前目录自动找文件并赋值到变量.
test4: 多文件，多目录，一个CMakeLists.txt.
test5: 多文件，多目录，多个CMakeLists.txt 一个静态库.
test6: 多文件，多目录，多个CMakeLists.txt 一个动态库(支持windows,代码要做处理).
test7: 多文件，多目录，多个CMakeLists.txt 多个动态库 其中一个动态库依赖另一个 ,还用到目标输出文件重命名.
test8: 测试新旧两种添加预定义宏的方法.技巧：同一份代码编译不同的目标.

NSP: 编译lua库,同时生成静态库，动态库，解析器，编译器.


