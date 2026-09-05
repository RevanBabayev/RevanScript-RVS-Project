"""
    © 2026 Rəvan Babayev. All rights reserved.
    RevanScript (RVS) Interpreter (Python 3.12 Build System)
"""


# Python Standard Libraries
import tomllib as toml
import subprocess as sp


def source_file_compile(compiler: dict[str, str], build: dict[str, list[str]]) -> bool:
    compiler_gcc: str = compiler["Name0"]
    compiler_clang: str = compiler["Name1"]
    compiler_mingw_gcc: str = compiler["Name2"]
    source_file_names: list[str] = build["SourceFiles"]
    object_file_names: list[str] = build["ObjectFiles"]
    compile_type: str = build["Flags"][0]
    language_standard: str = build["Flags"][1]
    optimization: str = build["Flags"][2]

    problem_flag: bool = False

    for sf_name, of_name in [source_file_names, object_file_names]:
        result0 = sp.run(
            [compiler_gcc,
             compile_type,
             language_standard,
             optimization,
             "-c", 
             sf_name, 
             "-o", 
             of_name], 
            capture_output=True,
            text=True)
        
        if result0.returncode == 0:
            print("Successful GCC object file compile!!!")
        else:
            problem_flag = True
            print(result0.stderr)

        result1 = sp.run(
            [compiler_clang,
              compile_type,
              language_standard,
              optimization,
              "-c", 
              sf_name, 
              "-o", 
              of_name], 
            capture_output=True,
            text=True)

        if result1.returncode == 0:
            print("Successful Clang object file compile!!!")
        else:
            problem_flag = True
            print(result1.stderr)
        
        result2 = sp.run(
            [compiler_mingw_gcc,
             compile_type,
             language_standard,
             optimization,
             "-c", 
             sf_name, 
             "-o", 
             of_name], 
            capture_output=True,
            text=True)

        if result2.returncode == 0:
            print("Successful MinGW-GCC object file compile!!!")
        else:
            problem_flag = True
            print(result2.stderr)

    if problem_flag == True:
        return False
    else:
        return True

def object_file_compile(object_file_names: list) -> bool:
    ...
    
with open("../../config/Config.toml", "rb") as file:
    config: dict = toml.load(file)

    project: dict = config["Project"]
    compiler: dict = config["Compiler"]
    build: dict = config["Build"]

    source_file_compile(compiler, build)

