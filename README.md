# passcal
Pascal-S compiler based on ANTLR.

## Setup

### LLVM

For convenience there is an automatic installation script available that installs LLVM for you.
To install the latest stable version:

```
bash -c "$(wget -O - https://apt.llvm.org/llvm.sh)"
```

To install a specific version of LLVM:

```
wget https://apt.llvm.org/llvm.sh
chmod +x llvm.sh
sudo ./llvm.sh <version number>
```

To install all apt.llvm.org packages at once:

```
wget https://apt.llvm.org/llvm.sh
chmod +x llvm.sh
sudo ./llvm.sh <version number> all
# or
sudo ./llvm.sh all
```

In this project, we use llvm-18.

### ANTLR4

Clone antlr4 repo.

```
git clone git@github.com:antlr/antlr4.git
```

Go to the runtime directory.

```
cd ./runtime/Cpp/
```

Build

```
mkdir build && cd build && cmake .. && make
```

Install

```
sudo make install
```

