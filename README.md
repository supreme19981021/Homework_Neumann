OOP课程作业项目：第1次实验
======

`17计工本1`  || `17计工本2`

 一、实验任务
------------

1. 设计一个简单的`学生成绩管理系统`来管理若干学生的信息，每个学生的信息包括学号、姓名、某门课的平时成绩、实验成绩、期末成绩、总成绩和排名，其中总成绩=0.2\*平时成绩+0.2\*实验成绩+0.6\*期末成绩。系统的基本需求如下：
```
1. 从文件data.txt中读取所有学生成绩信息。
2. 根据学生成绩信息计算出学生成绩排名。
3. 输入学号可查询某个学生的成绩信息。
4. 统计出该课程成绩的均值和方差，并对成绩分布简要分析。
```
请基于上述基本需求采用`多文件模块编程方法`完成该成绩管理系统的设计与实现。

2. 将成绩管理系统实现源码提交到Github指定的repository仓库内(就是这个`Homework_Turning/` 仓库)。
 
 ```
 作业提交过程（基于git bash）
 * 0. 本地磁盘建立个人作业文件夹（如OOP_Work），进入该文件夹，右键打开 git bash here
 * 1 克隆远程作业项目到本地机器（使用的是项目的ssh地址，不是https地址）:  $ git clone git@github.com:tsingke/Homework_Neumann.git
 * 2 克隆完后切换到名为Homework_Neumann的作业项目内（这个才是git管理的文件夹）: $ cd Homeork_Neumann/
 * 3 写作业啦：复制一份`李雷`的文件夹，接着把`李雷`的文件夹重命名为自己的文件夹(计本_姓名，或计师本_姓名)，替换里面相应内容为自己作业内容；
 * 4 把所有修改添加到缓冲区:     $ git add . 
 * 5 接着添加版本修改标记：      $ git commit -m "自己在引号内写注释内容"
 * 6 最后推送作业到本项目:       $ git push origin master
```
如果想继续修改作业，请先执行：$git pull 命令，先保持和群作业同步，然后再执行git add . , git commit 和 git push 操作


作业文件路径范例： 

`homework/李雷/Experiment_1/source code`

`homework/韩梅/Experiment_1/source code`


 二、实验说明
------------

1.学生信息文件data.txt格式：
学号 姓名 平时成绩 实验成绩 期末成绩
```
6
2017000001 姚期智 90 85 98
2017000002 周光远 85 87 92
2017000003 孙家栋 89 84 96
2017000004 杨芙清 95 76 98
2017000005 张朝阳 78 80 88
2017000006 李彦弘 82 90 85
```

2.技能要领
* 熟悉visual studio编程环境
* 掌握多文件编程方法
* 掌握github的作业提交流程
* 了解规范化实验报告写作方法

三、实验报告
------------

请按照提供的实验报告模板撰写实验报告， 流程图或矢量图可以采用[visio](https://www.google.com/search?q=Microsoft%20Office%20%E4%B8%93%E4%B8%9A%E5%A2%9E%E5%BC%BA%E7%89%88%202016%20&ie=UTF-8)绘制，代码可以采用开源软件 [highlight](http://www.andre-simon.de/zip/download.php) 将.c或.cpp文件转换成.rtf高亮可移植代码形式
