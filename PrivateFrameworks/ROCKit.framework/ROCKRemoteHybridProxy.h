/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ROCKit.framework/ROCKit
 */

@interface ROCKRemoteHybridProxy : ROCKRemoteProxy <ROCKMemoizable> {
    <ROCKMemoizable> * _memoizedInstance;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <ROCKMemoizable> *memoizedInstance;
@property (readonly) Class superclass;

+ (id)remoteProxyWithSessionManager:(id)arg1 remoteImpersonatorUUID:(id)arg2 protocols:(id)arg3 connectionUUID:(id)arg4 memoizedInstance:(id)arg5;

- (void).cxx_destruct;
- (bool)conformsToProtocol:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithSessionManager:(id)arg1 remoteImpersonatorUUID:(id)arg2 protocols:(id)arg3 connectionUUID:(id)arg4 memoizedInstance:(id)arg5;
- (id)memoizedInstance;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setMemoizedInstance:(id)arg1;

@end
