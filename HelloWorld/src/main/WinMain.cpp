//
// Created by xiaoge on 2018/7/23.
//
#include <windows.h>
#include "resource.h"

LRESULT CALLBACK WndProc		(HWND, UINT, WPARAM, LPARAM) ;
BOOL    CALLBACK AboutDlgProc   (HWND, UINT, WPARAM, LPARAM) ;


int WINAPI WinMain (HINSTANCE hInstance, HINSTANCE hPrevInstance,
                    PSTR szCmdLine, int iCmdShow)  //MFC下的程序入口函数WinMain(),传统的dos程序是以main()作为程序入口的，这一点不同
{
    static TCHAR szAppName[] = TEXT ("ModeDia") ;
    HWND         hwnd ;             //定义窗口类句柄
    MSG          msg ;              //定义消息结构体变量
    WNDCLASS     wndclass ;         //定义窗口类结构体变量

    wndclass.style         = CS_HREDRAW | CS_VREDRAW ;      //改变窗口大小则重绘
    wndclass.lpfnWndProc   = WndProc ;                      //窗口函数为WindowProc()
    wndclass.cbClsExtra    = 0 ;                            //窗口类无扩展
    wndclass.cbWndExtra    = 0 ;                            //窗口实例无扩展
    wndclass.hInstance     = hInstance ;                    //注册窗口类实例句柄
    wndclass.hIcon         = LoadIcon (NULL, IDI_APPLICATION) ;         //使用光标箭头
    wndclass.hCursor       = LoadCursor (NULL, IDC_ARROW) ;             //指定鼠标箭头的样式
    wndclass.hbrBackground = (HBRUSH) GetStockObject (WHITE_BRUSH) ;    //窗口背景为白色
    wndclass.lpszMenuName  = szAppName ;                                //窗口默认菜单
    wndclass.lpszClassName = szAppName ;                                //窗口类名

    if (!RegisterClass (&wndclass))                                     //此为注册类的函数
    {
        MessageBox (NULL, TEXT ("This program requires Windows NT!"),
                    szAppName, MB_ICONERROR) ;
        return 0 ;
    }

//创建窗口的函数
    hwnd = CreateWindow (szAppName,                                      //窗口类名
                         TEXT ("A Dialog Program"),                      //窗口的名称
                         WS_OVERLAPPEDWINDOW,                            //重叠式窗口
                         CW_USEDEFAULT,                                  //窗口左上角在屏幕上的默认位置
                         CW_USEDEFAULT,
                         CW_USEDEFAULT,                                  //窗口的宽度和高度
                         CW_USEDEFAULT,
                         NULL,                                           //窗口无父类窗口
                         NULL,                                           //窗口无主菜单
                         hInstance,                                      //创建此窗口的实例句柄
                         NULL) ;                                         //此窗口无创建参数

    ShowWindow (hwnd, iCmdShow) ;                                        //显示窗口
    UpdateWindow (hwnd) ;                                                //不断的更新窗口的客户区

    while (GetMessage (&msg, NULL, 0, 0))                                //捕获消息
    {
        TranslateMessage (&msg) ;                                            //键盘消息转换
        DispatchMessage (&msg) ;                                             //派送消息给窗口函数
    }
    return msg.wParam ;                                                   //返回退出值
}

LRESULT CALLBACK WndProc (HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam) //窗口函数
{
    HDC         hdc ;
    PAINTSTRUCT ps ;
    RECT        rect ;
    static HINSTANCE hInstance;
    switch (message)
    {
        case WM_CREATE:
            hInstance = ((LPCREATESTRUCT) lParam) -> hInstance;
            return 0 ;

        case WM_COMMAND:
//switch (LOWORD (wParam))
//{
//case IDM_APP_ABOUT :
//DialogBox (hInstance, TEXT("AboutBox"), hwnd, AboutDlgProc);
//break;
//}
            return 0;
        case WM_PAINT:           //重画窗口客户区消息处理
            hdc = BeginPaint (hwnd, &ps) ;                          //定义设备句柄 获取要重画的窗口的设备描述表句柄

            GetClientRect (hwnd, &rect) ;

            DrawText (hdc, TEXT ("Hello, Windows 10!"), -1, &rect,
                      DT_SINGLELINE | DT_CENTER | DT_VCENTER) ;               //

            EndPaint (hwnd, &ps) ;                                  //结束重画
            return 0 ;

        case WM_DESTROY:        //撤销窗口消息处理
            PostQuitMessage (0) ;   //产生退出程序消息WM_QUIT
            return 0 ;
    }
    return DefWindowProc (hwnd, message, wParam, lParam) ;
}

BOOL CALLBACK AboutDlgProc(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
    switch (message)
    {
        case WM_INITDIALOG:
            return TRUE;

        case WM_COMMAND:
            switch (LOWORD(wParam))
            {
                case IDOK:
                case IDCANCEL:
                    EndDialog(hDlg, 0);
                    return TRUE;
            }
            break;
    }
    return FALSE;
}