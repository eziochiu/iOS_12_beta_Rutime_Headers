/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ROCKit.framework/ROCKit
 */

@interface ROCKRemoteProxy : ROCKRemoteImpersonator <NSRemoteInvocationInterface> {
    NSObject<OS_xpc_object> * _connectionUUID;
    NSSet * _protocols;
    NSMapTable * _selectorsToMethodSignatures;
}

@property (nonatomic, retain) NSObject<OS_xpc_object> *connectionUUID;
@property (nonatomic, retain) NSSet *protocols;
@property (nonatomic, retain) NSMapTable *selectorsToMethodSignatures;

+ (id)remoteProxyWithSessionManager:(id)arg1 remoteImpersonatorUUID:(id)arg2 protocols:(id)arg3 forwardingInterposerClass:(Class)arg4 connectionUUID:(id)arg5;

- (void).cxx_destruct;
- (void)_forwardStackInvocation:(id)arg1;
- (bool)checkIn;
- (bool)conformsToProtocol:(id)arg1;
- (id)connectionUUID;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (void)forwardInvocation:(id)arg1;
- (id)initWithSessionManager:(id)arg1 remoteImpersonatorUUID:(id)arg2 protocols:(id)arg3 forwardingInterposerClass:(Class)arg4 connectionUUID:(id)arg5;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)protocols;
- (void)remoteInvocation:(id)arg1 sessionManager:(id)arg2 invocationHandler:(id /* block */)arg3;
- (bool)respondsToSelector:(SEL)arg1;
- (id)selectorsToMethodSignatures;
- (void)setConnectionUUID:(id)arg1;
- (void)setProtocols:(id)arg1;
- (void)setSelectorsToMethodSignatures:(id)arg1;

@end
