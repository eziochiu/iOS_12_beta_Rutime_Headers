/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ROCKit.framework/ROCKit
 */

@interface ROCKForwardingProxy : ROCKRemoteImpersonator {
    <NSObject> * _instance;
    NSSet * _protocols;
}

@property (nonatomic, retain) <NSObject> *instance;
@property (nonatomic, retain) NSSet *protocols;

+ (void)forwardingProxyWithInstance:(id)arg1 eventQueue:(id)arg2 eventHandler:(id /* block */)arg3;
+ (id)forwardingProxyWithSessionManager:(id)arg1 instance:(id)arg2;

- (void).cxx_destruct;
- (void)_forwardStackInvocation:(id)arg1;
- (id)debugDescription;
- (id)description;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithSessionManager:(id)arg1 remoteImpersonatorUUID:(id)arg2 instance:(id)arg3;
- (id)initWithSessionManager:(id)arg1 remoteImpersonatorUUID:(id)arg2 instance:(id)arg3 protocols:(id)arg4;
- (id)instance;
- (id)protocols;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setInstance:(id)arg1;
- (void)setProtocols:(id)arg1;

@end
