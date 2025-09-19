@echo off
REM === Vérifier qu'un argument est passé ===
if "%~1"=="" (
    echo Utilisation: compile.bat fichier.c
    exit /b 1
)

REM === Charger l'environnement de compilation ===
call "C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvars64.bat"

REM === Créer les dossiers de build si nécessaires ===
if not exist build mkdir build
if not exist build\obj mkdir build\obj

REM === Extraire le nom du fichier sans extension ===
for %%F in (%~1) do set FILENAME=%%~nF

REM === Compiler avec cl en plaçant .obj et .exe dans build/ ===
cl %~1 /Fo"build\obj\\" /Fe"build\%FILENAME%.exe"

REM === Afficher l'endroit où le binaire a été placé ===
echo.
echo Compilation terminee : build\%FILENAME%.exe
REM echo.
REM pause
