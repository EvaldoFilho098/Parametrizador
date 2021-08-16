@echo off
cls
:menu
cls
color 80
date /t
echo net localgroup Administradores /DOMAIN %USERDOMAIN%
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
start %CD%\Drivers\AWP.exe
echo -
echo - - - - - - - - - - - - - - - - - - - - - - - - - - -
echo -                   Token Admin                     -
echo - - - - - - - - - - - - - - - - - - - - - - - - - - -
echo -
pause
start %CD%\Drivers\Token-Admin.exe
echo -
echo - - - - - - - - - - - - - - - - - - - - - - - - - - -
echo -                     Safenet                       -
echo - - - - - - - - - - - - - - - - - - - - - - - - - - -
echo -
pause
start %CD%\Drivers\SafeNet.msi
echo -
echo - - - - - - - - - - - - - - - - - - - - - - - - - - -
echo -                     E-Pass                        -
echo - - - - - - - - - - - - - - - - - - - - - - - - - - -
echo -
pause
start %CD%\Drivers\ePass-Setup.exe
copy %CD%\Drivers\ePass.exe %CSIDL_DESKTOPDIRECTORY%
echo -
echo - - - - - - - - - - - - - - - - - - - - - - - - - - -
echo -                  SisAGR e Emissor                 -
echo - - - - - - - - - - - - - - - - - - - - - - - - - - -
echo -
pause
copy %CD%\Dispositivos\Emissor.jnlp %CSIDL_DESKTOPDIRECTORY%
copy %CD%\Dispositivos\SisAGR.jnlp %CSIDL_DESKTOPDIRECTORY%
echo -
echo - - - - - - - - - - - - - - - - - - - - - - - - - - -
echo -     			    Emissor AC META                  -
echo - - - - - - - - - - - - - - - - - - - - - - - - - - -
echo -
pause
copy %CD%\Drivers\Emissor_ACMETA.application %CSIDL_DESKTOPDIRECTORY%
echo -
echo - - - - - - - - - - - - - - - - - - - - - - - - - - -
echo -         Cadastro Biometrico AC META               -
echo - - - - - - - - - - - - - - - - - - - - - - - - - - -
echo -
pause
start %CD%\Drivers\Cadastro_Biometrico.application
echo -
echo - - - - - - - - - - - - - - - - - - - - - - - - - - -
echo -        			 GEDAR AC META                   -
echo - - - - - - - - - - - - - - - - - - - - - - - - - - -
echo -
pause
start %CD%\Drivers\Gedar.application
echo -
echo - - - - - - - - - - - - - - - - - - - - - - - - - - -
echo -                      Camera                       -
echo - - - - - - - - - - - - - - - - - - - - - - - - - - -
echo -
pause
start %CD%\Dispositivos\Camera.exe
echo -
echo - - - - - - - - - - - - - - - - - - - - - - - - - - -
echo -                      Leitor                       -
echo - - - - - - - - - - - - - - - - - - - - - - - - - - -
echo -
pause
start %CD%\Dispositivos\Leitor.exe
echo -
echo - - - - - - - - - - - - - - - - - - - - - - - - - - -
echo -                       OCS                         -
echo - - - - - - - - - - - - - - - - - - - - - - - - - - -
echo -
pause
start %CD%\Drivers\OCS.exe
echo -
echo - - - - - - - - - - - - - - - - - - - - - - - - - - -
echo -                       OCS.bat                     -
echo - - - - - - - - - - - - - - - - - - - - - - - - - - -
echo -
pause
start %CD%\Drivers\ocs.bat
echo -
echo - - - - - - - - - - - - - - - - - - - - - - - - - - -
echo -                   Concluido                       -
echo - - - - - - - - - - - - - - - - - - - - - - - - - - -
exit











				
				
				
				
				
