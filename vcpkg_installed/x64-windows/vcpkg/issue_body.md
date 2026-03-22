Package: glad[core,loader]:x64-windows@0.1.36

**Host Environment**

- Host: x64-windows
- Compiler: MSVC 19.44.35217.0
- CMake Version: 3.30.1
-    vcpkg-tool version: 2025-09-03-4580816534ed8fd9634ac83d46471440edd82dfe
    vcpkg-readonly: true
    vcpkg-scripts version: b1b19307e2d2ec1eefbdb7ea069de7d4bcd31f01

**To Reproduce**

`vcpkg install `

**Failure logs**

```
-- Note: glad only supports static library linkage. Building static library.
-- Using cached Dav1dde-glad-1ecd45775d96f35170458e6b148eb0708967e402.tar.gz
-- Extracting source C:/Users/kilia/AppData/Local/vcpkg/downloads/Dav1dde-glad-1ecd45775d96f35170458e6b148eb0708967e402.tar.gz
-- Applying patch encoding.patch
-- Applying patch find_python.patch
-- Using source at D:/C++/cpp3D/vcpkg_installed/x64-windows/vcpkg/blds/glad/src/708967e402-274d415499.clean
-- This version of glad uses the compatibility profile. To use the core profile instead, create an overlay port of this with GLAD_PROFILE set to 'core' or set GLAD_PROFILE to 'core' in a custom triplet.
-- This recipe is at C:/Users/kilia/AppData/Local/vcpkg/registries/git-trees/fa93b14c1581057e1d14650f5f15c9b0757dd548
-- See the overlay ports documentation at https://github.com/microsoft/vcpkg/blob/master/docs/specifications/ports-overlay.md
-- Found external ninja('1.12.1').
-- Configuring x64-windows
CMake Error at scripts/cmake/vcpkg_execute_required_process.cmake:127 (message):
    Command failed: D:/VSC/produit/Common7/IDE/CommonExtensions/Microsoft/CMake/Ninja/ninja.exe -v
    Working Directory: D:/C++/cpp3D/vcpkg_installed/x64-windows/vcpkg/blds/glad/x64-windows-rel/vcpkg-parallel-configure
    Error code: 1
    See logs for more information:
      D:\C++\cpp3D\vcpkg_installed\x64-windows\vcpkg\blds\glad\config-x64-windows-dbg-CMakeCache.txt.log
      D:\C++\cpp3D\vcpkg_installed\x64-windows\vcpkg\blds\glad\config-x64-windows-rel-CMakeCache.txt.log
      D:\C++\cpp3D\vcpkg_installed\x64-windows\vcpkg\blds\glad\config-x64-windows-dbg-CMakeConfigureLog.yaml.log
      D:\C++\cpp3D\vcpkg_installed\x64-windows\vcpkg\blds\glad\config-x64-windows-rel-CMakeConfigureLog.yaml.log
      D:\C++\cpp3D\vcpkg_installed\x64-windows\vcpkg\blds\glad\config-x64-windows-out.log

Call Stack (most recent call first):
  D:/C++/cpp3D/vcpkg_installed/x64-windows/x64-windows/share/vcpkg-cmake/vcpkg_cmake_configure.cmake:269 (vcpkg_execute_required_process)
  C:/Users/kilia/AppData/Local/vcpkg/registries/git-trees/fa93b14c1581057e1d14650f5f15c9b0757dd548/portfile.cmake:126 (vcpkg_cmake_configure)
  scripts/ports.cmake:206 (include)



```

<details><summary>D:\C++\cpp3D\vcpkg_installed\x64-windows\vcpkg\blds\glad\config-x64-windows-dbg-CMakeConfigureLog.yaml.log</summary>

```

---
events:
  -
    kind: "message-v1"
    backtrace:
      - "C:/Users/kilia/AppData/Local/vcpkg/downloads/tools/cmake-3.30.1-windows/cmake-3.30.1-windows-i386/share/cmake-3.30/Modules/CMakeDetermineSystem.cmake:205 (message)"
      - "CMakeLists.txt:22 (project)"
    message: |
      The system is: Windows - 10.0.26200 - AMD64
  -
    kind: "message-v1"
    backtrace:
      - "C:/Users/kilia/AppData/Local/vcpkg/downloads/tools/cmake-3.30.1-windows/cmake-3.30.1-windows-i386/share/cmake-3.30/Modules/CMakeDetermineCompilerId.cmake:17 (message)"
      - "C:/Users/kilia/AppData/Local/vcpkg/downloads/tools/cmake-3.30.1-windows/cmake-3.30.1-windows-i386/share/cmake-3.30/Modules/CMakeDetermineCompilerId.cmake:64 (__determine_compiler_id_test)"
      - "C:/Users/kilia/AppData/Local/vcpkg/downloads/tools/cmake-3.30.1-windows/cmake-3.30.1-windows-i386/share/cmake-3.30/Modules/CMakeDetermineCCompiler.cmake:123 (CMAKE_DETERMINE_COMPILER_ID)"
      - "CMakeLists.txt:22 (project)"
    message: |
      Compiling the C compiler identification source file "CMakeCCompilerId.c" failed.
      Compiler: D:/VSC/produit/VC/Tools/MSVC/14.44.35207/bin/Hostx64/x64/cl.exe 
      Build flags: /nologo;/DWIN32;/D_WINDOWS;/utf-8;/MP
      Id flags:  
      
      The output was:
      2
      CMakeCCompilerId.c
      LINK : fatal error LNK1104: impossible d'ouvrir le fichier 'kernel32.lib'
      
      
  -
    kind: "message-v1"
    backtrace:
      - "C:/Users/kilia/AppData/Local/vcpkg/downloads/tools/cmake-3.30.1-windows/cmake-3.30.1-windows-i386/share/cmake-3.30/Modules/CMakeDetermineCompilerId.cmake:17 (message)"
      - "C:/Users/kilia/AppData/Local/vcpkg/downloads/tools/cmake-3.30.1-windows/cmake-3.30.1-windows-i386/share/cmake-3.30/Modules/CMakeDetermineCompilerId.cmake:64 (__determine_compiler_id_test)"
      - "C:/Users/kilia/AppData/Local/vcpkg/downloads/tools/cmake-3.30.1-windows/cmake-3.30.1-windows-i386/share/cmake-3.30/Modules/CMakeDetermineCCompiler.cmake:123 (CMAKE_DETERMINE_COMPILER_ID)"
      - "CMakeLists.txt:22 (project)"
    message: |
      Compiling the C compiler identification source file "CMakeCCompilerId.c" succeeded.
      Compiler: D:/VSC/produit/VC/Tools/MSVC/14.44.35207/bin/Hostx64/x64/cl.exe 
      Build flags: /nologo;/DWIN32;/D_WINDOWS;/utf-8;/MP
      Id flags: -c 
      
      The output was:
      0
      CMakeCCompilerId.c
      
      
      Compilation of the C compiler identification source "CMakeCCompilerId.c" produced "CMakeCCompilerId.obj"
      
      The C compiler identification is MSVC, found in:
        D:/C++/cpp3D/vcpkg_installed/x64-windows/vcpkg/blds/glad/x64-windows-dbg/CMakeFiles/3.30.1/CompilerIdC/CMakeCCompilerId.obj
      
  -
    kind: "message-v1"
    backtrace:
      - "C:/Users/kilia/AppData/Local/vcpkg/downloads/tools/cmake-3.30.1-windows/cmake-3.30.1-windows-i386/share/cmake-3.30/Modules/CMakeDetermineCompilerId.cmake:1243 (message)"
      - "C:/Users/kilia/AppData/Local/vcpkg/downloads/tools/cmake-3.30.1-windows/cmake-3.30.1-windows-i386/share/cmake-3.30/Modules/CMakeDetermineCompilerId.cmake:250 (CMAKE_DETERMINE_MSVC_SHOWINCLUDES_PREFIX)"
      - "C:/Users/kilia/AppData/Local/vcpkg/downloads/tools/cmake-3.30.1-windows/cmake-3.30.1-windows-i386/share/cmake-3.30/Modules/CMakeDetermineCCompiler.cmake:123 (CMAKE_DETERMINE_COMPILER_ID)"
      - "CMakeLists.txt:22 (project)"
    message: |
      Detecting C compiler /showIncludes prefix:
        main.c
        Remarque : inclusion du fichier :  D:\\C++\\cpp3D\\vcpkg_installed\\x64-windows\\vcpkg\\blds\\glad\\x64-windows-dbg\\CMakeFiles\\ShowIncludes\\foo.h
        
      Found prefix "Remarque : inclusion du fichier :  "
  -
    kind: "try_compile-v1"
    backtrace:
      - "C:/Users/kilia/AppData/Local/vcpkg/downloads/tools/cmake-3.30.1-windows/cmake-3.30.1-windows-i386/share/cmake-3.30/Modules/CMakeDetermineCompilerABI.cmake:74 (try_compile)"
      - "C:/Users/kilia/AppData/Local/vcpkg/downloads/tools/cmake-3.30.1-windows/cmake-3.30.1-windows-i386/share/cmake-3.30/Modules/CMakeTestCCompiler.cmake:26 (CMAKE_DETERMINE_COMPILER_ABI)"
      - "CMakeLists.txt:22 (project)"
    checks:
      - "Detecting C compiler ABI info"
    directories:
      source: "D:/C++/cpp3D/vcpkg_installed/x64-windows/vcpkg/blds/glad/x64-windows-dbg/CMakeFiles/CMakeScratch/TryCompile-om0x35"
      binary: "D:/C++/cpp3D/vcpkg_installed/x64-windows/vcpkg/blds/glad/x64-windows-dbg/CMakeFiles/CMakeScratch/TryCompile-om0x35"
    cmakeVariables:
      CMAKE_C_FLAGS: " /nologo /DWIN32 /D_WINDOWS /utf-8 /MP "
      CMAKE_MSVC_DEBUG_INFORMATION_FORMAT: ""
      CMAKE_MSVC_RUNTIME_LIBRARY: "MultiThreaded$<$<CONFIG:Debug>:Debug>$<$<STREQUAL:dynamic,dynamic>:DLL>"
      VCPKG_CHAINLOAD_TOOLCHAIN_FILE: "D:/VSC/produit/VC/vcpkg/scripts/toolchains/windows.cmake"
      VCPKG_CRT_LINKAGE: "dynamic"
      VCPKG_CXX_FLAGS: ""
      VCPKG_CXX_FLAGS_DEBUG: ""
      VCPKG_CXX_FLAGS_RELEASE: ""
      VCPKG_C_FLAGS: ""
      VCPKG_C_FLAGS_DEBUG: ""
      VCPKG_C_FLAGS_RELEASE: ""
      VCPKG_INSTALLED_DIR: "D:/C++/cpp3D/vcpkg_installed/x64-windows"
      VCPKG_LINKER_FLAGS: ""
      VCPKG_LINKER_FLAGS_DEBUG: ""
      VCPKG_LINKER_FLAGS_RELEASE: ""
      VCPKG_PLATFORM_TOOLSET: "v143"
      VCPKG_PREFER_SYSTEM_LIBS: "OFF"
      VCPKG_SET_CHARSET_FLAG: "ON"
      VCPKG_TARGET_ARCHITECTURE: "x64"
      VCPKG_TARGET_TRIPLET: "x64-windows"
      Z_VCPKG_ROOT_DIR: "D:/VSC/produit/VC/vcpkg"
    buildResult:
      variable: "CMAKE_C_ABI_COMPILED"
      cached: true
      stdout: |
        Change Dir: 'D:/C++/cpp3D/vcpkg_installed/x64-windows/vcpkg/blds/glad/x64-windows-dbg/CMakeFiles/CMakeScratch/TryCompile-om0x35'
        
        Run Build Command(s): D:/VSC/produit/Common7/IDE/CommonExtensions/Microsoft/CMake/Ninja/ninja.exe -v cmTC_878b4
        [1/2] D:\\VSC\\produit\\VC\\Tools\\MSVC\\14.44.35207\\bin\\Hostx64\\x64\\cl.exe  /nologo   /nologo /DWIN32 /D_WINDOWS /utf-8 /MP   /MDd /Z7 /Ob0 /Od /RTC1 /showIncludes /FoCMakeFiles\\cmTC_878b4.dir\\CMakeCCompilerABI.c.obj /FdCMakeFiles\\cmTC_878b4.dir\\ /FS -c C:\\Users\\kilia\\AppData\\Local\\vcpkg\\downloads\\tools\\cmake-3.30.1-windows\\cmake-3.30.1-windows-i386\\share\\cmake-3.30\\Modules\\CMakeCCompilerABI.c
        [2/2] C:\\WINDOWS\\system32\\cmd.exe /C "cd . && C:\\Users\\kilia\\AppData\\Local\\vcpkg\\downloads\\tools\\cmake-3.30.1-windows\\cmake-3.30.1-windows-i386\\bin\\cmake.exe -E vs_link_exe --intdir=CMakeFiles\\cmTC_878b4.dir --rc=rc --mt=CMAKE_MT-NOTFOUND --manifests  -- D:\\VSC\\produit\\VC\\Tools\\MSVC\\14.44.35207\\bin\\Hostx64\\x64\\link.exe /nologo CMakeFiles\\cmTC_878b4.dir\\CMakeCCompilerABI.c.obj  /out:cmTC_878b4.exe /implib:cmTC_878b4.lib /pdb:cmTC_878b4.pdb /version:0.0 /machine:x64  /nologo    /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib && cd ."
        FAILED: cmTC_878b4.exe 
        C:\\WINDOWS\\system32\\cmd.exe /C "cd . && C:\\Users\\kilia\\AppData\\Local\\vcpkg\\downloads\\tools\\cmake-3.30.1-windows\\cmake-3.30.1-windows-i386\\bin\\cmake.exe -E vs_link_exe --intdir=CMakeFiles\\cmTC_878b4.dir --rc=rc --mt=CMAKE_MT-NOTFOUND --manifests  -- D:\\VSC\\produit\\VC\\Tools\\MSVC\\14.44.35207\\bin\\Hostx64\\x64\\link.exe /nologo CMakeFiles\\cmTC_878b4.dir\\CMakeCCompilerABI.c.obj  /out:cmTC_878b4.exe /implib:cmTC_878b4.lib /pdb:cmTC_878b4.pdb /version:0.0 /machine:x64  /nologo    /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib && cd ."
        RC Pass 1: command "rc /fo CMakeFiles\\cmTC_878b4.dir/manifest.res CMakeFiles\\cmTC_878b4.dir/manifest.rc" failed (exit code 0) with the following output:
        no such file or directory
        ninja: build stopped: subcommand failed.
        
      exitCode: 1
  -
    kind: "try_compile-v1"
    backtrace:
      - "C:/Users/kilia/AppData/Local/vcpkg/downloads/tools/cmake-3.30.1-windows/cmake-3.30.1-windows-i386/share/cmake-3.30/Modules/CMakeTestCCompiler.cmake:56 (try_compile)"
      - "CMakeLists.txt:22 (project)"
    checks:
      - "Check for working C compiler: D:/VSC/produit/VC/Tools/MSVC/14.44.35207/bin/Hostx64/x64/cl.exe"
    directories:
      source: "D:/C++/cpp3D/vcpkg_installed/x64-windows/vcpkg/blds/glad/x64-windows-dbg/CMakeFiles/CMakeScratch/TryCompile-dfbzjg"
      binary: "D:/C++/cpp3D/vcpkg_installed/x64-windows/vcpkg/blds/glad/x64-windows-dbg/CMakeFiles/CMakeScratch/TryCompile-dfbzjg"
    cmakeVariables:
      CMAKE_C_FLAGS: " /nologo /DWIN32 /D_WINDOWS /utf-8 /MP "
      CMAKE_MSVC_DEBUG_INFORMATION_FORMAT: ""
      CMAKE_MSVC_RUNTIME_LIBRARY: "MultiThreaded$<$<CONFIG:Debug>:Debug>$<$<STREQUAL:dynamic,dynamic>:DLL>"
      VCPKG_CHAINLOAD_TOOLCHAIN_FILE: "D:/VSC/produit/VC/vcpkg/scripts/toolchains/windows.cmake"
      VCPKG_CRT_LINKAGE: "dynamic"
      VCPKG_CXX_FLAGS: ""
      VCPKG_CXX_FLAGS_DEBUG: ""
      VCPKG_CXX_FLAGS_RELEASE: ""
      VCPKG_C_FLAGS: ""
      VCPKG_C_FLAGS_DEBUG: ""
      VCPKG_C_FLAGS_RELEASE: ""
      VCPKG_INSTALLED_DIR: "D:/C++/cpp3D/vcpkg_installed/x64-windows"
      VCPKG_LINKER_FLAGS: ""
      VCPKG_LINKER_FLAGS_DEBUG: ""
      VCPKG_LINKER_FLAGS_RELEASE: ""
      VCPKG_PLATFORM_TOOLSET: "v143"
      VCPKG_PREFER_SYSTEM_LIBS: "OFF"
      VCPKG_SET_CHARSET_FLAG: "ON"
      VCPKG_TARGET_ARCHITECTURE: "x64"
      VCPKG_TARGET_TRIPLET: "x64-windows"
      Z_VCPKG_ROOT_DIR: "D:/VSC/produit/VC/vcpkg"
    buildResult:
      variable: "CMAKE_C_COMPILER_WORKS"
      cached: true
      stdout: |
        Change Dir: 'D:/C++/cpp3D/vcpkg_installed/x64-windows/vcpkg/blds/glad/x64-windows-dbg/CMakeFiles/CMakeScratch/TryCompile-dfbzjg'
        
        Run Build Command(s): D:/VSC/produit/Common7/IDE/CommonExtensions/Microsoft/CMake/Ninja/ninja.exe -v cmTC_c616e
        [1/2] D:\\VSC\\produit\\VC\\Tools\\MSVC\\14.44.35207\\bin\\Hostx64\\x64\\cl.exe  /nologo   /nologo /DWIN32 /D_WINDOWS /utf-8 /MP   /MDd /Z7 /Ob0 /Od /RTC1 /showIncludes /FoCMakeFiles\\cmTC_c616e.dir\\testCCompiler.c.obj /FdCMakeFiles\\cmTC_c616e.dir\\ /FS -c D:\\C++\\cpp3D\\vcpkg_installed\\x64-windows\\vcpkg\\blds\\glad\\x64-windows-dbg\\CMakeFiles\\CMakeScratch\\TryCompile-dfbzjg\\testCCompiler.c
        [2/2] C:\\WINDOWS\\system32\\cmd.exe /C "cd . && C:\\Users\\kilia\\AppData\\Local\\vcpkg\\downloads\\tools\\cmake-3.30.1-windows\\cmake-3.30.1-windows-i386\\bin\\cmake.exe -E vs_link_exe --intdir=CMakeFiles\\cmTC_c616e.dir --rc=rc --mt=CMAKE_MT-NOTFOUND --manifests  -- D:\\VSC\\produit\\VC\\Tools\\MSVC\\14.44.35207\\bin\\Hostx64\\x64\\link.exe /nologo CMakeFiles\\cmTC_c616e.dir\\testCCompiler.c.obj  /out:cmTC_c616e.exe /implib:cmTC_c616e.lib /pdb:cmTC_c616e.pdb /version:0.0 /machine:x64  /nologo    /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib && cd ."
        FAILED: cmTC_c616e.exe 
        C:\\WINDOWS\\system32\\cmd.exe /C "cd . && C:\\Users\\kilia\\AppData\\Local\\vcpkg\\downloads\\tools\\cmake-3.30.1-windows\\cmake-3.30.1-windows-i386\\bin\\cmake.exe -E vs_link_exe --intdir=CMakeFiles\\cmTC_c616e.dir --rc=rc --mt=CMAKE_MT-NOTFOUND --manifests  -- D:\\VSC\\produit\\VC\\Tools\\MSVC\\14.44.35207\\bin\\Hostx64\\x64\\link.exe /nologo CMakeFiles\\cmTC_c616e.dir\\testCCompiler.c.obj  /out:cmTC_c616e.exe /implib:cmTC_c616e.lib /pdb:cmTC_c616e.pdb /version:0.0 /machine:x64  /nologo    /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib && cd ."
        RC Pass 1: command "rc /fo CMakeFiles\\cmTC_c616e.dir/manifest.res CMakeFiles\\cmTC_c616e.dir/manifest.rc" failed (exit code 0) with the following output:
        no such file or directory
        ninja: build stopped: subcommand failed.
        
      exitCode: 1
...
```
</details>

<details><summary>D:\C++\cpp3D\vcpkg_installed\x64-windows\vcpkg\blds\glad\config-x64-windows-rel-CMakeConfigureLog.yaml.log</summary>

```

---
events:
  -
    kind: "message-v1"
    backtrace:
      - "C:/Users/kilia/AppData/Local/vcpkg/downloads/tools/cmake-3.30.1-windows/cmake-3.30.1-windows-i386/share/cmake-3.30/Modules/CMakeDetermineSystem.cmake:205 (message)"
      - "CMakeLists.txt:22 (project)"
    message: |
      The system is: Windows - 10.0.26200 - AMD64
  -
    kind: "message-v1"
    backtrace:
      - "C:/Users/kilia/AppData/Local/vcpkg/downloads/tools/cmake-3.30.1-windows/cmake-3.30.1-windows-i386/share/cmake-3.30/Modules/CMakeDetermineCompilerId.cmake:17 (message)"
      - "C:/Users/kilia/AppData/Local/vcpkg/downloads/tools/cmake-3.30.1-windows/cmake-3.30.1-windows-i386/share/cmake-3.30/Modules/CMakeDetermineCompilerId.cmake:64 (__determine_compiler_id_test)"
      - "C:/Users/kilia/AppData/Local/vcpkg/downloads/tools/cmake-3.30.1-windows/cmake-3.30.1-windows-i386/share/cmake-3.30/Modules/CMakeDetermineCCompiler.cmake:123 (CMAKE_DETERMINE_COMPILER_ID)"
      - "CMakeLists.txt:22 (project)"
    message: |
      Compiling the C compiler identification source file "CMakeCCompilerId.c" failed.
      Compiler: D:/VSC/produit/VC/Tools/MSVC/14.44.35207/bin/Hostx64/x64/cl.exe 
      Build flags: /nologo;/DWIN32;/D_WINDOWS;/utf-8;/MP
      Id flags:  
      
      The output was:
      2
      CMakeCCompilerId.c
      LINK : fatal error LNK1104: impossible d'ouvrir le fichier 'kernel32.lib'
      
      
  -
    kind: "message-v1"
    backtrace:
      - "C:/Users/kilia/AppData/Local/vcpkg/downloads/tools/cmake-3.30.1-windows/cmake-3.30.1-windows-i386/share/cmake-3.30/Modules/CMakeDetermineCompilerId.cmake:17 (message)"
      - "C:/Users/kilia/AppData/Local/vcpkg/downloads/tools/cmake-3.30.1-windows/cmake-3.30.1-windows-i386/share/cmake-3.30/Modules/CMakeDetermineCompilerId.cmake:64 (__determine_compiler_id_test)"
      - "C:/Users/kilia/AppData/Local/vcpkg/downloads/tools/cmake-3.30.1-windows/cmake-3.30.1-windows-i386/share/cmake-3.30/Modules/CMakeDetermineCCompiler.cmake:123 (CMAKE_DETERMINE_COMPILER_ID)"
      - "CMakeLists.txt:22 (project)"
    message: |
      Compiling the C compiler identification source file "CMakeCCompilerId.c" succeeded.
      Compiler: D:/VSC/produit/VC/Tools/MSVC/14.44.35207/bin/Hostx64/x64/cl.exe 
      Build flags: /nologo;/DWIN32;/D_WINDOWS;/utf-8;/MP
      Id flags: -c 
      
      The output was:
      0
      CMakeCCompilerId.c
      
      
      Compilation of the C compiler identification source "CMakeCCompilerId.c" produced "CMakeCCompilerId.obj"
      
      The C compiler identification is MSVC, found in:
        D:/C++/cpp3D/vcpkg_installed/x64-windows/vcpkg/blds/glad/x64-windows-rel/CMakeFiles/3.30.1/CompilerIdC/CMakeCCompilerId.obj
      
  -
    kind: "message-v1"
    backtrace:
      - "C:/Users/kilia/AppData/Local/vcpkg/downloads/tools/cmake-3.30.1-windows/cmake-3.30.1-windows-i386/share/cmake-3.30/Modules/CMakeDetermineCompilerId.cmake:1243 (message)"
      - "C:/Users/kilia/AppData/Local/vcpkg/downloads/tools/cmake-3.30.1-windows/cmake-3.30.1-windows-i386/share/cmake-3.30/Modules/CMakeDetermineCompilerId.cmake:250 (CMAKE_DETERMINE_MSVC_SHOWINCLUDES_PREFIX)"
      - "C:/Users/kilia/AppData/Local/vcpkg/downloads/tools/cmake-3.30.1-windows/cmake-3.30.1-windows-i386/share/cmake-3.30/Modules/CMakeDetermineCCompiler.cmake:123 (CMAKE_DETERMINE_COMPILER_ID)"
      - "CMakeLists.txt:22 (project)"
    message: |
      Detecting C compiler /showIncludes prefix:
        main.c
        Remarque : inclusion du fichier :  D:\\C++\\cpp3D\\vcpkg_installed\\x64-windows\\vcpkg\\blds\\glad\\x64-windows-rel\\CMakeFiles\\ShowIncludes\\foo.h
        
      Found prefix "Remarque : inclusion du fichier :  "
  -
    kind: "try_compile-v1"
    backtrace:
      - "C:/Users/kilia/AppData/Local/vcpkg/downloads/tools/cmake-3.30.1-windows/cmake-3.30.1-windows-i386/share/cmake-3.30/Modules/CMakeDetermineCompilerABI.cmake:74 (try_compile)"
      - "C:/Users/kilia/AppData/Local/vcpkg/downloads/tools/cmake-3.30.1-windows/cmake-3.30.1-windows-i386/share/cmake-3.30/Modules/CMakeTestCCompiler.cmake:26 (CMAKE_DETERMINE_COMPILER_ABI)"
      - "CMakeLists.txt:22 (project)"
    checks:
      - "Detecting C compiler ABI info"
    directories:
      source: "D:/C++/cpp3D/vcpkg_installed/x64-windows/vcpkg/blds/glad/x64-windows-rel/CMakeFiles/CMakeScratch/TryCompile-atxef8"
      binary: "D:/C++/cpp3D/vcpkg_installed/x64-windows/vcpkg/blds/glad/x64-windows-rel/CMakeFiles/CMakeScratch/TryCompile-atxef8"
    cmakeVariables:
      CMAKE_C_FLAGS: " /nologo /DWIN32 /D_WINDOWS /utf-8 /MP "
      CMAKE_MSVC_DEBUG_INFORMATION_FORMAT: ""
      CMAKE_MSVC_RUNTIME_LIBRARY: "MultiThreaded$<$<CONFIG:Debug>:Debug>$<$<STREQUAL:dynamic,dynamic>:DLL>"
      VCPKG_CHAINLOAD_TOOLCHAIN_FILE: "D:/VSC/produit/VC/vcpkg/scripts/toolchains/windows.cmake"
      VCPKG_CRT_LINKAGE: "dynamic"
      VCPKG_CXX_FLAGS: ""
      VCPKG_CXX_FLAGS_DEBUG: ""
      VCPKG_CXX_FLAGS_RELEASE: ""
      VCPKG_C_FLAGS: ""
      VCPKG_C_FLAGS_DEBUG: ""
      VCPKG_C_FLAGS_RELEASE: ""
      VCPKG_INSTALLED_DIR: "D:/C++/cpp3D/vcpkg_installed/x64-windows"
      VCPKG_LINKER_FLAGS: ""
      VCPKG_LINKER_FLAGS_DEBUG: ""
      VCPKG_LINKER_FLAGS_RELEASE: ""
      VCPKG_PLATFORM_TOOLSET: "v143"
      VCPKG_PREFER_SYSTEM_LIBS: "OFF"
      VCPKG_SET_CHARSET_FLAG: "ON"
      VCPKG_TARGET_ARCHITECTURE: "x64"
      VCPKG_TARGET_TRIPLET: "x64-windows"
      Z_VCPKG_ROOT_DIR: "D:/VSC/produit/VC/vcpkg"
    buildResult:
      variable: "CMAKE_C_ABI_COMPILED"
      cached: true
      stdout: |
        Change Dir: 'D:/C++/cpp3D/vcpkg_installed/x64-windows/vcpkg/blds/glad/x64-windows-rel/CMakeFiles/CMakeScratch/TryCompile-atxef8'
        
        Run Build Command(s): D:/VSC/produit/Common7/IDE/CommonExtensions/Microsoft/CMake/Ninja/ninja.exe -v cmTC_7fcb4
        [1/2] D:\\VSC\\produit\\VC\\Tools\\MSVC\\14.44.35207\\bin\\Hostx64\\x64\\cl.exe  /nologo   /nologo /DWIN32 /D_WINDOWS /utf-8 /MP   /MDd /Z7 /Ob0 /Od /RTC1 /showIncludes /FoCMakeFiles\\cmTC_7fcb4.dir\\CMakeCCompilerABI.c.obj /FdCMakeFiles\\cmTC_7fcb4.dir\\ /FS -c C:\\Users\\kilia\\AppData\\Local\\vcpkg\\downloads\\tools\\cmake-3.30.1-windows\\cmake-3.30.1-windows-i386\\share\\cmake-3.30\\Modules\\CMakeCCompilerABI.c
        [2/2] C:\\WINDOWS\\system32\\cmd.exe /C "cd . && C:\\Users\\kilia\\AppData\\Local\\vcpkg\\downloads\\tools\\cmake-3.30.1-windows\\cmake-3.30.1-windows-i386\\bin\\cmake.exe -E vs_link_exe --intdir=CMakeFiles\\cmTC_7fcb4.dir --rc=rc --mt=CMAKE_MT-NOTFOUND --manifests  -- D:\\VSC\\produit\\VC\\Tools\\MSVC\\14.44.35207\\bin\\Hostx64\\x64\\link.exe /nologo CMakeFiles\\cmTC_7fcb4.dir\\CMakeCCompilerABI.c.obj  /out:cmTC_7fcb4.exe /implib:cmTC_7fcb4.lib /pdb:cmTC_7fcb4.pdb /version:0.0 /machine:x64  /nologo    /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib && cd ."
        FAILED: cmTC_7fcb4.exe 
        C:\\WINDOWS\\system32\\cmd.exe /C "cd . && C:\\Users\\kilia\\AppData\\Local\\vcpkg\\downloads\\tools\\cmake-3.30.1-windows\\cmake-3.30.1-windows-i386\\bin\\cmake.exe -E vs_link_exe --intdir=CMakeFiles\\cmTC_7fcb4.dir --rc=rc --mt=CMAKE_MT-NOTFOUND --manifests  -- D:\\VSC\\produit\\VC\\Tools\\MSVC\\14.44.35207\\bin\\Hostx64\\x64\\link.exe /nologo CMakeFiles\\cmTC_7fcb4.dir\\CMakeCCompilerABI.c.obj  /out:cmTC_7fcb4.exe /implib:cmTC_7fcb4.lib /pdb:cmTC_7fcb4.pdb /version:0.0 /machine:x64  /nologo    /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib && cd ."
        RC Pass 1: command "rc /fo CMakeFiles\\cmTC_7fcb4.dir/manifest.res CMakeFiles\\cmTC_7fcb4.dir/manifest.rc" failed (exit code 0) with the following output:
        no such file or directory
        ninja: build stopped: subcommand failed.
        
      exitCode: 1
  -
    kind: "try_compile-v1"
    backtrace:
      - "C:/Users/kilia/AppData/Local/vcpkg/downloads/tools/cmake-3.30.1-windows/cmake-3.30.1-windows-i386/share/cmake-3.30/Modules/CMakeTestCCompiler.cmake:56 (try_compile)"
      - "CMakeLists.txt:22 (project)"
    checks:
      - "Check for working C compiler: D:/VSC/produit/VC/Tools/MSVC/14.44.35207/bin/Hostx64/x64/cl.exe"
    directories:
      source: "D:/C++/cpp3D/vcpkg_installed/x64-windows/vcpkg/blds/glad/x64-windows-rel/CMakeFiles/CMakeScratch/TryCompile-pm892a"
      binary: "D:/C++/cpp3D/vcpkg_installed/x64-windows/vcpkg/blds/glad/x64-windows-rel/CMakeFiles/CMakeScratch/TryCompile-pm892a"
    cmakeVariables:
      CMAKE_C_FLAGS: " /nologo /DWIN32 /D_WINDOWS /utf-8 /MP "
      CMAKE_MSVC_DEBUG_INFORMATION_FORMAT: ""
      CMAKE_MSVC_RUNTIME_LIBRARY: "MultiThreaded$<$<CONFIG:Debug>:Debug>$<$<STREQUAL:dynamic,dynamic>:DLL>"
      VCPKG_CHAINLOAD_TOOLCHAIN_FILE: "D:/VSC/produit/VC/vcpkg/scripts/toolchains/windows.cmake"
      VCPKG_CRT_LINKAGE: "dynamic"
      VCPKG_CXX_FLAGS: ""
      VCPKG_CXX_FLAGS_DEBUG: ""
      VCPKG_CXX_FLAGS_RELEASE: ""
      VCPKG_C_FLAGS: ""
      VCPKG_C_FLAGS_DEBUG: ""
      VCPKG_C_FLAGS_RELEASE: ""
      VCPKG_INSTALLED_DIR: "D:/C++/cpp3D/vcpkg_installed/x64-windows"
      VCPKG_LINKER_FLAGS: ""
      VCPKG_LINKER_FLAGS_DEBUG: ""
      VCPKG_LINKER_FLAGS_RELEASE: ""
      VCPKG_PLATFORM_TOOLSET: "v143"
      VCPKG_PREFER_SYSTEM_LIBS: "OFF"
      VCPKG_SET_CHARSET_FLAG: "ON"
      VCPKG_TARGET_ARCHITECTURE: "x64"
      VCPKG_TARGET_TRIPLET: "x64-windows"
      Z_VCPKG_ROOT_DIR: "D:/VSC/produit/VC/vcpkg"
    buildResult:
      variable: "CMAKE_C_COMPILER_WORKS"
      cached: true
      stdout: |
        Change Dir: 'D:/C++/cpp3D/vcpkg_installed/x64-windows/vcpkg/blds/glad/x64-windows-rel/CMakeFiles/CMakeScratch/TryCompile-pm892a'
        
        Run Build Command(s): D:/VSC/produit/Common7/IDE/CommonExtensions/Microsoft/CMake/Ninja/ninja.exe -v cmTC_0bae8
        [1/2] D:\\VSC\\produit\\VC\\Tools\\MSVC\\14.44.35207\\bin\\Hostx64\\x64\\cl.exe  /nologo   /nologo /DWIN32 /D_WINDOWS /utf-8 /MP   /MDd /Z7 /Ob0 /Od /RTC1 /showIncludes /FoCMakeFiles\\cmTC_0bae8.dir\\testCCompiler.c.obj /FdCMakeFiles\\cmTC_0bae8.dir\\ /FS -c D:\\C++\\cpp3D\\vcpkg_installed\\x64-windows\\vcpkg\\blds\\glad\\x64-windows-rel\\CMakeFiles\\CMakeScratch\\TryCompile-pm892a\\testCCompiler.c
        [2/2] C:\\WINDOWS\\system32\\cmd.exe /C "cd . && C:\\Users\\kilia\\AppData\\Local\\vcpkg\\downloads\\tools\\cmake-3.30.1-windows\\cmake-3.30.1-windows-i386\\bin\\cmake.exe -E vs_link_exe --intdir=CMakeFiles\\cmTC_0bae8.dir --rc=rc --mt=CMAKE_MT-NOTFOUND --manifests  -- D:\\VSC\\produit\\VC\\Tools\\MSVC\\14.44.35207\\bin\\Hostx64\\x64\\link.exe /nologo CMakeFiles\\cmTC_0bae8.dir\\testCCompiler.c.obj  /out:cmTC_0bae8.exe /implib:cmTC_0bae8.lib /pdb:cmTC_0bae8.pdb /version:0.0 /machine:x64  /nologo    /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib && cd ."
        FAILED: cmTC_0bae8.exe 
        C:\\WINDOWS\\system32\\cmd.exe /C "cd . && C:\\Users\\kilia\\AppData\\Local\\vcpkg\\downloads\\tools\\cmake-3.30.1-windows\\cmake-3.30.1-windows-i386\\bin\\cmake.exe -E vs_link_exe --intdir=CMakeFiles\\cmTC_0bae8.dir --rc=rc --mt=CMAKE_MT-NOTFOUND --manifests  -- D:\\VSC\\produit\\VC\\Tools\\MSVC\\14.44.35207\\bin\\Hostx64\\x64\\link.exe /nologo CMakeFiles\\cmTC_0bae8.dir\\testCCompiler.c.obj  /out:cmTC_0bae8.exe /implib:cmTC_0bae8.lib /pdb:cmTC_0bae8.pdb /version:0.0 /machine:x64  /nologo    /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib && cd ."
        RC Pass 1: command "rc /fo CMakeFiles\\cmTC_0bae8.dir/manifest.res CMakeFiles\\cmTC_0bae8.dir/manifest.rc" failed (exit code 0) with the following output:
        no such file or directory
        ninja: build stopped: subcommand failed.
        
      exitCode: 1
...
```
</details>

<details><summary>D:\C++\cpp3D\vcpkg_installed\x64-windows\vcpkg\blds\glad\config-x64-windows-out.log</summary>

```
[1/2] "C:/Users/kilia/AppData/Local/vcpkg/downloads/tools/cmake-3.30.1-windows/cmake-3.30.1-windows-i386/bin/cmake.exe" -E chdir ".." "C:/Users/kilia/AppData/Local/vcpkg/downloads/tools/cmake-3.30.1-windows/cmake-3.30.1-windows-i386/bin/cmake.exe" "D:/C++/cpp3D/vcpkg_installed/x64-windows/vcpkg/blds/glad/src/708967e402-274d415499.clean" "-G" "Ninja" "-DCMAKE_BUILD_TYPE=Release" "-DCMAKE_INSTALL_PREFIX=D:/C++/cpp3D/vcpkg_installed/x64-windows/vcpkg/pkgs/glad_x64-windows" "-DFETCHCONTENT_FULLY_DISCONNECTED=ON" "-DGLAD_EXPORT=OFF" "-DGLAD_INSTALL=ON" "-DGLAD_REPRODUCIBLE=ON" "-DGLAD_SPEC=gl" "-DGLAD_API=" "-DGLAD_PROFILE=compatibility" "-DPYTHON_EXECUTABLE=C:/Users/kilia/AppData/Local/vcpkg/downloads/tools/python/python-3.12.7-x64-1/python.exe" "-DGLAD_ALL_EXTENSIONS=OFF" "-DGLAD_NO_LOADER=OFF" "-DCMAKE_MAKE_PROGRAM=D:/VSC/produit/Common7/IDE/CommonExtensions/Microsoft/CMake/Ninja/ninja.exe" "-DBUILD_SHARED_LIBS=OFF" "-DVCPKG_CHAINLOAD_TOOLCHAIN_FILE=D:/VSC/produit/VC/vcpkg/scripts/toolchains/windows.cmake" "-DVCPKG_TARGET_TRIPLET=x64-windows" "-DVCPKG_SET_CHARSET_FLAG=ON" "-DVCPKG_PLATFORM_TOOLSET=v143" "-DCMAKE_EXPORT_NO_PACKAGE_REGISTRY=ON" "-DCMAKE_FIND_PACKAGE_NO_PACKAGE_REGISTRY=ON" "-DCMAKE_FIND_PACKAGE_NO_SYSTEM_PACKAGE_REGISTRY=ON" "-DCMAKE_INSTALL_SYSTEM_RUNTIME_LIBS_SKIP=TRUE" "-DCMAKE_VERBOSE_MAKEFILE=ON" "-DVCPKG_APPLOCAL_DEPS=OFF" "-DCMAKE_TOOLCHAIN_FILE=D:/VSC/produit/VC/vcpkg/scripts/buildsystems/vcpkg.cmake" "-DCMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION=ON" "-DVCPKG_CXX_FLAGS=" "-DVCPKG_CXX_FLAGS_RELEASE=" "-DVCPKG_CXX_FLAGS_DEBUG=" "-DVCPKG_C_FLAGS=" "-DVCPKG_C_FLAGS_RELEASE=" "-DVCPKG_C_FLAGS_DEBUG=" "-DVCPKG_CRT_LINKAGE=dynamic" "-DVCPKG_LINKER_FLAGS=" "-DVCPKG_LINKER_FLAGS_RELEASE=" "-DVCPKG_LINKER_FLAGS_DEBUG=" "-DVCPKG_TARGET_ARCHITECTURE=x64" "-DCMAKE_INSTALL_LIBDIR:STRING=lib" "-DCMAKE_INSTALL_BINDIR:STRING=bin" "-D_VCPKG_ROOT_DIR=D:/VSC/produit/VC/vcpkg/" "-D_VCPKG_INSTALLED_DIR=D:/C++/cpp3D/vcpkg_installed/x64-windows/" "-DVCPKG_MANIFEST_INSTALL=OFF" "-DGLAD_GENERATOR="c""
FAILED: ../CMakeCache.txt 
"C:/Users/kilia/AppData/Local/vcpkg/downloads/tools/cmake-3.30.1-windows/cmake-3.30.1-windows-i386/bin/cmake.exe" -E chdir ".." "C:/Users/kilia/AppData/Local/vcpkg/downloads/tools/cmake-3.30.1-windows/cmake-3.30.1-windows-i386/bin/cmake.exe" "D:/C++/cpp3D/vcpkg_installed/x64-windows/vcpkg/blds/glad/src/708967e402-274d415499.clean" "-G" "Ninja" "-DCMAKE_BUILD_TYPE=Release" "-DCMAKE_INSTALL_PREFIX=D:/C++/cpp3D/vcpkg_installed/x64-windows/vcpkg/pkgs/glad_x64-windows" "-DFETCHCONTENT_FULLY_DISCONNECTED=ON" "-DGLAD_EXPORT=OFF" "-DGLAD_INSTALL=ON" "-DGLAD_REPRODUCIBLE=ON" "-DGLAD_SPEC=gl" "-DGLAD_API=" "-DGLAD_PROFILE=compatibility" "-DPYTHON_EXECUTABLE=C:/Users/kilia/AppData/Local/vcpkg/downloads/tools/python/python-3.12.7-x64-1/python.exe" "-DGLAD_ALL_EXTENSIONS=OFF" "-DGLAD_NO_LOADER=OFF" "-DCMAKE_MAKE_PROGRAM=D:/VSC/produit/Common7/IDE/CommonExtensions/Microsoft/CMake/Ninja/ninja.exe" "-DBUILD_SHARED_LIBS=OFF" "-DVCPKG_CHAINLOAD_TOOLCHAIN_FILE=D:/VSC/produit/VC/vcpkg/scripts/toolchains/windows.cmake" "-DVCPKG_TARGET_TRIPLET=x64-windows" "-DVCPKG_SET_CHARSET_FLAG=ON" "-DVCPKG_PLATFORM_TOOLSET=v143" "-DCMAKE_EXPORT_NO_PACKAGE_REGISTRY=ON" "-DCMAKE_FIND_PACKAGE_NO_PACKAGE_REGISTRY=ON" "-DCMAKE_FIND_PACKAGE_NO_SYSTEM_PACKAGE_REGISTRY=ON" "-DCMAKE_INSTALL_SYSTEM_RUNTIME_LIBS_SKIP=TRUE" "-DCMAKE_VERBOSE_MAKEFILE=ON" "-DVCPKG_APPLOCAL_DEPS=OFF" "-DCMAKE_TOOLCHAIN_FILE=D:/VSC/produit/VC/vcpkg/scripts/buildsystems/vcpkg.cmake" "-DCMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION=ON" "-DVCPKG_CXX_FLAGS=" "-DVCPKG_CXX_FLAGS_RELEASE=" "-DVCPKG_CXX_FLAGS_DEBUG=" "-DVCPKG_C_FLAGS=" "-DVCPKG_C_FLAGS_RELEASE=" "-DVCPKG_C_FLAGS_DEBUG=" "-DVCPKG_CRT_LINKAGE=dynamic" "-DVCPKG_LINKER_FLAGS=" "-DVCPKG_LINKER_FLAGS_RELEASE=" "-DVCPKG_LINKER_FLAGS_DEBUG=" "-DVCPKG_TARGET_ARCHITECTURE=x64" "-DCMAKE_INSTALL_LIBDIR:STRING=lib" "-DCMAKE_INSTALL_BINDIR:STRING=bin" "-D_VCPKG_ROOT_DIR=D:/VSC/produit/VC/vcpkg/" "-D_VCPKG_INSTALLED_DIR=D:/C++/cpp3D/vcpkg_installed/x64-windows/" "-DVCPKG_MANIFEST_INSTALL=OFF" "-DGLAD_GENERATOR="c""
CMake Deprecation Warning at CMakeLists.txt:1 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
...
Skipped 22 lines
...
    FAILED: cmTC_0bae8.exe 
    C:\WINDOWS\system32\cmd.exe /C "cd . && C:\Users\kilia\AppData\Local\vcpkg\downloads\tools\cmake-3.30.1-windows\cmake-3.30.1-windows-i386\bin\cmake.exe -E vs_link_exe --intdir=CMakeFiles\cmTC_0bae8.dir --rc=rc --mt=CMAKE_MT-NOTFOUND --manifests  -- D:\VSC\produit\VC\Tools\MSVC\14.44.35207\bin\Hostx64\x64\link.exe /nologo CMakeFiles\cmTC_0bae8.dir\testCCompiler.c.obj  /out:cmTC_0bae8.exe /implib:cmTC_0bae8.lib /pdb:cmTC_0bae8.pdb /version:0.0 /machine:x64  /nologo    /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib && cd ."
    RC Pass 1: command "rc /fo CMakeFiles\cmTC_0bae8.dir/manifest.res CMakeFiles\cmTC_0bae8.dir/manifest.rc" failed (exit code 0) with the following output:
    no such file or directory
    ninja: build stopped: subcommand failed.
    
    

  

  CMake will not be able to correctly generate this project.
Call Stack (most recent call first):
  CMakeLists.txt:22 (project)


-- Configuring incomplete, errors occurred!
[2/2] "C:/Users/kilia/AppData/Local/vcpkg/downloads/tools/cmake-3.30.1-windows/cmake-3.30.1-windows-i386/bin/cmake.exe" -E chdir "../../x64-windows-dbg" "C:/Users/kilia/AppData/Local/vcpkg/downloads/tools/cmake-3.30.1-windows/cmake-3.30.1-windows-i386/bin/cmake.exe" "D:/C++/cpp3D/vcpkg_installed/x64-windows/vcpkg/blds/glad/src/708967e402-274d415499.clean" "-G" "Ninja" "-DCMAKE_BUILD_TYPE=Debug" "-DCMAKE_INSTALL_PREFIX=D:/C++/cpp3D/vcpkg_installed/x64-windows/vcpkg/pkgs/glad_x64-windows/debug" "-DFETCHCONTENT_FULLY_DISCONNECTED=ON" "-DGLAD_EXPORT=OFF" "-DGLAD_INSTALL=ON" "-DGLAD_REPRODUCIBLE=ON" "-DGLAD_SPEC=gl" "-DGLAD_API=" "-DGLAD_PROFILE=compatibility" "-DPYTHON_EXECUTABLE=C:/Users/kilia/AppData/Local/vcpkg/downloads/tools/python/python-3.12.7-x64-1/python.exe" "-DGLAD_ALL_EXTENSIONS=OFF" "-DGLAD_NO_LOADER=OFF" "-DCMAKE_MAKE_PROGRAM=D:/VSC/produit/Common7/IDE/CommonExtensions/Microsoft/CMake/Ninja/ninja.exe" "-DBUILD_SHARED_LIBS=OFF" "-DVCPKG_CHAINLOAD_TOOLCHAIN_FILE=D:/VSC/produit/VC/vcpkg/scripts/toolchains/windows.cmake" "-DVCPKG_TARGET_TRIPLET=x64-windows" "-DVCPKG_SET_CHARSET_FLAG=ON" "-DVCPKG_PLATFORM_TOOLSET=v143" "-DCMAKE_EXPORT_NO_PACKAGE_REGISTRY=ON" "-DCMAKE_FIND_PACKAGE_NO_PACKAGE_REGISTRY=ON" "-DCMAKE_FIND_PACKAGE_NO_SYSTEM_PACKAGE_REGISTRY=ON" "-DCMAKE_INSTALL_SYSTEM_RUNTIME_LIBS_SKIP=TRUE" "-DCMAKE_VERBOSE_MAKEFILE=ON" "-DVCPKG_APPLOCAL_DEPS=OFF" "-DCMAKE_TOOLCHAIN_FILE=D:/VSC/produit/VC/vcpkg/scripts/buildsystems/vcpkg.cmake" "-DCMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION=ON" "-DVCPKG_CXX_FLAGS=" "-DVCPKG_CXX_FLAGS_RELEASE=" "-DVCPKG_CXX_FLAGS_DEBUG=" "-DVCPKG_C_FLAGS=" "-DVCPKG_C_FLAGS_RELEASE=" "-DVCPKG_C_FLAGS_DEBUG=" "-DVCPKG_CRT_LINKAGE=dynamic" "-DVCPKG_LINKER_FLAGS=" "-DVCPKG_LINKER_FLAGS_RELEASE=" "-DVCPKG_LINKER_FLAGS_DEBUG=" "-DVCPKG_TARGET_ARCHITECTURE=x64" "-DCMAKE_INSTALL_LIBDIR:STRING=lib" "-DCMAKE_INSTALL_BINDIR:STRING=bin" "-D_VCPKG_ROOT_DIR=D:/VSC/produit/VC/vcpkg/" "-D_VCPKG_INSTALLED_DIR=D:/C++/cpp3D/vcpkg_installed/x64-windows/" "-DVCPKG_MANIFEST_INSTALL=OFF" "-DGLAD_GENERATOR="c-debug""
FAILED: ../../x64-windows-dbg/CMakeCache.txt 
"C:/Users/kilia/AppData/Local/vcpkg/downloads/tools/cmake-3.30.1-windows/cmake-3.30.1-windows-i386/bin/cmake.exe" -E chdir "../../x64-windows-dbg" "C:/Users/kilia/AppData/Local/vcpkg/downloads/tools/cmake-3.30.1-windows/cmake-3.30.1-windows-i386/bin/cmake.exe" "D:/C++/cpp3D/vcpkg_installed/x64-windows/vcpkg/blds/glad/src/708967e402-274d415499.clean" "-G" "Ninja" "-DCMAKE_BUILD_TYPE=Debug" "-DCMAKE_INSTALL_PREFIX=D:/C++/cpp3D/vcpkg_installed/x64-windows/vcpkg/pkgs/glad_x64-windows/debug" "-DFETCHCONTENT_FULLY_DISCONNECTED=ON" "-DGLAD_EXPORT=OFF" "-DGLAD_INSTALL=ON" "-DGLAD_REPRODUCIBLE=ON" "-DGLAD_SPEC=gl" "-DGLAD_API=" "-DGLAD_PROFILE=compatibility" "-DPYTHON_EXECUTABLE=C:/Users/kilia/AppData/Local/vcpkg/downloads/tools/python/python-3.12.7-x64-1/python.exe" "-DGLAD_ALL_EXTENSIONS=OFF" "-DGLAD_NO_LOADER=OFF" "-DCMAKE_MAKE_PROGRAM=D:/VSC/produit/Common7/IDE/CommonExtensions/Microsoft/CMake/Ninja/ninja.exe" "-DBUILD_SHARED_LIBS=OFF" "-DVCPKG_CHAINLOAD_TOOLCHAIN_FILE=D:/VSC/produit/VC/vcpkg/scripts/toolchains/windows.cmake" "-DVCPKG_TARGET_TRIPLET=x64-windows" "-DVCPKG_SET_CHARSET_FLAG=ON" "-DVCPKG_PLATFORM_TOOLSET=v143" "-DCMAKE_EXPORT_NO_PACKAGE_REGISTRY=ON" "-DCMAKE_FIND_PACKAGE_NO_PACKAGE_REGISTRY=ON" "-DCMAKE_FIND_PACKAGE_NO_SYSTEM_PACKAGE_REGISTRY=ON" "-DCMAKE_INSTALL_SYSTEM_RUNTIME_LIBS_SKIP=TRUE" "-DCMAKE_VERBOSE_MAKEFILE=ON" "-DVCPKG_APPLOCAL_DEPS=OFF" "-DCMAKE_TOOLCHAIN_FILE=D:/VSC/produit/VC/vcpkg/scripts/buildsystems/vcpkg.cmake" "-DCMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION=ON" "-DVCPKG_CXX_FLAGS=" "-DVCPKG_CXX_FLAGS_RELEASE=" "-DVCPKG_CXX_FLAGS_DEBUG=" "-DVCPKG_C_FLAGS=" "-DVCPKG_C_FLAGS_RELEASE=" "-DVCPKG_C_FLAGS_DEBUG=" "-DVCPKG_CRT_LINKAGE=dynamic" "-DVCPKG_LINKER_FLAGS=" "-DVCPKG_LINKER_FLAGS_RELEASE=" "-DVCPKG_LINKER_FLAGS_DEBUG=" "-DVCPKG_TARGET_ARCHITECTURE=x64" "-DCMAKE_INSTALL_LIBDIR:STRING=lib" "-DCMAKE_INSTALL_BINDIR:STRING=bin" "-D_VCPKG_ROOT_DIR=D:/VSC/produit/VC/vcpkg/" "-D_VCPKG_INSTALLED_DIR=D:/C++/cpp3D/vcpkg_installed/x64-windows/" "-DVCPKG_MANIFEST_INSTALL=OFF" "-DGLAD_GENERATOR="c-debug""
CMake Deprecation Warning at CMakeLists.txt:1 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.


-- The C compiler identification is MSVC 19.44.35217.0
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - failed
-- Check for working C compiler: D:/VSC/produit/VC/Tools/MSVC/14.44.35207/bin/Hostx64/x64/cl.exe
-- Check for working C compiler: D:/VSC/produit/VC/Tools/MSVC/14.44.35207/bin/Hostx64/x64/cl.exe - broken
CMake Error at C:/Users/kilia/AppData/Local/vcpkg/downloads/tools/cmake-3.30.1-windows/cmake-3.30.1-windows-i386/share/cmake-3.30/Modules/CMakeTestCCompiler.cmake:67 (message):
  The C compiler

    "D:/VSC/produit/VC/Tools/MSVC/14.44.35207/bin/Hostx64/x64/cl.exe"

  is not able to compile a simple test program.

  It fails with the following output:

    Change Dir: 'D:/C++/cpp3D/vcpkg_installed/x64-windows/vcpkg/blds/glad/x64-windows-dbg/CMakeFiles/CMakeScratch/TryCompile-dfbzjg'
    
    Run Build Command(s): D:/VSC/produit/Common7/IDE/CommonExtensions/Microsoft/CMake/Ninja/ninja.exe -v cmTC_c616e
    [1/2] D:\VSC\produit\VC\Tools\MSVC\14.44.35207\bin\Hostx64\x64\cl.exe  /nologo   /nologo /DWIN32 /D_WINDOWS /utf-8 /MP   /MDd /Z7 /Ob0 /Od /RTC1 /showIncludes /FoCMakeFiles\cmTC_c616e.dir\testCCompiler.c.obj /FdCMakeFiles\cmTC_c616e.dir\ /FS -c D:\C++\cpp3D\vcpkg_installed\x64-windows\vcpkg\blds\glad\x64-windows-dbg\CMakeFiles\CMakeScratch\TryCompile-dfbzjg\testCCompiler.c
    [2/2] C:\WINDOWS\system32\cmd.exe /C "cd . && C:\Users\kilia\AppData\Local\vcpkg\downloads\tools\cmake-3.30.1-windows\cmake-3.30.1-windows-i386\bin\cmake.exe -E vs_link_exe --intdir=CMakeFiles\cmTC_c616e.dir --rc=rc --mt=CMAKE_MT-NOTFOUND --manifests  -- D:\VSC\produit\VC\Tools\MSVC\14.44.35207\bin\Hostx64\x64\link.exe /nologo CMakeFiles\cmTC_c616e.dir\testCCompiler.c.obj  /out:cmTC_c616e.exe /implib:cmTC_c616e.lib /pdb:cmTC_c616e.pdb /version:0.0 /machine:x64  /nologo    /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib && cd ."
    FAILED: cmTC_c616e.exe 
    C:\WINDOWS\system32\cmd.exe /C "cd . && C:\Users\kilia\AppData\Local\vcpkg\downloads\tools\cmake-3.30.1-windows\cmake-3.30.1-windows-i386\bin\cmake.exe -E vs_link_exe --intdir=CMakeFiles\cmTC_c616e.dir --rc=rc --mt=CMAKE_MT-NOTFOUND --manifests  -- D:\VSC\produit\VC\Tools\MSVC\14.44.35207\bin\Hostx64\x64\link.exe /nologo CMakeFiles\cmTC_c616e.dir\testCCompiler.c.obj  /out:cmTC_c616e.exe /implib:cmTC_c616e.lib /pdb:cmTC_c616e.pdb /version:0.0 /machine:x64  /nologo    /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib && cd ."
    RC Pass 1: command "rc /fo CMakeFiles\cmTC_c616e.dir/manifest.res CMakeFiles\cmTC_c616e.dir/manifest.rc" failed (exit code 0) with the following output:
    no such file or directory
    ninja: build stopped: subcommand failed.
    
    

  

  CMake will not be able to correctly generate this project.
Call Stack (most recent call first):
  CMakeLists.txt:22 (project)


-- Configuring incomplete, errors occurred!
ninja: build stopped: subcommand failed.
```
</details>

<details><summary>D:\C++\cpp3D\vcpkg_installed\x64-windows\vcpkg\blds\glad\config-x64-windows-rel-CMakeCache.txt.log</summary>

```
# This is the CMakeCache file.
# For build in directory: d:/C++/cpp3D/vcpkg_installed/x64-windows/vcpkg/blds/glad/x64-windows-rel
# It was generated by CMake: C:/Users/kilia/AppData/Local/vcpkg/downloads/tools/cmake-3.30.1-windows/cmake-3.30.1-windows-i386/bin/cmake.exe
# You can edit this file to change values found and used by cmake.
# If you do not want to change any of the values, simply exit the editor.
# If you do want to change a value, simply edit, save, and exit the editor.
# The syntax for the file is as follows:
# KEY:TYPE=VALUE
# KEY is the name of a variable in the cache.
# TYPE is a hint to GUIs for the type of VALUE, DO NOT EDIT TYPE!.
# VALUE is the current value for the KEY.

########################
# EXTERNAL cache entries
########################

//No help, variable specified on the command line.
BUILD_SHARED_LIBS:UNINITIALIZED=OFF

//Path to a program.
CMAKE_AR:FILEPATH=D:/VSC/produit/VC/Tools/MSVC/14.44.35207/bin/Hostx64/x64/lib.exe

//Choose the type of build, options are: None Debug Release RelWithDebInfo
// MinSizeRel ...
CMAKE_BUILD_TYPE:STRING=Release

CMAKE_CROSSCOMPILING:STRING=OFF

CMAKE_CXX_FLAGS:STRING=' /nologo /DWIN32 /D_WINDOWS /utf-8 /GR /EHsc /MP '

CMAKE_CXX_FLAGS_DEBUG:STRING='/MDd /Z7 /Ob0 /Od /RTC1 '

CMAKE_CXX_FLAGS_RELEASE:STRING='/MD /O2 /Oi /Gy /DNDEBUG /Z7 '

//C compiler
CMAKE_C_COMPILER:FILEPATH=D:/VSC/produit/VC/Tools/MSVC/14.44.35207/bin/Hostx64/x64/cl.exe

CMAKE_C_FLAGS:STRING=' /nologo /DWIN32 /D_WINDOWS /utf-8 /MP '

CMAKE_C_FLAGS_DEBUG:STRING='/MDd /Z7 /Ob0 /Od /RTC1 '

//Flags used by the C compiler during MINSIZEREL builds.
CMAKE_C_FLAGS_MINSIZEREL:STRING=/MD /O1 /Ob1 /DNDEBUG

CMAKE_C_FLAGS_RELEASE:STRING='/MD /O2 /Oi /Gy /DNDEBUG /Z7 '

//Flags used by the C compiler during RELWITHDEBINFO builds.
CMAKE_C_FLAGS_RELWITHDEBINFO:STRING=/MD /Zi /O2 /Ob1 /DNDEBUG

//Libraries linked by default with all C applications.
CMAKE_C_STANDARD_LIBRARIES:STRING=kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib

//No help, variable specified on the command line.
CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION:UNINITIALIZED=ON

//Flags used by the linker during all build types.
CMAKE_EXE_LINKER_FLAGS:STRING=/machine:x64

//Flags used by the linker during DEBUG builds.
CMAKE_EXE_LINKER_FLAGS_DEBUG:STRING=/nologo    /debug /INCREMENTAL

//Flags used by the linker during MINSIZEREL builds.
CMAKE_EXE_LINKER_FLAGS_MINSIZEREL:STRING=/INCREMENTAL:NO

CMAKE_EXE_LINKER_FLAGS_RELEASE:STRING='/nologo /DEBUG /INCREMENTAL:NO /OPT:REF /OPT:ICF  '

//Flags used by the linker during RELWITHDEBINFO builds.
CMAKE_EXE_LINKER_FLAGS_RELWITHDEBINFO:STRING=/debug /INCREMENTAL

//Enable/Disable output of compile commands during generation.
CMAKE_EXPORT_COMPILE_COMMANDS:BOOL=

//No help, variable specified on the command line.
CMAKE_EXPORT_NO_PACKAGE_REGISTRY:UNINITIALIZED=ON

//No help, variable specified on the command line.
CMAKE_FIND_PACKAGE_NO_PACKAGE_REGISTRY:UNINITIALIZED=ON

//No help, variable specified on the command line.
CMAKE_FIND_PACKAGE_NO_SYSTEM_PACKAGE_REGISTRY:UNINITIALIZED=ON

//Value Computed by CMake.
CMAKE_FIND_PACKAGE_REDIRECTS_DIR:STATIC=D:/C++/cpp3D/vcpkg_installed/x64-windows/vcpkg/blds/glad/x64-windows-rel/CMakeFiles/pkgRedirects

//No help, variable specified on the command line.
CMAKE_INSTALL_BINDIR:STRING=bin

//No help, variable specified on the command line.
CMAKE_INSTALL_LIBDIR:STRING=lib

//Install path prefix, prepended onto install directories.
CMAKE_INSTALL_PREFIX:PATH=D:/C++/cpp3D/vcpkg_installed/x64-windows/vcpkg/pkgs/glad_x64-windows

//No help, variable specified on the command line.
CMAKE_INSTALL_SYSTEM_RUNTIME_LIBS_SKIP:UNINITIALIZED=TRUE

//Path to a program.
CMAKE_LINKER:FILEPATH=D:/VSC/produit/VC/Tools/MSVC/14.44.35207/bin/Hostx64/x64/link.exe

//No help, variable specified on the command line.
CMAKE_MAKE_PROGRAM:UNINITIALIZED=D:/VSC/produit/Common7/IDE/CommonExtensions/Microsoft/CMake/Ninja/ninja.exe

...
Skipped 225 lines
...
VCPKG_SET_CHARSET_FLAG:UNINITIALIZED=ON

//No help, variable specified on the command line.
VCPKG_TARGET_ARCHITECTURE:UNINITIALIZED=x64

//Vcpkg target triplet (ex. x86-windows)
VCPKG_TARGET_TRIPLET:STRING=x64-windows

//Trace calls to find_package()
VCPKG_TRACE_FIND_PACKAGE:BOOL=OFF

//Enables messages from the VCPKG toolchain for debugging purposes.
VCPKG_VERBOSE:BOOL=OFF

//(experimental) Automatically copy dependencies into the install
// target directory for executables. Requires CMake 3.14.
X_VCPKG_APPLOCAL_DEPS_INSTALL:BOOL=OFF

//(experimental) Add USES_TERMINAL to VCPKG_APPLOCAL_DEPS to force
// serialization.
X_VCPKG_APPLOCAL_DEPS_SERIALIZED:BOOL=OFF

//The directory which contains the installed libraries for each
// triplet
_VCPKG_INSTALLED_DIR:PATH=D:/C++/cpp3D/vcpkg_installed/x64-windows

//No help, variable specified on the command line.
_VCPKG_ROOT_DIR:UNINITIALIZED=D:/VSC/produit/VC/vcpkg/


########################
# INTERNAL cache entries
########################

//ADVANCED property for variable: CMAKE_AR
CMAKE_AR-ADVANCED:INTERNAL=1
//This is the directory where this CMakeCache.txt was created
CMAKE_CACHEFILE_DIR:INTERNAL=d:/C++/cpp3D/vcpkg_installed/x64-windows/vcpkg/blds/glad/x64-windows-rel
//Major version of cmake used to create the current loaded cache
CMAKE_CACHE_MAJOR_VERSION:INTERNAL=3
//Minor version of cmake used to create the current loaded cache
CMAKE_CACHE_MINOR_VERSION:INTERNAL=30
//Patch version of cmake used to create the current loaded cache
CMAKE_CACHE_PATCH_VERSION:INTERNAL=1
//Path to CMake executable.
CMAKE_COMMAND:INTERNAL=C:/Users/kilia/AppData/Local/vcpkg/downloads/tools/cmake-3.30.1-windows/cmake-3.30.1-windows-i386/bin/cmake.exe
//Path to cpack program executable.
CMAKE_CPACK_COMMAND:INTERNAL=C:/Users/kilia/AppData/Local/vcpkg/downloads/tools/cmake-3.30.1-windows/cmake-3.30.1-windows-i386/bin/cpack.exe
//Path to ctest program executable.
CMAKE_CTEST_COMMAND:INTERNAL=C:/Users/kilia/AppData/Local/vcpkg/downloads/tools/cmake-3.30.1-windows/cmake-3.30.1-windows-i386/bin/ctest.exe
//ADVANCED property for variable: CMAKE_C_COMPILER
CMAKE_C_COMPILER-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_C_FLAGS
CMAKE_C_FLAGS-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_C_FLAGS_DEBUG
CMAKE_C_FLAGS_DEBUG-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_C_FLAGS_MINSIZEREL
CMAKE_C_FLAGS_MINSIZEREL-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_C_FLAGS_RELEASE
CMAKE_C_FLAGS_RELEASE-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_C_FLAGS_RELWITHDEBINFO
CMAKE_C_FLAGS_RELWITHDEBINFO-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_C_STANDARD_LIBRARIES
CMAKE_C_STANDARD_LIBRARIES-ADVANCED:INTERNAL=1
//Path to cache edit program executable.
CMAKE_EDIT_COMMAND:INTERNAL=C:/Users/kilia/AppData/Local/vcpkg/downloads/tools/cmake-3.30.1-windows/cmake-3.30.1-windows-i386/bin/cmake-gui.exe
//Executable file format
CMAKE_EXECUTABLE_FORMAT:INTERNAL=Unknown
//ADVANCED property for variable: CMAKE_EXE_LINKER_FLAGS
CMAKE_EXE_LINKER_FLAGS-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_EXE_LINKER_FLAGS_DEBUG
CMAKE_EXE_LINKER_FLAGS_DEBUG-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_EXE_LINKER_FLAGS_MINSIZEREL
CMAKE_EXE_LINKER_FLAGS_MINSIZEREL-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_EXE_LINKER_FLAGS_RELEASE
CMAKE_EXE_LINKER_FLAGS_RELEASE-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_EXE_LINKER_FLAGS_RELWITHDEBINFO
CMAKE_EXE_LINKER_FLAGS_RELWITHDEBINFO-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_EXPORT_COMPILE_COMMANDS
CMAKE_EXPORT_COMPILE_COMMANDS-ADVANCED:INTERNAL=1
//Name of external makefile project generator.
CMAKE_EXTRA_GENERATOR:INTERNAL=
//Name of generator.
CMAKE_GENERATOR:INTERNAL=Ninja
//Generator instance identifier.
CMAKE_GENERATOR_INSTANCE:INTERNAL=
//Name of generator platform.
CMAKE_GENERATOR_PLATFORM:INTERNAL=
//Name of generator toolset.
CMAKE_GENERATOR_TOOLSET:INTERNAL=
//Source directory with the top level CMakeLists.txt file for this
// project
CMAKE_HOME_DIRECTORY:INTERNAL=D:/C++/cpp3D/vcpkg_installed/x64-windows/vcpkg/blds/glad/src/708967e402-274d415499.clean
//ADVANCED property for variable: CMAKE_LINKER
CMAKE_LINKER-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_MODULE_LINKER_FLAGS
CMAKE_MODULE_LINKER_FLAGS-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_MODULE_LINKER_FLAGS_DEBUG
CMAKE_MODULE_LINKER_FLAGS_DEBUG-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_MODULE_LINKER_FLAGS_MINSIZEREL
CMAKE_MODULE_LINKER_FLAGS_MINSIZEREL-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_MODULE_LINKER_FLAGS_RELEASE
CMAKE_MODULE_LINKER_FLAGS_RELEASE-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_MODULE_LINKER_FLAGS_RELWITHDEBINFO
CMAKE_MODULE_LINKER_FLAGS_RELWITHDEBINFO-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_MT
CMAKE_MT-ADVANCED:INTERNAL=1
//number of local generators
CMAKE_NUMBER_OF_MAKEFILES:INTERNAL=1
//Platform information initialized
CMAKE_PLATFORM_INFO_INITIALIZED:INTERNAL=1
//noop for ranlib
CMAKE_RANLIB:INTERNAL=:
//ADVANCED property for variable: CMAKE_RC_COMPILER
CMAKE_RC_COMPILER-ADVANCED:INTERNAL=1
CMAKE_RC_COMPILER_WORKS:INTERNAL=1
//ADVANCED property for variable: CMAKE_RC_FLAGS
CMAKE_RC_FLAGS-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_RC_FLAGS_DEBUG
CMAKE_RC_FLAGS_DEBUG-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_RC_FLAGS_MINSIZEREL
CMAKE_RC_FLAGS_MINSIZEREL-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_RC_FLAGS_RELEASE
CMAKE_RC_FLAGS_RELEASE-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_RC_FLAGS_RELWITHDEBINFO
CMAKE_RC_FLAGS_RELWITHDEBINFO-ADVANCED:INTERNAL=1
//Path to CMake installation.
CMAKE_ROOT:INTERNAL=C:/Users/kilia/AppData/Local/vcpkg/downloads/tools/cmake-3.30.1-windows/cmake-3.30.1-windows-i386/share/cmake-3.30
//ADVANCED property for variable: CMAKE_SHARED_LINKER_FLAGS
CMAKE_SHARED_LINKER_FLAGS-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_SHARED_LINKER_FLAGS_DEBUG
CMAKE_SHARED_LINKER_FLAGS_DEBUG-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_SHARED_LINKER_FLAGS_MINSIZEREL
CMAKE_SHARED_LINKER_FLAGS_MINSIZEREL-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_SHARED_LINKER_FLAGS_RELEASE
CMAKE_SHARED_LINKER_FLAGS_RELEASE-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_SHARED_LINKER_FLAGS_RELWITHDEBINFO
CMAKE_SHARED_LINKER_FLAGS_RELWITHDEBINFO-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_SKIP_INSTALL_RPATH
CMAKE_SKIP_INSTALL_RPATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_SKIP_RPATH
CMAKE_SKIP_RPATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_STATIC_LINKER_FLAGS
CMAKE_STATIC_LINKER_FLAGS-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_STATIC_LINKER_FLAGS_DEBUG
CMAKE_STATIC_LINKER_FLAGS_DEBUG-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_STATIC_LINKER_FLAGS_MINSIZEREL
CMAKE_STATIC_LINKER_FLAGS_MINSIZEREL-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_STATIC_LINKER_FLAGS_RELEASE
CMAKE_STATIC_LINKER_FLAGS_RELEASE-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_STATIC_LINKER_FLAGS_RELWITHDEBINFO
CMAKE_STATIC_LINKER_FLAGS_RELWITHDEBINFO-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_TOOLCHAIN_FILE
CMAKE_TOOLCHAIN_FILE-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_VERBOSE_MAKEFILE
CMAKE_VERBOSE_MAKEFILE-ADVANCED:INTERNAL=1
//Install the dependencies listed in your manifest:
//\n    If this is off, you will have to manually install your dependencies.
//\n    See https://github.com/microsoft/vcpkg/tree/master/docs/specifications/manifests.md
// for more info.
//\n
VCPKG_MANIFEST_INSTALL:INTERNAL=OFF
//ADVANCED property for variable: VCPKG_VERBOSE
VCPKG_VERBOSE-ADVANCED:INTERNAL=1
//Making sure VCPKG_MANIFEST_MODE doesn't change
Z_VCPKG_CHECK_MANIFEST_MODE:INTERNAL=OFF
//Vcpkg root directory
Z_VCPKG_ROOT_DIR:INTERNAL=D:/VSC/produit/VC/vcpkg

```
</details>

<details><summary>D:\C++\cpp3D\vcpkg_installed\x64-windows\vcpkg\blds\glad\config-x64-windows-dbg-CMakeCache.txt.log</summary>

```
# This is the CMakeCache file.
# For build in directory: d:/C++/cpp3D/vcpkg_installed/x64-windows/vcpkg/blds/glad/x64-windows-dbg
# It was generated by CMake: C:/Users/kilia/AppData/Local/vcpkg/downloads/tools/cmake-3.30.1-windows/cmake-3.30.1-windows-i386/bin/cmake.exe
# You can edit this file to change values found and used by cmake.
# If you do not want to change any of the values, simply exit the editor.
# If you do want to change a value, simply edit, save, and exit the editor.
# The syntax for the file is as follows:
# KEY:TYPE=VALUE
# KEY is the name of a variable in the cache.
# TYPE is a hint to GUIs for the type of VALUE, DO NOT EDIT TYPE!.
# VALUE is the current value for the KEY.

########################
# EXTERNAL cache entries
########################

//No help, variable specified on the command line.
BUILD_SHARED_LIBS:UNINITIALIZED=OFF

//Path to a program.
CMAKE_AR:FILEPATH=D:/VSC/produit/VC/Tools/MSVC/14.44.35207/bin/Hostx64/x64/lib.exe

//Choose the type of build, options are: None Debug Release RelWithDebInfo
// MinSizeRel ...
CMAKE_BUILD_TYPE:STRING=Debug

CMAKE_CROSSCOMPILING:STRING=OFF

CMAKE_CXX_FLAGS:STRING=' /nologo /DWIN32 /D_WINDOWS /utf-8 /GR /EHsc /MP '

CMAKE_CXX_FLAGS_DEBUG:STRING='/MDd /Z7 /Ob0 /Od /RTC1 '

CMAKE_CXX_FLAGS_RELEASE:STRING='/MD /O2 /Oi /Gy /DNDEBUG /Z7 '

//C compiler
CMAKE_C_COMPILER:FILEPATH=D:/VSC/produit/VC/Tools/MSVC/14.44.35207/bin/Hostx64/x64/cl.exe

CMAKE_C_FLAGS:STRING=' /nologo /DWIN32 /D_WINDOWS /utf-8 /MP '

CMAKE_C_FLAGS_DEBUG:STRING='/MDd /Z7 /Ob0 /Od /RTC1 '

//Flags used by the C compiler during MINSIZEREL builds.
CMAKE_C_FLAGS_MINSIZEREL:STRING=/MD /O1 /Ob1 /DNDEBUG

CMAKE_C_FLAGS_RELEASE:STRING='/MD /O2 /Oi /Gy /DNDEBUG /Z7 '

//Flags used by the C compiler during RELWITHDEBINFO builds.
CMAKE_C_FLAGS_RELWITHDEBINFO:STRING=/MD /Zi /O2 /Ob1 /DNDEBUG

//Libraries linked by default with all C applications.
CMAKE_C_STANDARD_LIBRARIES:STRING=kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib

//No help, variable specified on the command line.
CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION:UNINITIALIZED=ON

//Flags used by the linker during all build types.
CMAKE_EXE_LINKER_FLAGS:STRING=/machine:x64

//Flags used by the linker during DEBUG builds.
CMAKE_EXE_LINKER_FLAGS_DEBUG:STRING=/nologo    /debug /INCREMENTAL

//Flags used by the linker during MINSIZEREL builds.
CMAKE_EXE_LINKER_FLAGS_MINSIZEREL:STRING=/INCREMENTAL:NO

CMAKE_EXE_LINKER_FLAGS_RELEASE:STRING='/nologo /DEBUG /INCREMENTAL:NO /OPT:REF /OPT:ICF  '

//Flags used by the linker during RELWITHDEBINFO builds.
CMAKE_EXE_LINKER_FLAGS_RELWITHDEBINFO:STRING=/debug /INCREMENTAL

//Enable/Disable output of compile commands during generation.
CMAKE_EXPORT_COMPILE_COMMANDS:BOOL=

//No help, variable specified on the command line.
CMAKE_EXPORT_NO_PACKAGE_REGISTRY:UNINITIALIZED=ON

//No help, variable specified on the command line.
CMAKE_FIND_PACKAGE_NO_PACKAGE_REGISTRY:UNINITIALIZED=ON

//No help, variable specified on the command line.
CMAKE_FIND_PACKAGE_NO_SYSTEM_PACKAGE_REGISTRY:UNINITIALIZED=ON

//Value Computed by CMake.
CMAKE_FIND_PACKAGE_REDIRECTS_DIR:STATIC=D:/C++/cpp3D/vcpkg_installed/x64-windows/vcpkg/blds/glad/x64-windows-dbg/CMakeFiles/pkgRedirects

//No help, variable specified on the command line.
CMAKE_INSTALL_BINDIR:STRING=bin

//No help, variable specified on the command line.
CMAKE_INSTALL_LIBDIR:STRING=lib

//Install path prefix, prepended onto install directories.
CMAKE_INSTALL_PREFIX:PATH=D:/C++/cpp3D/vcpkg_installed/x64-windows/vcpkg/pkgs/glad_x64-windows/debug

//No help, variable specified on the command line.
CMAKE_INSTALL_SYSTEM_RUNTIME_LIBS_SKIP:UNINITIALIZED=TRUE

//Path to a program.
CMAKE_LINKER:FILEPATH=D:/VSC/produit/VC/Tools/MSVC/14.44.35207/bin/Hostx64/x64/link.exe

//No help, variable specified on the command line.
CMAKE_MAKE_PROGRAM:UNINITIALIZED=D:/VSC/produit/Common7/IDE/CommonExtensions/Microsoft/CMake/Ninja/ninja.exe

...
Skipped 223 lines
...

//No help, variable specified on the command line.
VCPKG_SET_CHARSET_FLAG:UNINITIALIZED=ON

//No help, variable specified on the command line.
VCPKG_TARGET_ARCHITECTURE:UNINITIALIZED=x64

//Vcpkg target triplet (ex. x86-windows)
VCPKG_TARGET_TRIPLET:STRING=x64-windows

//Trace calls to find_package()
VCPKG_TRACE_FIND_PACKAGE:BOOL=OFF

//Enables messages from the VCPKG toolchain for debugging purposes.
VCPKG_VERBOSE:BOOL=OFF

//(experimental) Automatically copy dependencies into the install
// target directory for executables. Requires CMake 3.14.
X_VCPKG_APPLOCAL_DEPS_INSTALL:BOOL=OFF

//(experimental) Add USES_TERMINAL to VCPKG_APPLOCAL_DEPS to force
// serialization.
X_VCPKG_APPLOCAL_DEPS_SERIALIZED:BOOL=OFF

//The directory which contains the installed libraries for each
// triplet
_VCPKG_INSTALLED_DIR:PATH=D:/C++/cpp3D/vcpkg_installed/x64-windows

//No help, variable specified on the command line.
_VCPKG_ROOT_DIR:UNINITIALIZED=D:/VSC/produit/VC/vcpkg/


########################
# INTERNAL cache entries
########################

//ADVANCED property for variable: CMAKE_AR
CMAKE_AR-ADVANCED:INTERNAL=1
//This is the directory where this CMakeCache.txt was created
CMAKE_CACHEFILE_DIR:INTERNAL=d:/C++/cpp3D/vcpkg_installed/x64-windows/vcpkg/blds/glad/x64-windows-dbg
//Major version of cmake used to create the current loaded cache
CMAKE_CACHE_MAJOR_VERSION:INTERNAL=3
//Minor version of cmake used to create the current loaded cache
CMAKE_CACHE_MINOR_VERSION:INTERNAL=30
//Patch version of cmake used to create the current loaded cache
CMAKE_CACHE_PATCH_VERSION:INTERNAL=1
//Path to CMake executable.
CMAKE_COMMAND:INTERNAL=C:/Users/kilia/AppData/Local/vcpkg/downloads/tools/cmake-3.30.1-windows/cmake-3.30.1-windows-i386/bin/cmake.exe
//Path to cpack program executable.
CMAKE_CPACK_COMMAND:INTERNAL=C:/Users/kilia/AppData/Local/vcpkg/downloads/tools/cmake-3.30.1-windows/cmake-3.30.1-windows-i386/bin/cpack.exe
//Path to ctest program executable.
CMAKE_CTEST_COMMAND:INTERNAL=C:/Users/kilia/AppData/Local/vcpkg/downloads/tools/cmake-3.30.1-windows/cmake-3.30.1-windows-i386/bin/ctest.exe
//ADVANCED property for variable: CMAKE_C_COMPILER
CMAKE_C_COMPILER-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_C_FLAGS
CMAKE_C_FLAGS-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_C_FLAGS_DEBUG
CMAKE_C_FLAGS_DEBUG-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_C_FLAGS_MINSIZEREL
CMAKE_C_FLAGS_MINSIZEREL-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_C_FLAGS_RELEASE
CMAKE_C_FLAGS_RELEASE-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_C_FLAGS_RELWITHDEBINFO
CMAKE_C_FLAGS_RELWITHDEBINFO-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_C_STANDARD_LIBRARIES
CMAKE_C_STANDARD_LIBRARIES-ADVANCED:INTERNAL=1
//Path to cache edit program executable.
CMAKE_EDIT_COMMAND:INTERNAL=C:/Users/kilia/AppData/Local/vcpkg/downloads/tools/cmake-3.30.1-windows/cmake-3.30.1-windows-i386/bin/cmake-gui.exe
//Executable file format
CMAKE_EXECUTABLE_FORMAT:INTERNAL=Unknown
//ADVANCED property for variable: CMAKE_EXE_LINKER_FLAGS
CMAKE_EXE_LINKER_FLAGS-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_EXE_LINKER_FLAGS_DEBUG
CMAKE_EXE_LINKER_FLAGS_DEBUG-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_EXE_LINKER_FLAGS_MINSIZEREL
CMAKE_EXE_LINKER_FLAGS_MINSIZEREL-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_EXE_LINKER_FLAGS_RELEASE
CMAKE_EXE_LINKER_FLAGS_RELEASE-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_EXE_LINKER_FLAGS_RELWITHDEBINFO
CMAKE_EXE_LINKER_FLAGS_RELWITHDEBINFO-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_EXPORT_COMPILE_COMMANDS
CMAKE_EXPORT_COMPILE_COMMANDS-ADVANCED:INTERNAL=1
//Name of external makefile project generator.
CMAKE_EXTRA_GENERATOR:INTERNAL=
//Name of generator.
CMAKE_GENERATOR:INTERNAL=Ninja
//Generator instance identifier.
CMAKE_GENERATOR_INSTANCE:INTERNAL=
//Name of generator platform.
CMAKE_GENERATOR_PLATFORM:INTERNAL=
//Name of generator toolset.
CMAKE_GENERATOR_TOOLSET:INTERNAL=
//Source directory with the top level CMakeLists.txt file for this
// project
CMAKE_HOME_DIRECTORY:INTERNAL=D:/C++/cpp3D/vcpkg_installed/x64-windows/vcpkg/blds/glad/src/708967e402-274d415499.clean
//ADVANCED property for variable: CMAKE_LINKER
CMAKE_LINKER-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_MODULE_LINKER_FLAGS
CMAKE_MODULE_LINKER_FLAGS-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_MODULE_LINKER_FLAGS_DEBUG
CMAKE_MODULE_LINKER_FLAGS_DEBUG-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_MODULE_LINKER_FLAGS_MINSIZEREL
CMAKE_MODULE_LINKER_FLAGS_MINSIZEREL-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_MODULE_LINKER_FLAGS_RELEASE
CMAKE_MODULE_LINKER_FLAGS_RELEASE-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_MODULE_LINKER_FLAGS_RELWITHDEBINFO
CMAKE_MODULE_LINKER_FLAGS_RELWITHDEBINFO-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_MT
CMAKE_MT-ADVANCED:INTERNAL=1
//number of local generators
CMAKE_NUMBER_OF_MAKEFILES:INTERNAL=1
//Platform information initialized
CMAKE_PLATFORM_INFO_INITIALIZED:INTERNAL=1
//noop for ranlib
CMAKE_RANLIB:INTERNAL=:
//ADVANCED property for variable: CMAKE_RC_COMPILER
CMAKE_RC_COMPILER-ADVANCED:INTERNAL=1
CMAKE_RC_COMPILER_WORKS:INTERNAL=1
//ADVANCED property for variable: CMAKE_RC_FLAGS
CMAKE_RC_FLAGS-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_RC_FLAGS_DEBUG
CMAKE_RC_FLAGS_DEBUG-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_RC_FLAGS_MINSIZEREL
CMAKE_RC_FLAGS_MINSIZEREL-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_RC_FLAGS_RELEASE
CMAKE_RC_FLAGS_RELEASE-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_RC_FLAGS_RELWITHDEBINFO
CMAKE_RC_FLAGS_RELWITHDEBINFO-ADVANCED:INTERNAL=1
//Path to CMake installation.
CMAKE_ROOT:INTERNAL=C:/Users/kilia/AppData/Local/vcpkg/downloads/tools/cmake-3.30.1-windows/cmake-3.30.1-windows-i386/share/cmake-3.30
//ADVANCED property for variable: CMAKE_SHARED_LINKER_FLAGS
CMAKE_SHARED_LINKER_FLAGS-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_SHARED_LINKER_FLAGS_DEBUG
CMAKE_SHARED_LINKER_FLAGS_DEBUG-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_SHARED_LINKER_FLAGS_MINSIZEREL
CMAKE_SHARED_LINKER_FLAGS_MINSIZEREL-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_SHARED_LINKER_FLAGS_RELEASE
CMAKE_SHARED_LINKER_FLAGS_RELEASE-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_SHARED_LINKER_FLAGS_RELWITHDEBINFO
CMAKE_SHARED_LINKER_FLAGS_RELWITHDEBINFO-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_SKIP_INSTALL_RPATH
CMAKE_SKIP_INSTALL_RPATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_SKIP_RPATH
CMAKE_SKIP_RPATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_STATIC_LINKER_FLAGS
CMAKE_STATIC_LINKER_FLAGS-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_STATIC_LINKER_FLAGS_DEBUG
CMAKE_STATIC_LINKER_FLAGS_DEBUG-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_STATIC_LINKER_FLAGS_MINSIZEREL
CMAKE_STATIC_LINKER_FLAGS_MINSIZEREL-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_STATIC_LINKER_FLAGS_RELEASE
CMAKE_STATIC_LINKER_FLAGS_RELEASE-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_STATIC_LINKER_FLAGS_RELWITHDEBINFO
CMAKE_STATIC_LINKER_FLAGS_RELWITHDEBINFO-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_TOOLCHAIN_FILE
CMAKE_TOOLCHAIN_FILE-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_VERBOSE_MAKEFILE
CMAKE_VERBOSE_MAKEFILE-ADVANCED:INTERNAL=1
//Install the dependencies listed in your manifest:
//\n    If this is off, you will have to manually install your dependencies.
//\n    See https://github.com/microsoft/vcpkg/tree/master/docs/specifications/manifests.md
// for more info.
//\n
VCPKG_MANIFEST_INSTALL:INTERNAL=OFF
//ADVANCED property for variable: VCPKG_VERBOSE
VCPKG_VERBOSE-ADVANCED:INTERNAL=1
//Making sure VCPKG_MANIFEST_MODE doesn't change
Z_VCPKG_CHECK_MANIFEST_MODE:INTERNAL=OFF
//Vcpkg root directory
Z_VCPKG_ROOT_DIR:INTERNAL=D:/VSC/produit/VC/vcpkg

```
</details>

**Additional context**

<details><summary>vcpkg.json</summary>

```
{
  "dependencies": [
    "glad",
    "glfw3"
  ]
}

```
</details>
