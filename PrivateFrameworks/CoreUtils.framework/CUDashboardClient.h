/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUDashboardClient : NSObject {
    union { 
        struct sockaddr { 
            unsigned char sa_len; 
            unsigned char sa_family; 
            BOOL sa_data[14]; 
        } sa; 
        struct sockaddr_in { 
            unsigned char sin_len; 
            unsigned char sin_family; 
            unsigned short sin_port; 
            struct in_addr { 
                unsigned int s_addr; 
            } sin_addr; 
            BOOL sin_zero[8]; 
        } v4; 
        struct sockaddr_in6 { 
            unsigned char sin6_len; 
            unsigned char sin6_family; 
            unsigned short sin6_port; 
            unsigned int sin6_flowinfo; 
            struct in6_addr { 
                union { 
                    unsigned char __u6_addr8[16]; 
                    unsigned short __u6_addr16[8]; 
                    unsigned int __u6_addr32[4]; 
                } __u6_addr; 
            } sin6_addr; 
            unsigned int sin6_scope_id; 
        } v6; 
    }  _destAddr;
    unsigned int  _destLen;
    unsigned char  _key;
    BOOL  _model;
    BOOL  _osBuild;
    NSString * _server;
    int  _sock;
    unsigned char  _udid;
}

@property (nonatomic, copy) NSString *server;

- (void).cxx_destruct;
- (int)_activate;
- (int)_logCStr:(const char *)arg1 length:(unsigned long long)arg2;
- (int)_setupSocket;
- (int)activate;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (int)logJSON:(id)arg1;
- (int)logf:(const char *)arg1;
- (int)logv:(const char *)arg1 args:(char *)arg2;
- (id)server;
- (void)setServer:(id)arg1;

@end
