/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ROCKit.framework/ROCKit
 */

@interface ROCKForwardingInterposerWithRunLoop : ROCKForwardingInterposer {
    ROCKRunLoop * _runLoop;
}

@property (nonatomic, retain) ROCKRunLoop *runLoop;

- (void).cxx_destruct;
- (void)configureRunLoopWithTimeOut:(double)arg1 tracksMainThread:(bool)arg2 runLoopMode:(const struct __CFString { }*)arg3;
- (void)forwardCallWithInvocation:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)runLoop;
- (void)setRunLoop:(id)arg1;

@end
