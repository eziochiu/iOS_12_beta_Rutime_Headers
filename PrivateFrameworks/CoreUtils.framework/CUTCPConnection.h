/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUTCPConnection : NSObject <CUReadWriteRequestable> {
    id /* block */  _activateCompletion;
    double  _connectTimeoutSecs;
    struct AsyncConnection { } * _connector;
    double  _dataTimeoutSecs;
    int  _defaultPort;
    CUBonjourDevice * _destinationBonjour;
    NSString * _destinationString;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _errorHandler;
    unsigned int  _flags;
    unsigned long long  _ifExtendedFlags;
    unsigned int  _ifFlags;
    unsigned int  _ifIndex;
    unsigned char  _ifMACAddress;
    unsigned int  _ifMedia;
    BOOL  _ifName;
    unsigned int  _ifTransportType;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    int  _keepAliveSeconds;
    NSString * _label;
    CUNetLinkEndpoint * _netLinkEndpoint;
    CUNetLinkManager * _netLinkManager;
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
    }  _peerAddr;
    CUReadRequest * _readRequestCurrent;
    struct NSMutableArray { Class x1; } * _readRequests;
    NSObject<OS_dispatch_source> * _readSource;
    unsigned char  _readSuspended;
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
    }  _selfAddr;
    id /* block */  _serverInvalidationHandler;
    int  _socketFD;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
    CUWriteRequest * _writeRequestCurrent;
    struct NSMutableArray { Class x1; } * _writeRequests;
    NSObject<OS_dispatch_source> * _writeSource;
    unsigned char  _writeSuspended;
}

@property (nonatomic) double connectTimeoutSecs;
@property (nonatomic) double dataTimeoutSecs;
@property (nonatomic) int defaultPort;
@property (nonatomic, retain) CUBonjourDevice *destinationBonjour;
@property (nonatomic, copy) NSString *destinationString;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ errorHandler;
@property (nonatomic) unsigned int flags;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic) int keepAliveSeconds;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, retain) CUNetLinkManager *netLinkManager;
@property (nonatomic, copy) id /* block */ serverInvalidationHandler;
@property (nonatomic) int socketFD;

- (void).cxx_destruct;
- (void)_abortReadsWithError:(id)arg1;
- (void)_abortWritesWithError:(id)arg1;
- (void)_completeReadRequest:(id)arg1 error:(id)arg2;
- (void)_completeWriteRequest:(id)arg1 error:(id)arg2;
- (void)_invalidate;
- (void)_invalidated;
- (void)_netLinkStateChanged;
- (void)_prepareReadRequest:(id)arg1;
- (bool)_prepareWriteRequest:(id)arg1 error:(id*)arg2;
- (bool)_processReadStatus;
- (void)_processReads:(bool)arg1;
- (void)_processWrites;
- (bool)_setupIOAndReturnError:(id*)arg1;
- (bool)_startConnectingToDestination:(id)arg1 error:(id*)arg2;
- (bool)activateDirectAndReturnError:(id*)arg1;
- (void)activateWithCompletion:(id /* block */)arg1;
- (double)connectTimeoutSecs;
- (double)dataTimeoutSecs;
- (void)dealloc;
- (int)defaultPort;
- (id)description;
- (id)destinationBonjour;
- (id)destinationString;
- (id)dispatchQueue;
- (id /* block */)errorHandler;
- (unsigned int)flags;
- (id)init;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (int)keepAliveSeconds;
- (id)label;
- (id)netLinkManager;
- (void)readWithRequest:(id)arg1;
- (id /* block */)serverInvalidationHandler;
- (void)setConnectTimeoutSecs:(double)arg1;
- (void)setDataTimeoutSecs:(double)arg1;
- (void)setDefaultPort:(int)arg1;
- (void)setDestinationBonjour:(id)arg1;
- (void)setDestinationString:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setErrorHandler:(id /* block */)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setKeepAliveSeconds:(int)arg1;
- (void)setLabel:(id)arg1;
- (void)setNetLinkManager:(id)arg1;
- (void)setServerInvalidationHandler:(id /* block */)arg1;
- (void)setSocketFD:(int)arg1;
- (int)socketFD;
- (void)writeEndOfDataWithCompletion:(id /* block */)arg1;
- (void)writeWithRequest:(id)arg1;

@end
