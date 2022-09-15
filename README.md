# embedded-c-library

![chinese](images/chinese.svg)

## 开始使用
1. `git clone https://github.com/canhetingsky/embedded-c-library`
2. `cd embedded-c-library`
3. `git submodule init`

## 文件说明

> 来自GitHub的通用嵌入式C语言库推荐

1. [**MultiTimer**](https://github.com/0x1abin/MultiTimer)

   **简介**：MultiTimer 是一个软件定时器扩展模块，可无限扩展你所需的定时器任务，取代传统的标志位判断方式， 更优雅更便捷地管理程序的时间触发时序。


2. [**MultiButton**](https://github.com/0x1abin/MultiButton)

   **简介**：MultiButton 是一个小巧简单易用的事件驱动型按键驱动模块，可无限量扩展按键，按键事件的回调异步处理方式可以简化你的程序结构，去除冗余的按键处理硬编码，让你的按键业务逻辑更清晰。

3. [**EasyFlash**](https://github.com/armink/EasyFlash) 目前已经不更新，请移步至 [**FlashDB**](https://github.com/armink/FlashDB)

   **简介**：EasyFlash是一款开源的轻量级嵌入式Flash存储器库，主要为MCU(Micro Control Unit)提供便捷、通用的上层应用接口，使得开发者更加高效实现基于的Flash存储器常见应用开发。该库目前提供 **三大实用功能** ：

   - **Env** 快速保存产品参数，支持 **写平衡（磨损平衡）** 及 **掉电保护** 模式。

   EasyFlash不仅能够实现对产品的 **设定参数** 或 **运行日志** 等信息的掉电保存功能，还封装了简洁的 **增加、删除、修改及查询** 方法， 降低了开发者对产品参数的处理难度，也保证了产品在后期升级时拥有更好的扩展性。让Flash变为NoSQL（非关系型数据库）模型的小型键值（Key-Value）存储数据库。

   - **IAP** 在线升级再也不是难事儿。

   该库封装了IAP(In-Application Programming)功能常用的接口，支持CRC32校验，同时支持Bootloader及Application的升级。

   - **Log** 无需文件系统，日志可直接存储在Flash上。

   非常适合应用在小型的不带文件系统的产品中，方便开发人员快速定位、查找系统发生崩溃或死机的原因。同时配合[EasyLogger](https://github.com/armink/EasyLogger)(一个超轻量级、高性能C日志库，它提供与EasyFlash的无缝接口)一起使用，轻松实现C日志的Flash存储功能。

4. [**EasyLogger**](https://github.com/armink/EasyLogger)

   **简介**：EasyLogger 是一款超轻量级(ROM<1.6K, RAM<0.3K)、高性能的 C/C++ 日志库，非常适合对资源敏感的软件项目，例如： IoT 产品、可穿戴设备、智能家居等等。相比 log4c、zlog 这些知名的 C/C++ 日志库， EasyLogger 的功能更加简单，提供给用户的接口更少，但上手会很快，更多实用功能支持以插件形式进行动态扩展。
   
5. [**FlashDB**](https://github.com/armink/FlashDB)

   简介：[FlashDB](http://armink.gitee.io/flashdb/#/zh-cn/) 是一款超轻量级的嵌入式数据库，专注于提供嵌入式产品的数据存储方案。与传统的基于文件系统的数据库不同，FlashDB 结合了 Flash 的特性，具有较强的性能及可靠性。并在保证极低的资源占用前提下，尽可能延长 Flash 使用寿命。

   FlashDB 提供两种数据库模式：

   - **键值数据库** ：是一种非关系数据库，它将数据存储为键值（Key-Value）对集合，其中键作为唯一标识符。KVDB 操作简洁，可扩展性强。
   - **时序数据库** ：时间序列数据库 （Time Series Database , 简称 TSDB），它将数据按照 **时间顺序存储** 。TSDB 数据具有时间戳，数据存储量大，插入及查询性能高。

> 嵌入式C语言库

1. [RingBuff](https://mp.weixin.qq.com/s?__biz=MzI4NTQ4NTA3NA==&mid=2247486746&idx=1&sn=e09a4c06291bb641caddaebc59dc2648&chksm=ebea3c67dc9db571ebafde83b7725af84432d2bbb591044a6e60f5cd9d84db0a6164cf993bf1&mpshare=1&scene=1&srcid=0603al1BgU9nTEeoxOULtZL2#rd)：环形缓冲区

2. [树](https://mp.weixin.qq.com/s?__biz=MzA5NTM3MjIxMw==&mid=2247486244&idx=1&sn=07218a8fef82f7f380c86616830ba1cb&chksm=90411dfea73694e8bfed54a9f758954dbfb643f4ffc0e4d76973b32eaf34f1e72f777d227c58&mpshare=1&scene=1&srcid=&sharer_sharetime=1574211473258&sharer_shareid=6a0237dde8951b0526d81bf5a88decaf#rd)：C语言实现树

3. [链表](https://mp.weixin.qq.com/s?__biz=MzA5NTM3MjIxMw==&mid=2247486319&idx=1&sn=50a938de3a0545a96563a070c8eb2dc8&chksm=90411db5a73694a32407e11fb3aa63338fd15013324a5f457c1729d6c1b32d32fd5e8d7b8a68&mpshare=1&scene=1&srcid=&sharer_sharetime=1574922515157&sharer_shareid=6a0237dde8951b0526d81bf5a88decaf&key=6fc7bd086809266be40985417ea8a2c530ac5596960f1b6bf203596136ce6699fd9bfb3f6f18456e6853574c851e14b1e904d8f7102f4d8571e2889a53c1bbc65c8a2fe118788be741a0808cc2d0b88a&ascene=1&uin=MTEwODMzMzE2NA%3D%3D&devicetype=Windows+7&version=62070158&lang=zh_CN&pass_ticket=vUhgYLAvXWaQCf4n1lYhM0PHWlCfCje4I9bgpTwIJsc%2FYo6Y9b1i8vrDdGgGXCzX)：C语言，链表