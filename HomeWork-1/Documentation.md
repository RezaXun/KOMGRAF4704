![image](https://github.com/RezaXun/KOMGRAF4704/assets/106087397/b03d78c2-c1b7-473f-b1ad-43fedf3e17e2)


## How to Install 

Just download this file in Gdrive
https://drive.google.com/drive/folders/1ul8K4WpWDXWt94FbiFp1a_sy07YWHw31?usp=sharing
Contain in this dirve :
- Dev-Cpp 5.11 TDM-GCC 4.9.2 Setup.exe
- file linker.txt
- freeglut-MinGW-3.0.0-1.mp.zip
- Sampe Code.txt
![image](https://github.com/RezaXun/KOMGRAF4704/assets/106087397/603089b7-3410-42c4-9850-8fc2c1f3a215)

Follow the instruct for this installation
- Install Dev-Cpp 5.11 TDM-GCC 4.9.2 Setup.exe to your PC/Laptop just next n set up to default option
- After done with ur installation, unzip the ##freeglut-MinGW-3.0.0-1.mp.zip
  Until like this
![image](https://github.com/RezaXun/KOMGRAF4704/assets/106087397/b55c93ea-856d-4d38-af4c-963b181fc6d4)
- Then go to folder C:\Program Files (x86)\Dev-Cpp\MinGW64
- Open folder from ##freeglut-MinGW-3.0.0-1.mp.zip after u unzip that, D:..\freeglut\include\GL
![image](https://github.com/RezaXun/KOMGRAF4704/assets/106087397/a4dda7d8-4625-4a99-aa62-8d4efd2f0350)
- Copy all this file to C:\Program Files (x86)\Dev-Cpp\MinGW64\x86_64-w64-mingw32\include\GL
- Then Open folder D:..\freeglut\lib
![image](https://github.com/RezaXun/KOMGRAF4704/assets/106087397/c439a09a-bd1a-4d13-b532-4e7c24ddb67b)
- If ur windows version have 32x use files under the x64 folder
![image](https://github.com/RezaXun/KOMGRAF4704/assets/106087397/61255c83-ef2c-453c-a8e9-14d995950bfb)
- If ur windows x64, open folder x64
![image](https://github.com/RezaXun/KOMGRAF4704/assets/106087397/cbcb865c-70ee-42c9-859f-5281954b26c4)
- Copy that file to C:\Program Files (x86)\Dev-Cpp\MinGW64\x86_64-w64-mingw32\lib
- Open again ur unzip file go to D:..\freeglut\bin 
![image](https://github.com/RezaXun/KOMGRAF4704/assets/106087397/77e4baf5-76d2-4747-b9d1-6143ae6a643a)
- If ur windows version have 32x use files under the x64 folder
- If ur windows x64, open folder x64
- Copy file freeglut.dll to C:\Windows\System32
- After done copy all file from D:..\freeglut\
- Open ur Dev-C++ 5.11 then click File --> New --> Project
![image](https://github.com/RezaXun/KOMGRAF4704/assets/106087397/39f0df1d-5b78-4b8f-9985-1eb56b37cad4)
![image](https://github.com/RezaXun/KOMGRAF4704/assets/106087397/b9d65a84-39a5-4b0c-bea6-b003cd97ed82)
- Rename ur project to anything then click Console Application
- Until like this
![image](https://github.com/RezaXun/KOMGRAF4704/assets/106087397/831495bc-a1f5-4dfb-bd2a-a29310638b77)
- Right Click ur project folder
![image](https://github.com/RezaXun/KOMGRAF4704/assets/106087397/6ebb8518-4b0c-4f12-ac81-7ac6dc977b47)
- Go to Parameters window and fill Linker Box with :
-lopengl32
-lfreeglut
-lglu32
![image](https://github.com/RezaXun/KOMGRAF4704/assets/106087397/93f08b90-d8cb-4d15-a30a-c10ac3907988)

Open the SampleCode.txt and paste to main.cpp
After done paste in file main.cpp Execute with click Execute and Compile n Run or just Press F11

Anddd whoillaaaa donee 




