@echo off
cls
:menu
cls
color 80
date /t

echo Computador: %computername%        Usuario: %username%
echo - - - - - - - - - - - - - - - - - - - - - - - - - - -
echo -              Instalando Drivers                   -
echo - - - - - - - - - - - - - - - - - - - - - - - - - - -
echo -
echo -
echo - - - - - - - - - - - - - - - - - - - - - - - - - - -
echo -                       AWP                         -
echo - - - - - - - - - - - - - - - - - - - - - - - - - - -
echo -
pause
start %CD%\\Drivers64\\AWP.exe
pause
echo -
echo - - - - - - - - - - - - - - - - - - - - - - - - - - -
echo -                   Token Admin                     -
echo - - - - - - - - - - - - - - - - - - - - - - - - - - -
echo -
pause
start %CD%\\Drivers64\\Token-Admin.exe
pause
echo -
echo - - - - - - - - - - - - - - - - - - - - - - - - - - -
echo -                     Safenet                       -
echo - - - - - - - - - - - - - - - - - - - - - - - - - - -
echo -
pause
start %CD%\\Drivers64\\SafeNet.msi
pause
echo -
echo - - - - - - - - - - - - - - - - - - - - - - - - - - -
echo -                     E-Pass                        -
echo - - - - - - - - - - - - - - - - - - - - - - - - - - -
echo -
pause
start %CD%\\Drivers64\\ePass-Setup.exe
copy %CD%\\Drivers64\\ePass.exe C:\\Users\\%username%\\Desktop
pause
echo -
echo - - - - - - - - - - - - - - - - - - - - - - - - - - -
echo -                  SisAGR e Emissor                 -
echo - - - - - - - - - - - - - - - - - - - - - - - - - - -
echo -
pause
copy %CD%\\Dispositivos\\Emissor.jnlp C:\\Users\\%username%\\Desktop
copy %CD%\\Dispositivos\\SisAGR.jnlp C:\\Users\\%username%\\Desktop
pause
echo -
echo - - - - - - - - - - - - - - - - - - - - - - - - - - -
echo -                      Camera                       -
echo - - - - - - - - - - - - - - - - - - - - - - - - - - -
echo -
pause
start %CD%\\Dispositivos\\Camera.exe
pause
echo -
echo - - - - - - - - - - - - - - - - - - - - - - - - - - -
echo -                      Leitor                       -
echo - - - - - - - - - - - - - - - - - - - - - - - - - - -
echo -
pause
start %CD%\\Dispositivos\\Leitor.exe
pause
echo -
echo - - - - - - - - - - - - - - - - - - - - - - - - - - -
echo -                       OCS                         -
echo - - - - - - - - - - - - - - - - - - - - - - - - - - -
echo -
pause
start %CD%\\Drivers64\\OCS.exe
start %CD%\\Drivers64\\ocs.bat
pause
echo -
echo - - - - - - - - - - - - - - - - - - - - - - - - - - -
echo -                   Concluido                       -
echo - - - - - - - - - - - - - - - - - - - - - - - - - - -
pause
exit











				
				
				
				
				
