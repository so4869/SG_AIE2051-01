## SG_AIE2051-01
### 서강대학교 컴퓨터프로그래밍II 실습코드
#### 2025-Fall CSE2035/AIE2051-Class 1 Computer Programming II


수업중에 작성한 실습문제 코드이다.  
Elice에 올라온 실습문제 하나하나를 별도로 실행할 수 있도록 구성했다.
하나의 프로젝트(IDE기준) 내부에 여러 `run configuration`을 생성할 수 있도록 CMakeLists.txt 내부에 현재 폴더의 하위 폴더를 각각 하나의 CMake project로 인식하고, `run configuration`을 생성하도록 했다. 

따라서 Project를 import한 후, 각각의 project를 실행할 수 있도록 `Sync CMake Changes`를 수행하거나, CLion의 경우 `Sync CMake Changes`가 수행될 수 있도록 `Reload CMake Project`를 실행해야 한다.  
새로운 실습이나 과제를 추가하기 위해 새로운 directory를 추가해도 새로 추가한 directory의 project의 `run configuration`이 생성될 수 있도록 `Sync CMake Changes`를 수행히야 한다.

CMakeList.txt 파일이 복잡하지 않으므로 한번씩 읽어보면 좋다.