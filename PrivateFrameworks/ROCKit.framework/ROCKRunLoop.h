/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ROCKit.framework/ROCKit
 */

@interface ROCKRunLoop : NSObject {
    id /* block */  _forwardInvocationHandler;
    const struct __CFString { } * _runLoopMode;
    struct __CFRunLoopSource { } * _runLoopSource;
}

@property (nonatomic, copy) id /* block */ forwardInvocationHandler;
@property (nonatomic) const struct __CFString { }*runLoopMode;
@property (nonatomic) struct __CFRunLoopSource { }*runLoopSource;

+ (id)runLoopWithTimeOut:(double)arg1 tracksMainThread:(bool)arg2 runLoopMode:(const struct __CFString { }*)arg3;

- (void).cxx_destruct;
- (void)dealloc;
- (id /* block */)forwardInvocationHandler;
- (id)initWithTimeOut:(double)arg1 tracksMainThread:(bool)arg2 runLoopMode:(const struct __CFString { }*)arg3;
- (const struct __CFString { }*)runLoopMode;
- (struct __CFRunLoopSource { }*)runLoopSource;
- (void)runWithInvocationHandler:(id /* block */)arg1;
- (void)setForwardInvocationHandler:(id /* block */)arg1;
- (void)setRunLoopMode:(const struct __CFString { }*)arg1;
- (void)setRunLoopSource:(struct __CFRunLoopSource { }*)arg1;

@end
