#pragma once

#pragma warning(disable : 4996)

#define DATA_TRANSFIRE_MODE METHOD_NEITHER	// METHOD_BUFFERED, METHOD_OUT_DIRECT, METHOD_IN_DIRECT 


#define API_PROXY_CREATEFILE 0x8000
#define IOCTL_API_PROXY_CREATEFILE CTL_CODE(API_PROXY_CREATEFILE, 0x800, DATA_TRANSFIRE_MODE, FILE_ANY_ACCESS)

#define API_PROXY_OPENFILE 0x8001
#define IOCTL_API_PROXY_OPENFILE CTL_CODE(API_PROXY_OPENFILE, 0x800, DATA_TRANSFIRE_MODE, FILE_ANY_ACCESS)

#define API_PROXY_DELETEFILE 0x8002
#define IOCTL_API_PROXY_DELETEFILE CTL_CODE(API_PROXY_DELETEFILE, 0x800, DATA_TRANSFIRE_MODE, FILE_ANY_ACCESS)

#define API_PROXY_WRITEFILE 0x8003
#define IOCTL_API_PROXY_WRITEFILE CTL_CODE(API_PROXY_WRITEFILE, 0x800, DATA_TRANSFIRE_MODE, FILE_ANY_ACCESS)

#define API_PROXY_READFILE 0x8004
#define IOCTL_API_PROXY_READFILE CTL_CODE(API_PROXY_READFILE, 0x800, DATA_TRANSFIRE_MODE, FILE_ANY_ACCESS)

#define API_PROXY_TERMINATE_PROCESS 0x8005
#define IOCTL_API_PROXY_TERMINATE_PROCESS CTL_CODE(API_PROXY_TERMINATE_PROCESS, 0x800, DATA_TRANSFIRE_MODE, FILE_ANY_ACCESS)

#define API_PROXY_CLOSE_HANDLE 0x8006
#define IOCTL_API_PROXY_CLOSE_HANDLE CTL_CODE(API_PROXY_CLOSE_HANDLE, 0x800, DATA_TRANSFIRE_MODE, FILE_ANY_ACCESS)

#define API_PROXY_GET_PID_FROM_PROCESSNAME 0x8007
#define IOCTL_API_PROXY_GET_PID_FROM_PROCESSNAME CTL_CODE(API_PROXY_GET_PID_FROM_PROCESSNAME, 0x800, DATA_TRANSFIRE_MODE, FILE_ANY_ACCESS)

#define API_PROXY_GET_FILE_SIZE_FROM_HANDLE 0x8008
#define IOCTL_API_PROXY_GET_FILE_SIZE_FROM_HANDLE CTL_CODE(API_PROXY_GET_FILE_SIZE_FROM_HANDLE, 0x800, DATA_TRANSFIRE_MODE, FILE_ANY_ACCESS)

#define API_PROXY_OPEN_PROCESS 0x8013
#define IOCTL_API_PROXY_OPEN_PROCESS CTL_CODE(API_PROXY_OPEN_PROCESS, 0x800, DATA_TRANSFIRE_MODE, FILE_ANY_ACCESS)

#define API_PROXY_OPEN_THREAD 0x8019
#define IOCTL_API_PROXY_OPEN_THREAD CTL_CODE(API_PROXY_OPEN_THREAD, 0x800, DATA_TRANSFIRE_MODE, FILE_ANY_ACCESS)

#define API_PROXY_QUERY_SYSTEM_INFORMATION 0x8020
#define IOCTL_API_PROXY_QUERY_SYSTEM_INFORMATION CTL_CODE(API_PROXY_QUERY_SYSTEM_INFORMATION, 0x800, DATA_TRANSFIRE_MODE, FILE_ANY_ACCESS)

#define API_PROXY_ALLOCATE_MEMORY_IN_PROCESS_USING_HANDLE 0x8014
#define IOCTL_API_PROXY_ALLOCATE_MEMORY_IN_PROCESS_USING_HANDLE CTL_CODE(API_PROXY_ALLOCATE_MEMORY_IN_PROCESS_USING_HANDLE, 0x800, DATA_TRANSFIRE_MODE, FILE_ANY_ACCESS)

#define API_PROXY_WRITE_PROCESS_MEMORY 0x8017
#define IOCTL_API_PROXY_WRITE_PROCESS_MEMORY CTL_CODE(API_PROXY_WRITE_PROCESS_MEMORY, 0x800, DATA_TRANSFIRE_MODE, FILE_ANY_ACCESS)

#define API_PROXY_READ_PROCESS_MEMORY 0x8018
#define IOCTL_API_PROXY_READ_PROCESS_MEMORY CTL_CODE(API_PROXY_READ_PROCESS_MEMORY, 0x800, DATA_TRANSFIRE_MODE, FILE_ANY_ACCESS)

#define API_PROXY_SUSPEND_PROCESS 0x8021
#define IOCTL_API_PROXY_SUSPEND_PROCESS CTL_CODE(API_PROXY_SUSPEND_PROCESS, 0x800, DATA_TRANSFIRE_MODE, FILE_ANY_ACCESS)

#define API_PROXY_RESUME_PROCESS 0x8022
#define IOCTL_API_PROXY_RESUME_PROCESS CTL_CODE(API_PROXY_RESUME_PROCESS, 0x800, DATA_TRANSFIRE_MODE, FILE_ANY_ACCESS)

#define API_PROXY_CREATE_SECTION 0x8025
#define IOCTL_API_PROXY_CREATE_SECTION CTL_CODE(API_PROXY_CREATE_SECTION, 0x800, DATA_TRANSFIRE_MODE, FILE_ANY_ACCESS)

#define API_PROXY_MAP_VIEW_OF_SECTION 0x8026
#define IOCTL_API_PROXY_MAP_VIEW_OF_SECTION CTL_CODE(API_PROXY_MAP_VIEW_OF_SECTION, 0x800, DATA_TRANSFIRE_MODE, FILE_ANY_ACCESS)

#define API_PROXY_UNMAP_VIEW_OF_SECTION 0x8027
#define IOCTL_API_PROXY_UNMAP_VIEW_OF_SECTION CTL_CODE(API_PROXY_UNMAP_VIEW_OF_SECTION, 0x800, DATA_TRANSFIRE_MODE, FILE_ANY_ACCESS)

#define API_PROXY_OPEN_SECTION 0x8028
#define IOCTL_API_PROXY_OPEN_SECTION CTL_CODE(API_PROXY_OPEN_SECTION, 0x800, DATA_TRANSFIRE_MODE, FILE_ANY_ACCESS)

#define API_PROXY_SET_THREAD_CONTEXT 0x8029
#define IOCTL_API_PROXY_SET_THREAD_CONTEXT CTL_CODE(API_PROXY_SET_THREAD_CONTEXT, 0x800, DATA_TRANSFIRE_MODE, FILE_ANY_ACCESS)

#define API_PROXY_GET_THREAD_CONTEXT 0x8030
#define IOCTL_API_PROXY_GET_THREAD_CONTEXT CTL_CODE(API_PROXY_GET_THREAD_CONTEXT, 0x800, DATA_TRANSFIRE_MODE, FILE_ANY_ACCESS)

#define API_PROXY_VIRTUAL_PROTECT 0x8031
#define IOCTL_API_PROXY_VIRTUAL_PROTECT CTL_CODE(API_PROXY_VIRTUAL_PROTECT, 0x800, DATA_TRANSFIRE_MODE, FILE_ANY_ACCESS)

#define API_PROXY_QUEUE_APC 0x8015
#define IOCTL_API_PROXY_QUEUE_APC CTL_CODE(API_PROXY_QUEUE_APC, 0x800, DATA_TRANSFIRE_MODE, FILE_ANY_ACCESS)


#define API_PROXY_LOAD_DRIVER 0x8032
#define IOCTL_API_PROXY_LOAD_DRIVER CTL_CODE(API_PROXY_LOAD_DRIVER, 0x800, DATA_TRANSFIRE_MODE, FILE_ANY_ACCESS)

#define API_PROXY_UNLOAD_DRIVER 0x8033
#define IOCTL_API_PROXY_UNLOAD_DRIVER CTL_CODE(API_PROXY_UNLOAD_DRIVER, 0x800, DATA_TRANSFIRE_MODE, FILE_ANY_ACCESS)

#define API_PROXY_FREE_MEMORY_IN_PROCESS_USING_HANDLE 0x8034
#define IOCTL_API_PROXY_FREE_MEMORY_IN_PROCESS_USING_HANDLE CTL_CODE(API_PROXY_FREE_MEMORY_IN_PROCESS_USING_HANDLE, 0x800, DATA_TRANSFIRE_MODE, FILE_ANY_ACCESS)

#define API_PROXY_CREATE_REGISTRY_KEY 0x8009
#define IOCTL_API_PROXY_CREATE_REGISTRY_KEY CTL_CODE(API_PROXY_CREATE_REGISTRY_KEY, 0x800, DATA_TRANSFIRE_MODE, FILE_ANY_ACCESS)

#define API_PROXY_OPEN_REGISTRY_KEY 0x8035
#define IOCTL_API_PROXY_OPEN_REGISTRY_KEY CTL_CODE(API_PROXY_OPEN_REGISTRY_KEY, 0x800, DATA_TRANSFIRE_MODE, FILE_ANY_ACCESS)

#define API_PROXY_REGISTRY_SET_KEY 0x8011
#define IOCTL_API_PROXY_REGISTRY_SET_KEY CTL_CODE(API_PROXY_REGISTRY_SET_KEY, 0x800, DATA_TRANSFIRE_MODE, FILE_ANY_ACCESS)

#define API_PROXY_DELETE_REGISTRY_KEY 0x8010
#define IOCTL_API_PROXY_DELETE_REGISTRY_KEY CTL_CODE(API_PROXY_DELETE_REGISTRY_KEY, 0x800, DATA_TRANSFIRE_MODE, FILE_ANY_ACCESS)

#define API_PROXY_REGISTRY_QUERY_KEY_VALUE 0x8012
#define IOCTL_API_PROXY_REGISTRY_QUERY_KEY_VALUE CTL_CODE(API_PROXY_REGISTRY_QUERY_KEY_VALUE, 0x800, DATA_TRANSFIRE_MODE, FILE_ANY_ACCESS)


#define API_PROXY_WSAStartup 0x8036
#define IOCTL_API_PROXY_WSAStartup CTL_CODE(API_PROXY_WSAStartup, 0x800, DATA_TRANSFIRE_MODE, FILE_ANY_ACCESS)

#define API_PROXY_WSACleanup 0x8037
#define IOCTL_API_PROXY_WSACleanup CTL_CODE(API_PROXY_WSACleanup, 0x800, DATA_TRANSFIRE_MODE, FILE_ANY_ACCESS)

#define API_PROXY_GetAddrInfo 0x8038
#define IOCTL_API_PROXY_GetAddrInfo CTL_CODE(API_PROXY_GetAddrInfo, 0x800, DATA_TRANSFIRE_MODE, FILE_ANY_ACCESS)

#define API_PROXY_Socket 0x8039
#define IOCTL_API_PROXY_Socket CTL_CODE(API_PROXY_Socket, 0x800, DATA_TRANSFIRE_MODE, FILE_ANY_ACCESS)

#define API_PROXY_Connect 0x8040
#define IOCTL_API_PROXY_Connect CTL_CODE(API_PROXY_Connect, 0x800, DATA_TRANSFIRE_MODE, FILE_ANY_ACCESS)

#define API_PROXY_Send 0x8041
#define IOCTL_API_PROXY_Send CTL_CODE(API_PROXY_Send, 0x800, DATA_TRANSFIRE_MODE, FILE_ANY_ACCESS)

#define API_PROXY_Recv 0x8042
#define IOCTL_API_PROXY_Recv CTL_CODE(API_PROXY_Recv, 0x800, DATA_TRANSFIRE_MODE, FILE_ANY_ACCESS)

#define API_PROXY_CloseSocket 0x8043
#define IOCTL_API_PROXY_CloseSocket CTL_CODE(API_PROXY_CloseSocket, 0x800, DATA_TRANSFIRE_MODE, FILE_ANY_ACCESS)

#define API_PROXY_listen 0x8044
#define IOCTL_API_PROXY_listen CTL_CODE(API_PROXY_listen, 0x800, DATA_TRANSFIRE_MODE, FILE_ANY_ACCESS)

#define API_PROXY_Bind 0x8045
#define IOCTL_API_PROXY_Bind CTL_CODE(API_PROXY_Bind, 0x800, DATA_TRANSFIRE_MODE, FILE_ANY_ACCESS)

#define API_PROXY_Accept 0x8046
#define IOCTL_API_PROXY_Accept CTL_CODE(API_PROXY_Accept, 0x800, DATA_TRANSFIRE_MODE, FILE_ANY_ACCESS)

#define API_PROXY_FreeAddrInfo 0x8047
#define IOCTL_API_PROXY_FreeAddrInfo CTL_CODE(API_PROXY_FreeAddrInfo, 0x800, DATA_TRANSFIRE_MODE, FILE_ANY_ACCESS)

//TODO
//add netwoek API

#define API_PROXY_SendTo 0x8048
#define IOCTL_API_PROXY_SendTo CTL_CODE(API_PROXY_SendTo, 0x800, DATA_TRANSFIRE_MODE, FILE_ANY_ACCESS)

#define API_PROXY_RecvFrom 0x8049
#define IOCTL_API_PROXY_RecvFrom CTL_CODE(API_PROXY_RecvFrom, 0x800, DATA_TRANSFIRE_MODE, FILE_ANY_ACCESS)

//
#define API_PROXY_CREATE_REMOTE_THREAD 0x8016
#define IOCTL_API_PROXY_CREATE_REMOTE_THREAD CTL_CODE(API_PROXY_CREATE_REMOTE_THREAD, 0x800, DATA_TRANSFIRE_MODE, FILE_ANY_ACCESS)

#define API_PROXY_SUSPEND_THREAD 0x8023
#define IOCTL_API_PROXY_SUSPEND_THREAD CTL_CODE(API_PROXY_SUSPEND_THREAD, 0x800, DATA_TRANSFIRE_MODE, FILE_ANY_ACCESS)

#define API_PROXY_RESUME_THREAD 0x8024
#define IOCTL_API_PROXY_RESUME_THREAD CTL_CODE(API_PROXY_RESUME_THREAD, 0x800, DATA_TRANSFIRE_MODE, FILE_ANY_ACCESS)









