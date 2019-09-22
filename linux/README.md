# Auto-Cython
Automatically convert a C++ API to a Python API using libclang and Cython.

## Requirements
- Linux 64bit
- Python 2.7

## Preparation
Download Clang 3.7 from [here](http://releases.llvm.org/download.html) and put `libclang.so` to the root directory. Then run: 
```bash
pip install Cython clang==3.7
```

## Generate Cython Codes
Put your `.h` file to the directory `include` and your `.a` file to the directory `lib`. Then run:
```bash
python C2py.py --head_path='include/YOUR_API_NAME.h'
```

## Build Python Extension
Replace `vector` by your API name in `setup.py`. Then run:
```bash
python setup.py build_ext --inplace
```
This will generate Python extension `.so`. For how to use the Python API, refer to the `.pyx` file.
If you want to generate a Python API on other Python versions, simply replace the path of your python, for instance:
```bash
/usr/bin/python3 setup.py build_ext --inplace
```
This will generate a Python3 API.

