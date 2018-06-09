/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

@interface CSXPCConnection : NSObject {
    NSObject<OS_xpc_object> * _connection;
    bool  _listener;
    bool  _machService;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _serviceName;
    NSString * _uuid;
}

@property (nonatomic, retain) NSObject<OS_xpc_object> *connection;
@property (nonatomic, readonly) bool listener;
@property (nonatomic, readonly) bool machService;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSString *serviceName;
@property (nonatomic, readonly) NSString *uuid;

+ (id)appIdentifierFromTeamAppTuple:(id)arg1;
+ (id)copyNSStringArrayFromXPCArray:(id)arg1;
+ (id)copyNSStringForKey:(const char *)arg1 fromXPCDictionary:(id)arg2;
+ (id)copyNSStringSetFromXPCArray:(id)arg1;
+ (id)dataWrapperForKey:(const char *)arg1 sizeKey:(const char *)arg2 fromXPCDictionary:(id)arg3;
+ (bool)dictionary:(id)arg1 setSharedMemory:(void*)arg2 forKey:(const char *)arg3 size:(unsigned long long)arg4 forSizeKey:(const char *)arg5;
+ (void)dictionary:(id)arg1 setStringArray:(id)arg2 forKey:(const char *)arg3;
+ (void)initialize;

- (void).cxx_destruct;
- (void)_lostClientConnection:(id)arg1 error:(id)arg2;
- (bool)addClientConnectionIfAllowedForConfiguration:(id)arg1;
- (bool)addClientConnectionIfAllowedForConnection:(id)arg1;
- (id)connection;
- (bool)handleCommand:(const char *)arg1 info:(id)arg2 connection:(id)arg3;
- (void)handleError:(id)arg1;
- (bool)handleMessage:(id)arg1 type:(struct _xpc_type_s { }*)arg2 connection:(id)arg3;
- (void)handleReply:(id)arg1;
- (id)initListenerWithName:(id)arg1;
- (id)initMachServiceListenerWithName:(id)arg1;
- (id)initWithMachServiceName:(id)arg1;
- (id)initWithServiceName:(id)arg1;
- (id)initWithServiceName:(id)arg1 machService:(bool)arg2;
- (id)initWithServiceName:(id)arg1 machService:(bool)arg2 uuid:(id)arg3;
- (bool)listener;
- (bool)lostClientConnection:(id)arg1 error:(id)arg2;
- (bool)machService;
- (id)queue;
- (void)sendMessageAsync:(id)arg1;
- (void)sendMessageAsync:(id)arg1 completion:(id /* block */)arg2;
- (id)serviceName;
- (void)setConnection:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)startListener;
- (id)uuid;

@end
