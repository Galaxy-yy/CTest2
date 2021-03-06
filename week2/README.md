#Week2 Tasks

##1.整数的二进制翻转

**描述**
```
设计程序，将整数x从第p位开始向右n位（p从右至左编号位0~32）翻转（即1变0，0变1），其余各位保持不看变。
输入：三个整数，分别是x，p，n 输出：输出分为两行。
第一行为整数翻转前的二进制（每八位输出一个空格）。第一行为整数翻转后的二进制。
注：可参考课本p44例2.19
```

**样例输入**
```
15 0 32
```

**样例输出**
```
00000000 00000000 00000000 00001111        
11111111 11111111 11111111 11110000
```

##2.循环移位

**描述**
```
设计程序，将整数x向右循环移位n位。
注：int型的大小与机器有关，故需先使用sizeof()函数判断int型所占字节数，再分别处理。
输入：整数x和移位数n
输出：移位后的结果
```

**样例输入**
```
5 33
```

**样例输出**
```
-2147483646
```

##3.枚举类型应用

**描述**
```
定义一个枚举类型enum mouth，用来描述一年12个月：一月（jan）、二月（feb）、...、十二月（dec），
编写一个程序，根据用户输入的年份，输出该年各月的英文名及天数。
```

**样例输入**
```
2015
```

**样例输出**
```
January,31
February,28
March,31
April,30
May,31
June,30
July,31
August,31
september,30
October,31
November,30
December,31
```

##4.整数判断

**描述**
```
编写程序，如果整数a能被3整除且个位数字是5，则结果为1，否则为0。
注：本题需循环输入整数a，当输入非整数时，程序结束运行，输出结果用换行符'\n'隔开。用scanf()返回值做循环判断条件。
```

**样例输入**
```
15
3
10
45
q
```

**样例输出**
```
1
0
0
1
```
