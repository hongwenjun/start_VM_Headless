#include <windows.h>
#include <unistd.h>


void start_VM_Headless(void)
{

    char cmdline[] = "VBoxManage.exe  startvm  debian --type headless ";
    WinExec(cmdline, SW_HIDE);

}


void stop_VM_Headless(void)
{
    char cmdline[] = "VBoxManage.exe  controlvm  debian acpipowerbutton ";
    WinExec(cmdline, SW_HIDE);
}



int main(int argc, char* argv[])
{

    int result = MessageBox(NULL, TEXT("请选择启动 VM Headless服务(是)\n\n或者关闭 VM Headless服务(否)!"),
                            TEXT("简易 VirtualBox Headless 模式启动器!"), MB_ICONINFORMATION | MB_YESNO);


    chdir("C:\\Program Files\\Oracle\\VirtualBox\\");

    if (result == 6) {
        start_VM_Headless();
    } else if (result == 7) {
        stop_VM_Headless();
    }

    return result;
}
