> 下述字面值表示何种含义？它们各自的数据类型是什么？
>
> (a) "Who goes with F\145rgus?\012"
>
> (b) 3.14e1L
>
> (c) 1024f
>
> (d) 3.14L

(a): Who goes with Fergus?(换行)，string 类型

(b): long double

(c): 无效，因为后缀 f 只能用于浮点字面量，而 1024 是整型。

(d): long double