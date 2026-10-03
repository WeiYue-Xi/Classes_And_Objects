# 类和对象

## 一、类的定义

### 1、类定义格式

- class为定义类的关键字，{}中为类的主体，注意类定义结束时后面分喊不能省略。类体中内容称为类的成员：类中的变量称为类的属性或成员变量；类中的函数称为类的方法或者成员函数。
- 为了区分成员变量，一般习惯成员变量加一个特殊标识，如成员变量前面或者后面加_或者m开头，注意C++中这个并不是强制的，只是一些惯例。
- C++中struct也可以定义类，C++兼容C中struct的用法，同时struct升级成了类，struct也可以定义类，但一般情况下推荐使用class定义类。
- 定义在类里面的成员函数默认为inline.

### 2、访问限定符

- C++ 一 种 实 现 封 装 的 方 式 , 用 类 将 对 象 的 属 性 与 方 法 结 合 在 一 块 , 让 对 象 更 加 完 善 , 通 过 访 问 权 限。选择性的将其接口提供给外部的用户使用。

- public 修 饰 的 成 员 在 类 外 可 以 直 接 被 访 问 ;protected 和 private 修 饰 的 成 员 在 类 外 不 能 直 接 被 访问,protected和private是一样的。

- 访 问 权 限 作 用 域 从 该 访 问 限 定 符 出 现 的 位 置 开 始 直 到 下 一 个 访 问 限 定 符 出 现 时 为 止 , 如 果 后 面 没 有访问限定符,作用域就到}即类结束。

- class 定 义 成 员 没 有 被 访 问 限 定 符 修 饰 时 默 认 为 private,struct 默 认 为 public 。

- 一 般 成 员 变 量 都 会 被 限 制 为 private/protected, 需 要 给 别 人 使 用 的 成 员 函 数 会 放 为 public 。

  > [!IMPORTANT]
  >
  > C++ struct升级成了类
  >
  > 1、类里面可以定义函数
  >
  > 2、struct名称就可以代表类型

```C++
typedef struct ListNode
{
    ListNode* next;//不需要struct
    int data;
}LTNode;

//不需要typedef,ListNode就可以代表类型
struct ListNode
{
    void Init(int x)
    {
        next = nullptr;
        data = x;
    }
    ListNode* next;
    int data;
};
```

### 3、类域

- 类定义了⼀个新的作⽤域，类的所有成员都在类的作⽤域中，在类体外定义成员时，需要使⽤ :: 作⽤域操作符指明成员属于哪个类域。

> [!IMPORTANT]
>
> 类域解决类和类之间的命名冲突
>
> 命名空间域解决全局的函数 / 变量 / 类型的命名冲突