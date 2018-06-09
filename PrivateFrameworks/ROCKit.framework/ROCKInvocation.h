/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ROCKit.framework/ROCKit
 */

@interface ROCKInvocation : NSInvocation {
    id /* block */  _autoreleasingHandler;
    NSObject<OS_dispatch_queue> * _invocationQueue;
    id /* block */  _returnHandler;
}

@property (nonatomic, copy) id /* block */ autoreleasingHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *invocationQueue;
@property (nonatomic, copy) id /* block */ returnHandler;

+ (id)invocationWithMethodSignature:(id)arg1 invocationQueue:(id)arg2 returnHandler:(id /* block */)arg3 autoreleasingHandler:(id /* block */)arg4;

- (void).cxx_destruct;
- (id /* block */)autoreleasingHandler;
- (id)invocationQueue;
- (void)invoke;
- (id /* block */)returnHandler;
- (void)setAutoreleasingHandler:(id /* block */)arg1;
- (void)setInvocationQueue:(id)arg1;
- (void)setReturnHandler:(id /* block */)arg1;

@end
