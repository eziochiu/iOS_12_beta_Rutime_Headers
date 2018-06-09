/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ROCKit.framework/ROCKit
 */

@interface ROCKForwardingInterposer : NSObject {
    <NSObject> * _remoteObject;
}

@property (nonatomic, retain) <NSObject> *remoteObject;

+ (id)forwardingInterposerWithRemoteObject:(id)arg1;

- (void).cxx_destruct;
- (void)forwardCallWithInvocation:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithRemoteObject:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)remoteObject;
- (id)rockEncodeWithSessionManager:(id)arg1 error:(id*)arg2;
- (void)setRemoteObject:(id)arg1;

@end
