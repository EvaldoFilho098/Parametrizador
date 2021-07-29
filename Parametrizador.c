#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

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
		verificacao += system("auditpol.exe /set /category:\"{6997984A-797A-11D9-BED3-505054503030}\" /success:enable /failure:enable");
		verificacao +=system("auditpol.exe /set /category:\"{6997984F-797A-11D9-BED3-505054503030}\" /success:enable /failure:enable");
		verificacao +=system("auditpol.exe /set /category:\"{6997984D-797A-11D9-BED3-505054503030}\" /success:enable /failure:enable");
		verificacao +=system("auditpol.exe /set /category:\"{6997984E-797A-11D9-BED3-505054503030}\" /success:enable /failure:enable");
		verificacao +=system("auditpol.exe /set /category:\"{69979850-797A-11D9-BED3-505054503030}\" /success:enable /failure:enable");
		verificacao +=system("auditpol.exe /set /category:\"{69979849-797A-11D9-BED3-505054503030}\" /success:enable /failure:enable");
		verificacao +=system("auditpol.exe /set /category:\"{6997984C-797A-11D9-BED3-505054503030}\" /success:enable /failure:enable");
		verificacao +=system("auditpol.exe /set /category:\"{69979848-797A-11D9-BED3-505054503030}\" /success:enable /failure:enable");
		verificacao +=system("auditpol.exe /set /category:\"{6997984B-797A-11D9-BED3-505054503030}\" /success:enable /failure:enable");
	}else if (op == 2){
		printf("- - - - - DESFAZENDO POLITICAS DE AUDITORIA - - - - - - \n");
		verificacao += system("auditpol.exe /set /category:\"{6997984A-797A-11D9-BED3-505054503030}\" /success:disable /failure:disable");
		verificacao +=system("auditpol.exe /set /category:\"{6997984F-797A-11D9-BED3-505054503030}\" /success:disable /failure:disable");
		verificacao +=system("auditpol.exe /set /category:\"{6997984D-797A-11D9-BED3-505054503030}\" /success:disable /failure:disable");
		verificacao +=system("auditpol.exe /set /category:\"{6997984E-797A-11D9-BED3-505054503030}\" /success:disable /failure:disable");
		verificacao +=system("auditpol.exe /set /category:\"{69979850-797A-11D9-BED3-505054503030}\" /success:disable /failure:disable");
		verificacao +=system("auditpol.exe /set /category:\"{69979849-797A-11D9-BED3-505054503030}\" /success:disable /failure:disable");
		verificacao +=system("auditpol.exe /set /category:\"{6997984C-797A-11D9-BED3-505054503030}\" /success:disable /failure:disable");
		verificacao +=system("auditpol.exe /set /category:\"{69979848-797A-11D9-BED3-505054503030}\" /success:disable /failure:disable");
		verificacao +=system("auditpol.exe /set /category:\"{6997984B-797A-11D9-BED3-505054503030}\" /success:disable /failure:disable");
	}
	
	if(verificacao != 0){	
		printf("- - - - - - VERIFICAR POLITICAS DE AUDITORIA! - - - - - -\n");
	}else{
		printf("- - - - - - - -- - - - COMPLETO ! - - - - - - - - - - - -\n");
	}
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
		verificacao += system("powershell.exe set-itemproperty -path HKLM:/Software/Microsoft/Windows/CurrentVersion/Policies/System/ -name DontDisplayLastUserName -type DWORD  -value 1");
		verificacao += system("powershell.exe set-itemproperty -path HKLM:/Software/Microsoft/Windows/CurrentVersion/Policies/System/ -name DisableCAD -type DWORD  -value 0");
	}else if(op == 2){
		printf("DESFAZENDO CONFIGURACOES DE LOGON INTERATIVO(NETPLWIZ)\n");
		verificacao += system("powershell.exe set-itemproperty -path HKLM:/Software/Microsoft/Windows/CurrentVersion/Policies/System/ -name DontDisplayLastUserName -type DWORD  -value 0");
		verificacao += system("powershell.exe set-itemproperty -path HKLM:/Software/Microsoft/Windows/CurrentVersion/Policies/System/ -name DisableCAD -type DWORD  -value 1");
	}
	
	if(verificacao != 0){
		printf("- - - VERIFICAR CONFIGURACOES DE LOGON INTERATIVO!  - - -\n");
	}else{
		printf("- - - - - - - -- - - - COMPLETO ! - - - - - - - - - - - -\n");
	}
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
		verificacao += system("powershell.exe REG ADD HKLM\\SOFTWARE\\Policies\\Microsoft\\Windows\\EventLog\\Security");
		if(verificacao == 0){
			verificacao += system("powershell.exe New-ItemProperty -path HKLM:\\Software\\Policies\\Microsoft\\Windows\\EventLog\\Security\\ -Name MaxSize -PropertyType DWORD  -Value 20480 -Force");
			verificacao += system("powershell.exe New-ItemProperty -path HKLM:\\Software\\Policies\\Microsoft\\Windows\\EventLog\\Security\\ -Name AutoBackupLogFiles -PropertyType String -Value 1 -Force");
		}else{
			verificacao = 0;
			verificacao += system("powershell.exe set-itemproperty -path HKLM:\\Software\\Policies\\Microsoft\\Windows\\EventLog\\Security\\ -name MaxSize -type DWORD  -value 20480 -Force");
			verificacao += system("powershell.exe set-itemproperty -path HKLM:\\Software\\Policies\\Microsoft\\Windows\\EventLog\\Security\\ -name AutoBackupLogFiles -value 1 -Force");
		}
	}else if( op == 2){
		printf("- - -  DESFAZENDO CONFIGURACOES DE LOG DE EVENTOS - - - -\n");
		verificacao += system("powershell.exe REG DELETE HKLM\\SOFTWARE\\Policies\\Microsoft\\Windows\\EventLog\\Security");
	}	
	
	verificacao += system("gpupdate /force /target:computer");
	if(verificacao != 0){
		
		printf("- VERIFICAR CONFIGURACOES DE SERVICO DE LOG DE EVENTOS! -\n");
	}else{
		printf("- - - - - - - -- - - - COMPLETO ! - - - - - - - - - - - -\n");
	}
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
	 	}else{
	 		printf("Iniciando...\n");
	 		fread(config, sizeof(char), 8700,fp);
	 		fwrite(config, sizeof(char), 8700,fc);
	 		fclose(fp);
	 		fclose(fc);
	 		verificacao += system("powershell.exe secedit.exe /configure /db \\securitynew.sdb /cfg C:\\secconfig.cfg /areas SECURITYPOLICY");
	 		if(verificacao != 0){
	 			
				printf("- - -VERIFICAR CONFIGURACOES DE POLITICA DE SENHAS!- - - \n");
			}else{
				printf("- - - - - - - -- - - - COMPLETO ! - - - - - - - - - - - -\n");
			}
	 	}
 	}else if(op == 2){
 		printf("- - - DESFAZENDO CONFIGURACOES DE POLITICAS DE SENHA - - -\n");
	 	if ((fp=fopen ("Desconfigurar.txt","r"))==NULL || (fc=fopen ("C:/secconfig.cfg","w"))==NULL  ){
	 		printf ("Erro na abertura do arquivo\n");
	 		
	 		printf("- - VERIFICAR CONFIGURACOES DE POLITICA DE SENHAS! - - - \n");
	 	}else{
	 		printf("Iniciando...\n");
	 		fread(config, sizeof(char), 8700,fp);
	 		fwrite(config, sizeof(char), 8700,fc);
	 		fclose(fp);
	 		fclose(fc);
	 		verificacao += system("powershell.exe secedit.exe /configure /db \\securitynew.sdb /cfg C:\\secconfig.cfg /areas SECURITYPOLICY");
	 		if(verificacao != 0){
	 			
				printf("- - -VERIFICAR CONFIGURACOES DE POLITICA DE SENHAS!- - - \n");
			}else{
				printf("- - - - - - - -- - - - COMPLETO ! - - - - - - - - - - - -\n");
			}
	 	}
	}
}

void Horario_Internet(int op){
	
	int verificacao = 0,t=0;
	
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
		verificacao += system("powershell.exe REG IMPORT Servidores.txt");
		verificacao += system("powershell.exe w32tm /config /syncfromflags:manual /manualpeerlist:ntp1.acsoluti.com.br");
	}else{
		printf("- -  DESFAZENDO CONFIGURACOES DE HORARIO DA INTERNET - - \n");
		verificacao += system("powershell.exe w32tm /config /syncfromflags:manual /manualpeerlist:time.windows.com");
	}
	verificacao += system("w32tm /config /update");
	t = 1;
	do{
		verificacao += system("w32tm /resync");
		if (verificacao == 0)
			t=3;
		else
			t++;
		
	}while(t != 3);
	
	if(verificacao != 0){
		printf(" - - VERIFICAR CONFIGURACOES DE HORARIO DA INTERNET! - - \n");
	}else{
		printf("- - - - - - - -- - - - COMPLETO ! - - - - - - - - - - - -\n");
	}
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
		verificacao += system("powershell.exe REG ADD HKCU\\Software\\Policies\\Microsoft\\Windows\\'Control Panel'\\Desktop");
		if(verificacao != 0){
			verificacao += system("powershell.exe new-itemproperty -path HKCU:\\Software\\Policies\\Microsoft\\Windows\\'Control Panel'\\Desktop\\ -name ScreenSaveActive -type String -value 1");
			verificacao += system("powershell.exe new-itemproperty -path HKCU:\\Software\\Policies\\Microsoft\\Windows\\'Control Panel'\\Desktop\\ -name ScreenSaveTimeOut -type String -value 120");
			verificacao += system("powershell.exe new-itemproperty -path HKCU:\\Software\\Policies\\Microsoft\\Windows\\'Control Panel'\\Desktop\\ -name ScreenSaverIsSecure -type String -value 1");
			verificacao += system("powershell.exe new-itemproperty -path HKCU:\\Software\\Policies\\Microsoft\\Windows\\'Control Panel'\\Desktop\\ -name SCRNSAVE.EXE  -type String -value C:\\Windows\\System32\\scrnsave.scr");
		}else{
			verificacao = 0;
			verificacao += system("powershell.exe set-itemproperty -path HKCU:\\Software\\Policies\\Microsoft\\Windows\\'Control Panel'\\Desktop\\ -name ScreenSaveActive -type String -value 1");
			verificacao += system("powershell.exe set-itemproperty -path HKCU:\\Software\\Policies\\Microsoft\\Windows\\'Control Panel'\\Desktop\\ -name ScreenSaveTimeOut -type String -value 120");
			verificacao += system("powershell.exe set-itemproperty -path HKCU:\\Software\\Policies\\Microsoft\\Windows\\'Control Panel'\\Desktop\\ -name ScreenSaverIsSecure -type String -value 1");
			verificacao += system("powershell.exe set-itemproperty -path HKCU:\\Software\\Policies\\Microsoft\\Windows\\'Control Panel'\\Desktop\\ -name SCRNSAVE.EXE  -type String -value C:\\Windows\\System32\\scrnsave.scr");
		}
		
	}else if(op == 2){
		
		printf("- - - DESFAZENDO CONFIGURACOES DE PROTECAO DE TELA - - - \n");
		verificacao += system("powershell.exe REG DELETE HKCU\\Software\\Policies\\Microsoft\\Windows\\'Control Panel'\\Desktop");
	}
	
	verificacao += system("gpupdate /force /target:computer");
	
	if(verificacao != 0){
			printf("- - - VERIFICAR CONFIGURACOES DE PROTECAO DE TELA! - - - \n");
		}else{
			printf("- - - - - - - -- - - - COMPLETO ! - - - - - - - - - - - -\n");
		}
}

void Usuarios(){
	
	int verificacao = 0, us = 0, ty = 0, alt=0;
	char aux[30], username[30], pass[30], comando[256], g;
	
	while(us < 1 || us > 3){
		printf("- - - - - - - - - CONTROLE DE USUARIOS - - - - - - - - - \n");
		printf("- USUARIOS EXISTENTES:\n");
		system("Net Users");
		printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
		printf("- Digite A Opcao Desejada:\n");
		printf("- 1) Alterar Usuario Existente\n");
		printf("- 2) Criar Novo Usuario\n");
		printf("- 3) Sair do Controle de Usuarios\n");
		printf("- > ");
			setbuf(stdin,NULL);
			scanf("%d",&us);
	
		switch(us){
			case 1:{
				printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
				printf("- Digite o nome de usuario que deseja alterar:\n- > ");
				fflush(stdin);
				setbuf(stdin,NULL);
				scanf("%s",&aux);
				strcpy(username,aux);
				printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
				printf("- 1) Mudar Senha\n");
				printf("- 2) Alterar Prioridade\n");
				printf("- > ");
				while(alt != 1 && alt != 2){
					setbuf(stdin,NULL);
					scanf("%d",&alt);
				}
				if(alt == 1){	
					printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
					printf("- Digite a nova senha:\n- > ");
					fflush(stdin);
					scanf("%s",&aux);
					strcpy(pass,aux);
					sprintf(comando,"powershell.exe net user %s %s",username,pass);
					verificacao += system(comando);
					//sprintf("powershell.exe WMIC USERACCOUNT WHERE \"name='%s'\" SET PasswordExpires=False",username);
					//verificacao += system(comando);
				}else{
					printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
					printf("- 1) Voltar � Conta Local\n- 2) Tornar Administrador\n- > ");
					while(ty != 1 && ty != 2){
						setbuf(stdin,NULL);
						scanf("%d",&ty);
					}
					if(ty == 1){
						sprintf(comando,"powershell.exe net localgroup administradores %s /delete",username);
						verificacao += system(comando);
						sprintf(comando,"powershell.exe net localgroup usu�rios %s /add",username);
						verificacao += system(comando);
					}else{
						sprintf(comando,"powershell.exe net localgroup administradores %s /add",username);
						verificacao += system(comando);
					}
				}
				break;
			}
			case 2:{
				printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
				printf("- Digite o nome de usuario que deseja criar:\n- > ");
				fflush(stdin);
				scanf("%s",&aux);
				strcpy(username,aux);
				printf("- Digite a senha:\n- > ");
				fflush(stdin);
				scanf("%s",&aux);
				strcpy(pass,aux);
				sprintf(comando,"powershell.exe net user %s %s /fullname:\"%s\" /comment:\"%s\" /EXPIRES:NEVER /add",username,pass,username,username);
				verificacao += system(comando);
				sprintf(comando,"WMIC USERACCOUNT WHERE \"name='%s'\" SET PasswordExpires=False",username);
				verificacao += system(comando);
				printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
				sprintf(comando,"powershell.exe net localgroup usu�rios %s /add",username);
				system(comando);
				printf("- 1) Conta Local\n- 2) Administrador\n- > ");
				while(ty != 1 && ty != 2){
					setbuf(stdin,NULL);
					scanf("%d",&ty);
				}
				if(ty == 2 ){
					sprintf(comando,"powershell.exe net localgroup administradores %s /add",username);
					verificacao += system(comando);
				}
				break;
			}
			
			case 3:{
				return;
			}
			
		}
		
		if(verificacao != 0){
				printf(" - - - VERIFICAR CONFIGURACOES DE USUARIO - - - -  - - - \n");
				
			}else{
				printf("- - - - - - - -- - - - COMPLETO ! - - - - - - - - - - - -\n");
		}
		
		printf("- Deseja verificar no gerenciador ?(s/n)\n-> ");
		fflush(stdin);
		setbuf(stdin,NULL);
		scanf("%g",&g);
		if(g == 's' || g == 'S')
			verificacao += system("lusrmgr.msc");
	}
}

void Bitlocker(){
	int disco,volume;
	char agr[20], comando[100], aux[100];
	FILE *scripts;
	
	
	printf("- - - - - - - - - - - - GERENCIANDO BITLOCKER - - - - - - - - - - - -\n\n");
	//Mostra
	system("powershell.exe diskpart /s listagem.txt");
	
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
	
	system("powershell.exe diskpart /s Script01.txt");
	system("powershell.exe diskpart /s listagem.txt");
	
	printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n");
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
	
	system("powershell.exe diskpart /s Script02.txt");
	
	printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n");
	printf("- Insira O Nome do AGR - \n");
	printf("- Nome >");
	fflush(stdin);
	setbuf(stdin,NULL);
	scanf("%s",&agr);
	strcpy(comando,"manage-bde -on S: -recoverypassword > C:\\Users\\\%username\%\\Desktop\\\"AGR - ");
	sprintf(aux,"%s Chave de Recuperacao de Bitlocker\".txt",agr);
	system(comando);
	//system("manage-bde -on S: -recoverypassword > C:\\Users\\%username%\\Desktop\\\"AGR - Chave de Recuperacao de Bitlocker\".txt");
	system("manage-bde -protectors -add S: -pw");
	printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n");
}

void Ate_Logo(){
	printf("\n\n");
	printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
	printf("* * *                       ATE LOGO!                       * * *\n");
	printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
	system("pause");
	exit(2);
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
	scanf("%c",&opcao);
	
	if(opcao == 's' || opcao == 'S'){
		return arq;
	}else{
		printf("\n\n");
		Ate_Logo();
		system("pause");
		exit(2);
	}
}

void Menu(){	
	system("cls");
	printf(" * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
	printf(" *                             PARAMETRIZACAO                            *\n");
	printf(" *                                                                       *\n");
	printf(" *          CONFIGURACOES            *           DRIVERS                 *\n");
	printf(" * ================================= * ================================= *\n");
	printf(" * 1. Todas                          * 11. Todos                         *\n");
	printf(" * 2. Auditorias                     * 12. E-pass                        *\n");
	printf(" * 3. Logon Interarivo(Netplwiz)     * 13. Safenet                       *\n");
	printf(" * 4. Servico de Log de Eventos      * 14. Token Admin                   *\n");
	printf(" * 5. Politicas de Senha             * 15. AWP                           *\n");
	printf(" * 6. Horario da Internet            * 16. SISAGR e Emissor              *\n");
	printf(" * 7. Protecao de Tela               * 17. Driver Camera                 *\n");
	printf(" * 8. Usuarios                       * 18. Driver Leitor Biometrico      *\n");
	printf(" * 9. Particao e Bitlocker           * 19. OCS                           *\n");
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
	
	int arq,op = 0,tru=1, i=0,j=0,h=0,k=0,l=0,etapas[8], aux_2[8];
	char resp,pe,etapa='a',aux[2];
	
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
				printf("- Deseja pular alguma etapa? (s/n)\n-> ");
				setbuf(stdin,NULL);
				fflush(stdin);
				scanf("%c",&pe);
				if(pe == 's' || pe == 'S'){
					printf("-> Digite o numero das etapas que deseja pular [Ex: 1 5 6]\n-> ");
					setbuf(stdin,NULL);
					fflush(stdin);
					while( etapa != '\n'){
						scanf("%c",&etapa);
						if(etapa > 49 && etapa <= 57){
							aux[0] = etapa;
							aux_2[i] = atoi(aux);
							i++;
						}
					}
					
					for(j=2;j<10;j++){
						h=0;
						for(k=0;k<i;k++){
							if(aux_2[k] != j){
								h++;
							}
							if(h == i){
								etapas[l] = j;
								l++;
							}
						}
					}
					
					
					for(j=0;j<k;j++){
						switch(etapas[j]){
							case 2:{
								Politicas_Auditoria(1);
							}
							case 3:{
								Netplwiz(1);
							}
							case 4:{
								Log_Eventos(1);
							}
							case 5:{
								Log_Eventos(1);
							}
							case 6:{
								Politicas_Senha(1);
							}
							case 7:{
								Horario_Internet(1);
							}
							case 8:{
								Usuarios();
							}
							case 9:{
								Bitlocker();
							}
						}
					}
					
				}else{
					Bitlocker();
					Usuarios();
					Politicas_Auditoria(1);
					Netplwiz(1);
					Log_Eventos(1);
					Politicas_Senha(1);
					Horario_Internet(1);
					Protecao_Tela(1);
				}
				setbuf(stdin,NULL);
				fflush(stdin);
				break;
			}
			/*Auditorias*/
			case 2:{
				Politicas_Auditoria(0);
				break;
			}
			/* Logon Interativo */
			case 3:{
				Netplwiz(0);
				break;
			}
			/* Servico de Log */
			case 4:{
				Log_Eventos(0);
				break;
			}
			/* Politicas de Senha*/
			case 5:{
				Politicas_Senha(0);
				break;
			}
			/* Horario da Internet*/
			case 6:{
				Horario_Internet(0);
				break;
			}
			/* Protecao de Tela*/
			case 7:{
				Protecao_Tela(0);
				break;
			}
			/* Usuario Suporte */
			case 8:{
				Usuarios();
				break;
			}
			/* Criar Particao */
			case 9:{
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
				Ate_Logo();
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
	Ate_Logo();
	
	return;
}
