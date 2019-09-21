# Auto-Cython
Automatically convert a C++ API to a Python API using libclang and Cython.

## Requirements
- OS X 10.7 or higher
- Python 2.7 or 3.6

## Preparation
Download Clang 3.7 from [here](http://releases.llvm.org/download.html) and put `libclang.dylib` to the root directory. Then run: 
```bash
pip install Cython clang==3.7
```

## Generate Cython Codes
Put your `.h` file to the directory `./include` and your `.a` file (or your `.cpp` file) to the directory `./lib`. Then run:
```bash
python C2py.py --head_path='include/YOUR_API_NAME.h'
```

## Build Python Extension
Replace `vector` by your API name in `setup.py`. Then run:
```bash
python setup.py build_ext  --inplace 
```
This will generate Python extension `.so`. If you want to generate a Python API on other Python versions, simply replace the path of your python.
