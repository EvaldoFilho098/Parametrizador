#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#define TAM 30
#define ESP 4

int  Auditorias = 0, LEventos = 0, PTela = 0, HInternet = 0, Ntplwz = 0, PSenha = 0,inicio=1;

void Espacos(int n){
	int i=0;
	for(i=0; i<n;i++){
		printf("\n");
	}	
}

void Politicas_Auditoria(int op){
	
	int verificacao = 0;
	
	if( op == 0){
		printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
		printf("- 1. Realizar Procedimento\n");
		printf("- 2. Desfazer Procedimento\n");
		printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
		fflush(stdin);
		scanf("%d",&op);
	}
	
	if(op == 1){
		printf("- - - - - - - - - POLITICAS DE AUDITORIA - - - - - - - - \n");
		verificacao += system("auditpol.exe /set /category:\"{6997984A-797A-11D9-BED3-505054503030}\" /success:enable /failure:enable > Log.txt");
		verificacao +=system("auditpol.exe /set /category:\"{6997984F-797A-11D9-BED3-505054503030}\" /success:enable /failure:enable > Log.txt");
		verificacao +=system("auditpol.exe /set /category:\"{6997984D-797A-11D9-BED3-505054503030}\" /success:enable /failure:enable > Log.txt");
		verificacao +=system("auditpol.exe /set /category:\"{6997984E-797A-11D9-BED3-505054503030}\" /success:enable /failure:enable > Log.txt");
		verificacao +=system("auditpol.exe /set /category:\"{69979850-797A-11D9-BED3-505054503030}\" /success:enable /failure:enable > Log.txt");
		verificacao +=system("auditpol.exe /set /category:\"{69979849-797A-11D9-BED3-505054503030}\" /success:enable /failure:enable > Log.txt");
		verificacao +=system("auditpol.exe /set /category:\"{6997984C-797A-11D9-BED3-505054503030}\" /success:enable /failure:enable > Log.txt");
		verificacao +=system("auditpol.exe /set /category:\"{69979848-797A-11D9-BED3-505054503030}\" /success:enable /failure:enable > Log.txt");
		verificacao +=system("auditpol.exe /set /category:\"{6997984B-797A-11D9-BED3-505054503030}\" /success:enable /failure:enable > Log.txt");
	}else if (op == 2){
		printf("- - - - - DESFAZENDO POLITICAS DE AUDITORIA - - - - - - \n");
		verificacao += system("auditpol.exe /set /category:\"{6997984A-797A-11D9-BED3-505054503030}\" /success:disable /failure:disable > Log.txt");
		verificacao +=system("auditpol.exe /set /category:\"{6997984F-797A-11D9-BED3-505054503030}\" /success:disable /failure:disable > Log.txt");
		verificacao +=system("auditpol.exe /set /category:\"{6997984D-797A-11D9-BED3-505054503030}\" /success:disable /failure:disable > Log.txt");
		verificacao +=system("auditpol.exe /set /category:\"{6997984E-797A-11D9-BED3-505054503030}\" /success:disable /failure:disable > Log.txt");
		verificacao +=system("auditpol.exe /set /category:\"{69979850-797A-11D9-BED3-505054503030}\" /success:disable /failure:disable > Log.txt");
		verificacao +=system("auditpol.exe /set /category:\"{69979849-797A-11D9-BED3-505054503030}\" /success:disable /failure:disable > Log.txt");
		verificacao +=system("auditpol.exe /set /category:\"{6997984C-797A-11D9-BED3-505054503030}\" /success:disable /failure:disable > Log.txt");
		verificacao +=system("auditpol.exe /set /category:\"{69979848-797A-11D9-BED3-505054503030}\" /success:disable /failure:disable > Log.txt");
		verificacao +=system("auditpol.exe /set /category:\"{6997984B-797A-11D9-BED3-505054503030}\" /success:disable /failure:disable > Log.txt");
	}
	
	if(verificacao != 0){	
		printf("- - - - - - VERIFICAR POLITICAS DE AUDITORIA! - - - - - -\n");
		Auditorias = 0;
	}else{
		printf("- - - - - - - - - - - - COMPLETO ! - - - - - - - - - - - -\n");
		Auditorias = 1;
	}
	Espacos(ESP);
}

void Netplwiz(int op){
	
	int verificacao = 0;
	
	if( op == 0){
		printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
		printf("- 1. Realizar Procedimento\n");
		printf("- 2. Desfazer Procedimento\n");
		printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
		fflush(stdin);
		scanf("%d",&op);
	}
	
	if( op == 1){
		printf("- - - CONFIGURACOES DE LOGON INTERATIVO(NETPLWIZ) - - - -\n");
		verificacao += system("powershell.exe set-itemproperty -path HKLM:/Software/Microsoft/Windows/CurrentVersion/Policies/System/ -name DontDisplayLastUserName -type DWORD  -value 1 > Log.txt");
		verificacao += system("powershell.exe set-itemproperty -path HKLM:/Software/Microsoft/Windows/CurrentVersion/Policies/System/ -name DisableCAD -type DWORD  -value 0 > Log.txt");
	}else if(op == 2){
		printf("DESFAZENDO CONFIGURACOES DE LOGON INTERATIVO(NETPLWIZ)\n");
		verificacao += system("powershell.exe set-itemproperty -path HKLM:/Software/Microsoft/Windows/CurrentVersion/Policies/System/ -name DontDisplayLastUserName -type DWORD  -value 0 > Log.txt");
		verificacao += system("powershell.exe set-itemproperty -path HKLM:/Software/Microsoft/Windows/CurrentVersion/Policies/System/ -name DisableCAD -type DWORD  -value 1 > Log.txt");
	}
	
	if(verificacao != 0){
		printf("- - - VERIFICAR CONFIGURACOES DE LOGON INTERATIVO!  - - -\n");
		Ntplwz = 0;
	}else{
		printf("- - - - - - - - - - - - COMPLETO ! - - - - - - - - - - - -\n");
		Ntplwz = 1;
	}
	Espacos(ESP);
}

void Log_Eventos(int op){
	
	int verificacao = 0;
	
	if( op == 0){
		printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
		printf("- 1. Realizar Procedimento\n");
		printf("- 2. Desfazer Procedimento\n");
		printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
		fflush(stdin);
		scanf("%d",&op);
	}
	
	if(op == 1){
		printf("- - - - - - - CONFIGURACOES DE LOG DE EVENTOS - - - - - -\n");
		verificacao += system("powershell.exe REG ADD HKLM\\SOFTWARE\\Policies\\Microsoft\\Windows\\EventLog\\Security /f > Log.txt");
		if(verificacao == 0){
			verificacao += system("powershell.exe New-ItemProperty -path HKLM:\\Software\\Policies\\Microsoft\\Windows\\EventLog\\Security\\ -Name MaxSize -PropertyType DWORD  -Value 20480 -Force > Log.txt");
			verificacao += system("powershell.exe New-ItemProperty -path HKLM:\\Software\\Policies\\Microsoft\\Windows\\EventLog\\Security\\ -Name AutoBackupLogFiles -PropertyType String -Value 1 -Force > Log.txt");
		}else{
			verificacao = 0;
			verificacao += system("powershell.exe set-itemproperty -path HKLM:\\Software\\Policies\\Microsoft\\Windows\\EventLog\\Security\\ -name MaxSize -type DWORD  -value 20480 -Force /f > Log.txt");
			verificacao += system("powershell.exe set-itemproperty -path HKLM:\\Software\\Policies\\Microsoft\\Windows\\EventLog\\Security\\ -name AutoBackupLogFiles -value 1 -Force /f > Log.txt");
		}
	}else if( op == 2){
		printf("- - -  DESFAZENDO CONFIGURACOES DE LOG DE EVENTOS - - - -\n");
		verificacao += system("powershell.exe REG DELETE HKLM\\SOFTWARE\\Policies\\Microsoft\\Windows\\EventLog\\Security /f > Log.txt");
	}	
	
	verificacao += system("gpupdate /force /target:computer > Log.txt");
	if(verificacao != 0){
		
		printf("- VERIFICAR CONFIGURACOES DE SERVICO DE LOG DE EVENTOS! -\n");
		LEventos = 0;
	}else{
		printf("- - - - - - - - - - - - COMPLETO ! - - - - - - - - - - - -\n");
		LEventos = 1;
	}
	Espacos(ESP);
}

void Politicas_Senha(int op){
	FILE *fp,*fc;
	char *config;
	config = malloc(sizeof(char)*8700);
	int verificacao = 0;
	
	if( op == 0){
		printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
		printf("- 1. Realizar Procedimento\n");
		printf("- 2. Desfazer Procedimento\n");
		printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
		fflush(stdin);
		scanf("%d",&op);
	}
	
	if(op == 1){
		printf("- - - - - CONFIGURACOES DE POLITICAS DE SENHA - - - - - -\n");
	 	if ((fp=fopen ("Configuracoes.txt","r"))==NULL || (fc=fopen ("C:/secconfig.cfg","w"))==NULL  ){
	 		printf ("Erro na abertura do arquivo\n");
	 		
	 		printf("- - VERIFICAR CONFIGURACOES DE POLITICA DE SENHAS! - - - \n");
	 		PSenha = 0;
	 	}else{
	 		//printf("Iniciando...\n");
	 		fread(config, sizeof(char), 8700,fp);
	 		fwrite(config, sizeof(char), 8700,fc);
	 		fclose(fp);
	 		fclose(fc);
	 		verificacao += system("powershell.exe secedit.exe /configure /db \\securitynew.sdb /cfg C:\\secconfig.cfg /areas SECURITYPOLICY > Log.txt");
	 		if(verificacao != 0){
	 			
				printf("- - -VERIFICAR CONFIGURACOES DE POLITICA DE SENHAS!- - - \n");
				PSenha = 0;
			}else{
				printf("- - - - - - - - - - - - COMPLETO ! - - - - - - - - - - - -\n");
				PSenha = 1;
			}
	 	}
 	}else if(op == 2){
 		printf("- - - DESFAZENDO CONFIGURACOES DE POLITICAS DE SENHA - - -\n");
	 	if ((fp=fopen ("Desconfigurar.txt","r"))==NULL || (fc=fopen ("C:/secconfig.cfg","w"))==NULL  ){
	 		printf ("Erro na abertura do arquivo\n");
	 		
	 		printf("- - VERIFICAR CONFIGURACOES DE POLITICA DE SENHAS! - - - \n");
	 		PSenha = 0;
	 	}else{
	 		//printf("Iniciando...\n");
	 		fread(config, sizeof(char), 8700,fp);
	 		fwrite(config, sizeof(char), 8700,fc);
	 		fclose(fp);
	 		fclose(fc);
	 		verificacao += system("powershell.exe secedit.exe /configure /db \\securitynew.sdb /cfg C:\\secconfig.cfg /areas SECURITYPOLICY > Log.txt");
	 		if(verificacao != 0){
	 			
				printf("- - -VERIFICAR CONFIGURACOES DE POLITICA DE SENHAS!- - - \n");
				PSenha = 0;
			}else{
				printf("- - - - - - - - - - - - COMPLETO ! - - - - - - - - - - - -\n");
				PSenha = 1;
			}
	 	}
	}
	Espacos(ESP);
}

void Horario_Internet(int op){
	
	int verificacao = 0,t=0, sinc=0;
	
	if( op == 0){
		printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
		printf("- 1. Realizar Procedimento\n");
		printf("- 2. Desfazer Procedimento\n");
		printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
		fflush(stdin);
		scanf("%d",&op);
	}
	
	if(op == 1){
		printf("- - - - - CONFIGURACOES DE HORARIO DA INTERNET - - - - - \n");
		verificacao += system("powershell.exe REG IMPORT Servidores.txt > Log.txt");
		verificacao += system("powershell.exe w32tm /config /syncfromflags:manual /manualpeerlist:ntp1.acsoluti.com.br > Log.txt");
	}else{
		printf("- -  DESFAZENDO CONFIGURACOES DE HORARIO DA INTERNET - - \n");
		verificacao += system("powershell.exe w32tm /config /syncfromflags:manual /manualpeerlist:time.windows.com > Log.txt");
	}
	verificacao += system("w32tm /config /update > Log.txt");
	t = 1;
	do{
		sinc = system("w32tm /resync > Log.txt");
		t++;
	}while(t != 3 && sinc != 0);
	
	if(verificacao != 0){
		printf(" - - VERIFICAR CONFIGURACOES DE HORARIO DA INTERNET! - - \n");
		HInternet = 0;
	}else{
		printf("- - - - - - - -- - - - COMPLETO ! - - - - - - - - - - - -\n");
		HInternet = 1;
	}
	Espacos(ESP);
}

void Protecao_Tela(int op){
	
	int verificacao = 0;
	
	if( op == 0){
		printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
		printf("- 1. Realizar Procedimento\n");
		printf("- 2. Desfazer Procedimento\n");
		printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
		fflush(stdin);
		scanf("%d",&op);
	}
		
	if(op == 1){
		printf("\n- - - - - - CONFIGURACOES DE PROTECAO DE TELA - - - - - -\n");
		verificacao += system("powershell.exe REG ADD HKCU\\Software\\Policies\\Microsoft\\Windows\\'Control Panel'\\Desktop /f > Log.txt");
		if(verificacao != 0){
			verificacao += system("powershell.exe new-itemproperty -path HKCU:\\Software\\Policies\\Microsoft\\Windows\\'Control Panel'\\Desktop\\ -name ScreenSaveActive -type String -value 1 > Log.txt");
			verificacao += system("powershell.exe new-itemproperty -path HKCU:\\Software\\Policies\\Microsoft\\Windows\\'Control Panel'\\Desktop\\ -name ScreenSaveTimeOut -type String -value 120 > Log.txt");
			verificacao += system("powershell.exe new-itemproperty -path HKCU:\\Software\\Policies\\Microsoft\\Windows\\'Control Panel'\\Desktop\\ -name ScreenSaverIsSecure -type String -value 1 > Log.txt");
			verificacao += system("powershell.exe new-itemproperty -path HKCU:\\Software\\Policies\\Microsoft\\Windows\\'Control Panel'\\Desktop\\ -name SCRNSAVE.EXE  -type String -value C:\\Windows\\System32\\scrnsave.scr > Log.txt ");
		}else{
			verificacao = 0;
			verificacao += system("powershell.exe set-itemproperty -path HKCU:\\Software\\Policies\\Microsoft\\Windows\\'Control Panel'\\Desktop\\ -name ScreenSaveActive -type String -value 1 > Log.txt");
			verificacao += system("powershell.exe set-itemproperty -path HKCU:\\Software\\Policies\\Microsoft\\Windows\\'Control Panel'\\Desktop\\ -name ScreenSaveTimeOut -type String -value 120 > Log.txt");
			verificacao += system("powershell.exe set-itemproperty -path HKCU:\\Software\\Policies\\Microsoft\\Windows\\'Control Panel'\\Desktop\\ -name ScreenSaverIsSecure -type String -value 1 > Log.txt");
			verificacao += system("powershell.exe set-itemproperty -path HKCU:\\Software\\Policies\\Microsoft\\Windows\\'Control Panel'\\Desktop\\ -name SCRNSAVE.EXE  -type String -value C:\\Windows\\System32\\scrnsave.scr > Log.txt");		
		}
		
	}else if(op == 2){
		
		printf("- - - DESFAZENDO CONFIGURACOES DE PROTECAO DE TELA - - - \n");
		verificacao += system("powershell.exe REG DELETE HKCU\\Software\\Policies\\Microsoft\\Windows\\'Control Panel'\\Desktop /f > Log.txt");
	}
	
	verificacao += system("gpupdate /force /target:computer > Log.txt");
	
	if(verificacao != 0){
			printf("- - - VERIFICAR CONFIGURACOES DE PROTECAO DE TELA! - - - \n");
			PTela = 0;
		}else{
			printf("- - - - - - - - - - - - COMPLETO ! - - - - - - - - - - - -\n");
			PTela = 1;
		}
	Espacos(ESP);
}

void Exibicao(int completo){
	
	if(completo == 1){
		printf("\n- - - - - - - - - - - PARAMETRIZACAO COMPLETAMETNE REALIZADA! - - - - - - - - - - - - \n\n");
	}else{
		if(completo == 0){
			printf("\n- - - - - - - - - PARAMETRIZACAO FOI REALIZADA MAS APRESENTA ERROS - - - - - - - - - \n");
			if(Auditorias == 0){
				printf("- > POLITICAS DE AUDITORIA\n");
			}
			if(Ntplwz == 0){
				printf("- > NETPLWIZ\n");
			}
			if(LEventos == 0){
				printf("- > LOG DE EVENTOS\n");
			}
			if(PSenha == 0){
				printf("- > POLITICAS DE SENHA\n");
			}
			if(HInternet == 0){
				printf("- > HORARIO DE INTERNET\n");
			}
			if( PTela == 0){
				printf("- > PROTECAO DE TELA\n");
			}
			printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n");
		}
	}
}

int Completo(){
	
	if(Auditorias ==1 && LEventos == 1 && PTela == 1 && HInternet == 1 && Ntplwz == 1 && PSenha == 1){
		return 1;
	}else{
		return 0;
	}
}

int Menu_Usuarios(){
	int x;
	system("cls");
	
	printf("- - - - - - - - - - - - - - MENU DE USUARIOS - - - - - - - - - - - - - - -\n");
	printf("- USUARIOS EXISTENTES:\n");
	system("powershell.exe Get-CimInstance -Class Win32_UserAccount -Filter \\\"Status='OK'\\\"");
	printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
	printf("- 0) Sair\n");
	printf("- 1) Alterar Usuario Existente\n");
	printf("- 2) Criar Usuario\n");
	printf("- 3) Criar Usuario Suporte\n");
	printf("- 4) Abrir Gerenciador\n");
	printf("- 5) Mostrar Usuarios Administradores\n");
	printf("- 6) Mostrar Usuarios Locais\n");
	printf("- >");
	fflush(stdin);
	setbuf(stdin,NULL);
	scanf("%d",&x);
	fflush(stdin);
	setbuf(stdin,NULL);
	return x;
}

void Usuarios(){
	//char comando[256];
	//printf("- - - - - - - - - - - - - USUARIOS - - - - - - - - - - - - - - - -\n");
	//sprintf(comando,"powershell.exe net user Suporte !Suporte321@ /fullname:\"Suporte\" /comment:\"Suporte\" /EXPIRES:NEVER /add");
	//system(comando);
	//sprintf(comando,"WMIC USERACCOUNT WHERE \"name='Suporte'\" SET PasswordExpires=False");
	//system(comando);
	//sprintf(comando,"powershell.exe net localgroup administradores Suporte /add");
	//system(comando);
	//sprintf(comando,"start Usuarios.bat %d",i);
	//system(comando);
	printf("- - - - - - - - - - - - - CONTROLE DE USUARIOS - - - - - - - - - - - - - - - -\n");
		
	int verificacao = 0,us = 0, ty = 0, alt=0,j=0;
	char opcao, aux[TAM], aux3[TAM], username[TAM], comando[256], pass[TAM], g , c='a';
	
	setbuf(stdin,NULL);
	fflush(stdin);
	printf("-> Prosseguir? (s/n)\n>");
	do{
		scanf("%c",&opcao);
	}while(opcao != 's' && opcao != 'S' && opcao != 'n' && opcao != 'N');
	
	if(opcao == 'n' || opcao == 'N')
		return;

	while(1){
		fflush(stdin);
		setbuf(stdin,NULL);
		us = Menu_Usuarios();
		switch(us){
			case 1:{
				printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
				printf("- Digite o nome de usuario que deseja alterar:\n- > ");
				scanf("%s",&aux);
				strcpy(username,aux);
				
				printf("- - - - - - - - - - - - - - - %s - - - - - - - - - - - - - -\n",username);
				printf("- 1) Mudar Senha\n");
				printf("- 2) Alterar Prioridade\n");
				printf("- > ");
				setbuf(stdin,NULL);
				fflush(stdin);
				alt=0;
				while(alt != 1 && alt != 2){
					scanf("%d",&alt);
				}
				
				if(alt == 1){	
					printf("- - - - - - - - - - - - - - %s - - - - - - - - - - - - - - -\n",username);
					printf("- Digite a nova senha:\n- > ");
					setbuf(stdin,NULL);
					fflush(stdin);
					scanf("%s",&pass);
				    
					sprintf(comando,"powershell.exe net user %s %s",username,pass);
					verificacao += system(comando);
				}else{
					printf("- - - - - - - - - - - - - - %s - - - - - - - - - - - - - - -\n",username);
					printf("- 1) Voltar à Conta Local\n");
					printf("- 2) Tornar Administrador\n");
					printf("- > ");
					setbuf(stdin,NULL);
					fflush(stdin);
					ty = 0 ;
					while(ty != 1 && ty != 2){
						scanf("%d",&ty);
					}
					
					if(ty == 1){
						sprintf(comando,"powershell.exe net localgroup administradores %s /delete",username);
						verificacao += system(comando);
						sprintf(comando,"powershell.exe net localgroup usuários %s /add",username);
						if(!system(comando));
					}else{
						sprintf(comando,"powershell.exe net localgroup administradores %s /add",username);
						verificacao += system(comando);
					}
				}
				//system("cls");
				break;
			}
			case 2:{
				printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
				printf("- Digite o nome de usuario que deseja criar:\n- > ");
				setbuf(stdin,NULL);
				fflush(stdin);
				scanf("%s",&aux3);
				strcpy(username,aux3);
				printf("- Digite a senha:\n- > ");
				setbuf(stdin,NULL);
				fflush(stdin);
				scanf("%s",&pass);
				printf("\n");
				verificacao = 0;
				sprintf(comando,"powershell.exe net user %s %s /fullname:\"%s\" /comment:\"%s\" /EXPIRES:NEVER /add",username,pass,username,username);
				verificacao += system(comando);
				sprintf(comando,"WMIC USERACCOUNT WHERE \"name='%s'\" SET PasswordExpires=False",username);
				verificacao += system(comando);
				printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
				
				if( verificacao == 0){
					printf("- Defina o Grupo do Novo Usuario:\n");
					printf("- 1) Conta Local\n- 2) Administrador\n- > ");
					setbuf(stdin,NULL);
					fflush(stdin);
					ty = 0;
					while(ty != 1 && ty != 2){
						scanf("%d",&ty);
					}
					if(ty == 2 ){
						sprintf(comando,"powershell.exe net localgroup administradores %s /add",username);
						verificacao += system(comando);
					}
				}
				setbuf(stdin,NULL);
				fflush(stdin);
				break;
			}
			case 3:{
				//system("cls");
				printf("- - - - - - - - - - - - - CRIANDO USUARIO SUPORTE - - - - - - - - - - - - - - - -\n");
				sprintf(comando,"powershell.exe net user Suporte !Suporte321@ /fullname:\"Suporte\" /comment:\"Suporte\" /EXPIRES:NEVER /add");
				system(comando);
				sprintf(comando,"WMIC USERACCOUNT WHERE \"name='Suporte'\" SET PasswordExpires=False");
				system(comando);
				sprintf(comando,"powershell.exe net localgroup administradores Suporte /add");
				system(comando);
				break;
			}
			case 4:{
				verificacao += system("powershell.exe lusrmgr.msc");
				break;
			}
			
			case 5:{
				system("cls");
				printf("- - - - - - - - - CONTROLE DE USUARIOS - - - - - - - - - \n");
				if(system("powershell.exe net localgroup Administradores") != 0){
					system("powershell.exe net localgroup Administrators");
				}
				break;
			}
			
			case 6:{
				system("cls");
				printf("- - - - - - - - - CONTROLE DE USUARIOS - - - - - - - - - \n");
				if(system("powershell.exe net localgroup Usuários") != 0){
					system("powershell.exe net localgroup Users");
				}
				break;
			}
			
			case 0:{
				return;
			}
		}
		
		if( us >= 0 && us <=6){
			if(verificacao != 0){
					printf(" - - - VERIFICAR CONFIGURACOES DE USUARIO - - - -  - - - \n");
					
				}else{
					printf("- - - - - - - - - - - - COMPLETO ! - - - - - - - - - - - -\n");
			}
			system("pause");
		}
	}
	Espacos(ESP);
}

void Bitlocker(){
	int disco,volume, verifica,verifica2;
	char agr[20], comando[100], aux[100], opcao;
	FILE *scripts;
	
	printf("- - - - - - - - - - - - GERENCIANDO BITLOCKER - - - - - - - - - - - -\n\n");
	setbuf(stdin,NULL);
	fflush(stdin);
	printf("-> Prosseguir? (s/n)\n>");
	do{
		scanf("%c",&opcao);
	}while(opcao != 's' && opcao != 'S' && opcao != 'n' && opcao != 'N');
	
	if(opcao == 'n' || opcao == 'N')
		return;
		
	do{	
		verifica = 0;
		//Mostra
		system("powershell.exe diskpart /s Listagem.txt");
		
		//Obtem
		printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n");
		printf("- Insira O Disco e o Volume A Serem Selecionados - \n");
		fflush(stdin);
		printf("- Disco > ");
		scanf("%d",&disco);
		printf("- Volume > ");
		fflush(stdin);
		scanf("%d",&volume);
		
		if ((scripts=fopen("Script01.txt","w"))==NULL ){
	 		printf ("Erro na abertura do arquivo\n");
	 	}else{
			 fprintf(scripts,"select disk %d\nselect volume %d\nshrink desired=2048\ncreate partition primary",disco,volume);
		} 
		 fclose(scripts);
		
		verifica += system("powershell.exe diskpart /s Script01.txt");
		if( verifica != 0){
			//Sleep(5000);
			printf("\n\n- - - - - - - - - - - - - - - - - Tente Novamente - - - - - - - - - - - - - - - - - -\n\n");
		}
	}while(verifica != 0);
		
	system("powershell.exe diskpart /s Listagem.txt");
	printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n");
	do{
		verifica = 0;
		printf("- Insira O Volume A Ser Inicializado - \n");
		printf("- Volume > ");
		fflush(stdin);
		scanf("%d",&volume);
		
		if ((scripts=fopen("Script02.txt","w"))==NULL ){
	 		printf ("Erro na abertura do arquivo\n");
	 	}else{
			 fprintf(scripts,"select volume %d\nformat FS=NTFS QUICK COMPRESS\nassign letter=S\n",volume);
		} 
		fclose(scripts);
		
		verifica += system("powershell.exe diskpart /s Script02.txt");
		if( verifica != 0){
			//Sleep(5000);
			printf("\n\n- - - - - - - - - - - - - - - - - Tente Novamente - - - - - - - - - - - - - - - - - -\n\n");
		}
	}while(verifica != 0);
	
	printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n");
	
	do{
		verifica = 0;
		printf("- Insira O Nome do AGR - \n");
		printf("- Nome >");
		fflush(stdin);
		setbuf(stdin,NULL);
		scanf("%s",&agr);
		strcpy(comando,"manage-bde -on S: -recoverypassword > C:\\Users\\\%username\%\\Desktop\\\"AGR ");
		sprintf(aux,"%s - Chave de Recuperacao de Bitlocker 2021-2\".txt",agr);
		strcat(comando,aux);
		
		verifica += system(comando);
		if(verifica != 0){
			//Sleep(5000);
			printf("\n\n- - - - - - - - - - - - - - - - - Tente Novamente - - - - - - - - - - - - - - - - - -\n\n");
		}
	}while(verifica != 0);
	
	do{	
		verifica2 = 0;
		verifica2 += system("manage-bde -protectors -add S: -pw");
		if(verifica2 != 0){
			//Sleep(5000);
			printf("\n\n- - - - - - - - - - - - - - - - - Tente Novamente - - - - - - - - - - - - - - - - - -\n\n");
		}
	}while(verifica2 != 0);
		
	printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n");
	//system("pause");
	//system("manage-bde -on S: -recoverypassword > C:\\Users\\%username%\\Desktop\\\"AGR - Chave de Recuperacao de Bitlocker\".txt");
	Espacos(ESP);
}

void Ate_Logo(int i){
	printf("\n\n");
	printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
	printf("* * *                       ATE LOGO!                       * * *\n");
	printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
	system("pause");
	if(i==1){
		exit(1);
	}
	return;
}

int Sistema(){
	int v = 0,arq = 0;
	char opcao = 'a';
	printf("- - - - - - - - - - INFORMACOES DO SISTEMA - - - - - - - - - - \n");
	printf("-\n");
	printf("- - - - VERSAO : \n\n");
	v += system("powershell.exe wmic os get caption /value /format:VALUE ");
	fflush(stdin);
	printf("- - - - ATIVACAO :\n\n");
	v += system("powershell.exe cscript c:\\Windows\\System32\\slmgr.vbs /xpr ");
	fflush(stdin);
	printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n");
	
	setbuf(stdin,NULL);
	printf("-> Prosseguir com a Parametrizacao? (s/n)\n>");
	do{
		scanf("%c",&opcao);
	}while(opcao != 's' && opcao != 'S' && opcao != 'n' & opcao != 'N');
	
	
	if(opcao == 's' || opcao == 'S' || opcao == '\n' || opcao == 13){
		return arq;
	}else{
		printf("\n\n");
		Ate_Logo(1);
	}
}

void Menu(){
	int completo;	
	system("cls");
	
	if(inicio == 0)
		Exibicao(Completo());
		
	printf(" * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
	printf(" *                             PARAMETRIZACAO                            *\n");
	printf(" *                                                                       *\n");
	printf(" *          CONFIGURACOES            *           DRIVERS                 *\n");
	printf(" * ================================= * ================================= *\n");
	printf(" * 1. Todas                          * 11. Todos                         *\n");
	printf(" * 2. Particao e Bitlocker           * 12. E-pass                        *\n");
	printf(" * 3. Usuarios                       * 13. Safenet                       *\n");
	printf(" * 4. Auditorias                     * 14. Token Admin                   *\n");
	printf(" * 5. Logon Interarivo(Netplwiz)     * 15. AWP                           *\n");
	printf(" * 6. Servico de Log de Eventos      * 16. SISAGR e Emissor              *\n");
	printf(" * 7. Politicas de Senha             * 17. Driver Camera                 *\n");
	printf(" * 8. Horario da Internet            * 18. Driver Leitor Biometrico      *\n");
	printf(" * 9. Protecao de Tela               * 19. OCS                           *\n");
	printf(" * 10. Reverter                      * 20. Sair                          *\n");
	printf(" * ================================= * ================================= *\n");
	printf(" * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
}

void MostraOpcao(int i){
	char opcao[35];
	i -= 11;
	switch(i){
		case 1:{
			strcpy(opcao,"Instalando e-Pass");
			break;
		}
		case 2:{
			strcpy(opcao,"Instalando SafeNet");
			break;
		}
		case 3:{
			strcpy(opcao,"Instalando Token Admin");
			break;
		}
		case 4:{
			strcpy(opcao,"Instalando AWP");
			break;
		}
		case 5:{
			strcpy(opcao,"Transferindo SisAGR e Emissor");
			break;
		}
		case 6:{
			strcpy(opcao,"Instalando Driver Camera");
			break;
		}
		case 7:{
			strcpy(opcao,"Instalando Driver Leitor");
			break;
		}
		case 8:{
			strcpy(opcao,"Instalando OCS");
			break;
		}
	}
	
	printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
	printf("* * *                       %s                       * * *\n",&opcao);
	printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
}

int main (){
	setlocale(LC_ALL,"Portuguese");
	
	int arq,op = 0,tru=1, i=0,j=0,h=0,k=0,l=0,usr=0,etapas[8], aux_2[8];
	char resp,pe,re,etapa='a',aux[2];
	
	arq = Sistema();
	while(tru){
		while( op < 1 || op > 20){
			Menu();
			setbuf(stdin,NULL);
			printf("-> Digite A Opcao: ");
			fflush(stdin);
			scanf("%d",&op);
		} 
		
		switch(op){
			/*Todos*/
			case 1:{
				
				Bitlocker();
				Usuarios();
				Politicas_Auditoria(1);
				Netplwiz(1);
				Log_Eventos(1);
				Politicas_Senha(1);
				Horario_Internet(1);
				Protecao_Tela(1);
				inicio = 0;
				
				printf("Deseja Reiniciar o Computador Para Efetuar as Mudanças? (s/n)\n-> ");
				setbuf(stdin,NULL);
				fflush(stdin);
				do{
					scanf("%c",&re);
				}while(re != 's' && re != 'S' && re != 'n' && re != 'N');
				
				if(re == 's' || re == 'S'){
					Ate_Logo(0);
					system("powershell.exe shutdown /r /t 0");
				}
				setbuf(stdin,NULL);
				fflush(stdin);
				break;
			}
			/*Auditorias*/
			case 4:{
				Politicas_Auditoria(0);
				break;
			}
			/* Logon Interativo */
			case 5:{
				Netplwiz(0);
				break;
			}
			/* Servico de Log */
			case 6:{
				Log_Eventos(0);
				break;
			}
			/* Politicas de Senha*/
			case 7:{
				Politicas_Senha(0);
				break;
			}
			/* Horario da Internet*/
			case 8:{
				Horario_Internet(0);
				break;
			}
			/* Protecao de Tela*/
			case 9:{
				Protecao_Tela(0);
				break;
			}
			/* Usuario Suporte */
			case 3:{
				Usuarios();
				break;
			}
			/* Criar Particao */
			case 2:{
				Bitlocker();
				break;
			}
			/* Reverter */
			case 10:{
				Usuarios();
				Politicas_Auditoria(2);
				Netplwiz(2);
				Log_Eventos(2);
				Politicas_Senha(2);
				Horario_Internet(2);
				Protecao_Tela(2);
				break;
			}
			/*Todos*/
			case 11:{
				printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
				printf("- - - - - - - - REALIZANDO INSTALACAO DE DRIVERS  - - - - - - - -\n");
				printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
				system("start Instalacao_Completa.bat");
				break;
			}
			/*e-pass*/
			case 12:{
				MostraOpcao(op);
				
					system("start %CD%\\Drivers\\ePass-Setup.exe");
					system("copy %CD%\\Drivers\\ePass.exe C:\\Users\\%username%\\Desktop");
				
				break;
			}
			/*safenet*/
			case 13:{
				MostraOpcao(op);
				
					system("start %CD%\\Drivers\\SafeNet.msi");
				
				break;
			}
			/*token admin*/
			case 14:{
				MostraOpcao(op);
				
					system("start %CD%\\Drivers\\Token-Admin.exe");
				
				break;
			}
			/*AWP*/
			case 15:{
				MostraOpcao(op);
				
					system("start %CD%\\Drivers\\AWP.exe");
				
				//Reiniciar Servico de Propagacao
				system("powershell.exe net stop CertPropSvc && net start CertPropSvc");
				break;
			}
			/*SISAGR e Emissor*/
			case 16:{
				MostraOpcao(op);
				system("copy %CD%\\Dispositivos\\Emissor.jnlp C:\\Users\\%username%\\Desktop");
				system("copy %CD%\\Dispositivos\\sisAGR.jnlp C:\\Users\\%username%\\Desktop");
				break;
			}
			/*Driver Camera*/
			case 17:{
				MostraOpcao(op);
				system("start %CD%\\Dispositivos\\Camera.exe");
				break;
			}
			/*Driver Leitor*/
			case 18:{
				MostraOpcao(op);
				system("start %CD%\\Dispositivos\\Leitor.exe");
				break;
			}
			/*OCS*/
			case 19:{
				MostraOpcao(op);
					system("start %CD%\\Drivers\\OCS.exe");
				break;
			}
			
			case 20:{
				printf("Deseja Reiniciar o Computador Para Efetuar as Mudanças? (s/n)\n-> ");
				setbuf(stdin,NULL);
				fflush(stdin);
				do{
					scanf("%c",&re);
				}while(re != 's' && re != 'S' && re != 'n' && re != 'N');
				
				Ate_Logo(0);
				if(re == 's' || re == 'S'){
					system("powershell.exe shutdown /r /t 0");
				}
				exit(0);
			}
		}
		
		op = 0;
		setbuf(stdin,NULL);
		printf("\n\n DESEJA REALIZAR NOVAS CONFIGURACOES? (s/n)\n");
		scanf("%c",&resp);
		if(resp != 's' && resp != 'S'){
			tru = 0;
		}
	}
	system("cls");
	Ate_Logo(1);
	
	return;
}
