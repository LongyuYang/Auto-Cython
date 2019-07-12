# Auto-Cython
Automatically convert a C++ API to a Python API using libclang and Cython.

## Requirements
- Windows 10
- Microsoft Visual C++ >= 11.0
- Python 2.7 32bit

## Preparation
Download Clang 3.7 32bit from [here](http://releases.llvm.org/download.html) and put `libclang.dll` to the root directory. Then run: 
```bash
pip install Cython clang==3.7
```

## Generate Cython Codes
Put your `.h` file to the directory `include` and your `.lib` file (or your `.cpp` file) to the directory `lib`. Then run:
```bash
python C2py.py --head_name='include/YOUR_API_NAME.h'
```

## Build Python Extension
Replace `vector` by your API name in `setup.py`. Then run:
```bash
python setup.py build_ext --compiler=msvc --plat-name=win32
```
This will generate Python extension `.pyd`. Don't forget to put `.dll` to the same path of `.pyd` file when using the generated Python API.
If you want to generate a Python API on win64 platform, simply use the argument `--plat-name=win-amd64`. If you want to generate a Python API on other Python versions, simply replace the path of your python, for instance:
```bash
C:/python36/python setup.py build_ext --compiler=msvc --plat-name=win-amd64
```
This will generate a Python3.6 API on win-amd64 platform.

