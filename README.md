# embedded-c-library

![chinese](images/chinese.svg)

> 来自GitHub的通用嵌入式C语言库推荐

1. MultiTimer    [**原地址**](https://github.com/0x1abin/MultiTimer)    [**备用地址**](\MultiTimer)

   **简介**：MultiTimer 是一个软件定时器扩展模块，可无限扩展你所需的定时器任务，取代传统的标志位判断方式， 更优雅更便捷地管理程序的时间触发时序。


2. MultiButton    [**原地址**](https://github.com/0x1abin/MultiButton)    [**备用地址**](\MultiButton)

   **简介**：MultiButton 是一个小巧简单易用的事件驱动型按键驱动模块，可无限量扩展按键，按键事件的回调异步处理方式可以简化你的程序结构，去除冗余的按键处理硬编码，让你的按键业务逻辑更清晰。

3. [**EasyFlash**](https://github.com/armink/EasyFlash)

   **简介**：EasyFlash是一款开源的轻量级嵌入式Flash存储器库，主要为MCU(Micro Control Unit)提供便捷、通用的上层应用接口，使得开发者更加高效实现基于的Flash存储器常见应用开发。该库目前提供 **三大实用功能** ：

   - **Env** 快速保存产品参数，支持 **写平衡（磨损平衡）** 及 **掉电保护** 模式。

   EasyFlash不仅能够实现对产品的 **设定参数** 或 **运行日志** 等信息的掉电保存功能，还封装了简洁的 **增加、删除、修改及查询** 方法， 降低了开发者对产品参数的处理难度，也保证了产品在后期升级时拥有更好的扩展性。让Flash变为NoSQL（非关系型数据库）模型的小型键值（Key-Value）存储数据库。

   - **IAP** 在线升级再也不是难事儿。

   该库封装了IAP(In-Application Programming)功能常用的接口，支持CRC32校验，同时支持Bootloader及Application的升级。

   - **Log** 无需文件系统，日志可直接存储在Flash上。

   非常适合应用在小型的不带文件系统的产品中，方便开发人员快速定位、查找系统发生崩溃或死机的原因。同时配合[EasyLogger](https://github.com/armink/EasyLogger)(一个超轻量级、高性能C日志库，它提供与EasyFlash的无缝接口)一起使用，轻松实现C日志的Flash存储功能。

4. [**EasyLogger**](https://github.com/armink/EasyLogger)

   **简介**：EasyLogger 是一款超轻量级(ROM<1.6K, RAM<0.3K)、高性能的 C/C++ 日志库，非常适合对资源敏感的软件项目，例如： IoT 产品、可穿戴设备、智能家居等等。相比 log4c、zlog 这些知名的 C/C++ 日志库， EasyLogger 的功能更加简单，提供给用户的接口更少，但上手会很快，更多实用功能支持以插件形式进行动态扩展。

5. [RingBuff](https://mp.weixin.qq.com/s?__biz=MzI4NTQ4NTA3NA==&mid=2247486746&idx=1&sn=e09a4c06291bb641caddaebc59dc2648&chksm=ebea3c67dc9db571ebafde83b7725af84432d2bbb591044a6e60f5cd9d84db0a6164cf993bf1&mpshare=1&scene=1&srcid=0603al1BgU9nTEeoxOULtZL2#rd)：环形缓冲区


