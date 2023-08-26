# GCC编译

### 直接生成exe可执行文件:



```sh
gcc **.c **.c -o **.exe
```

 没有-o和后面的.exe文件名自动默认生成.exe文件

**编译生成目标文件：**

编译第一个 C 代码文件生成第一个目标文件：

```sh
gcc -c file1.c -o file1.obj
```

编译第二个 C 代码文件生成第二个目标文件：

```shell
gcc -c file2.c -o file2.obj
```

###  **链接目标文件生成可执行文件：**

链接两个目标文件生成可执行文件（例如，`myprogram.exe`）：

```sh
gcc file1.obj file2.obj -o myprogram.exe
```

在这个命令中，`file1.obj` 和 `file2.obj` 是您生成的目标文件，`myprogram.exe` 是您希望生成的可执行文件的名称。
