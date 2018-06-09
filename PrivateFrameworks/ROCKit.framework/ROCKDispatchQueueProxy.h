/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ROCKit.framework/ROCKit
 */

@interface ROCKDispatchQueueProxy : ROCKImpersonator {
    bool  _remoteQueue;
    ROCKConnection * _rockConnection;
    NSObject<OS_xpc_object> * _xpcDictionary;
}

@property (nonatomic, readonly) unsigned int qosClass;
@property (nonatomic, readonly) int relativePriority;
@property (nonatomic) bool remoteQueue;
@property (nonatomic, retain) ROCKConnection *rockConnection;
@property (nonatomic, retain) NSObject<OS_xpc_object> *xpcDictionary;

+ (id)dispatchQueueProxyWithUUID:(id)arg1 qosClass:(unsigned int)arg2 relativePriority:(int)arg3 rockConnection:(id)arg4 remoteQueue:(bool)arg5;

- (void).cxx_destruct;
- (id)initWithUUID:(id)arg1 qosClass:(unsigned int)arg2 relativePriority:(int)arg3 rockConnection:(id)arg4 remoteQueue:(bool)arg5;
- (id)makeQueue;
- (unsigned int)qosClass;
- (int)relativePriority;
- (bool)remoteQueue;
- (id)rockConnection;
- (void)setRemoteQueue:(bool)arg1;
- (void)setRockConnection:(id)arg1;
- (void)setXpcDictionary:(id)arg1;
- (id)xpcDictionary;

@end
