/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ROCKit.framework/ROCKit
 */

@interface ROCKBlockProxy : NSBlock <NSRemoteInvocationInterface, ROCKImpersonateable> {
    struct { 
        int flags; 
        int reserved; 
        void *invoke; 
        struct ROCKBlockDescriptorBase {} *descriptor; 
    }  _blockLayout;
    ROCKRemoteBlockProxy * _remoteBlockProxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ROCKRemoteBlockProxy *remoteBlockProxy;
@property (readonly) Class superclass;

+ (id)blockProxyWithRemoteBlockProxy:(id)arg1;

- (void).cxx_destruct;
- (void)_forwardStackInvocation:(id)arg1;
- (id)debugDescription;
- (id)description;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)remoteBlockProxy;
- (void)remoteInvocation:(id)arg1 sessionManager:(id)arg2 invocationHandler:(id /* block */)arg3;
- (void)setRemoteBlockProxy:(id)arg1;

@end
