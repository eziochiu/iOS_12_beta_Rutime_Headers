/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIAsyncInvocation : NSObject {
    id /* block */  _invocationBlock;
    bool  _invocationBlockHasBeenCalled;
    long long  _invokeCallCount;
    /* Warning: Unrecognized filer type: '^' using 'void*' */ void* _observer;
}

+ (id)emptyInvocation;
+ (id)invocationWithBlock:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)invoke;

@end
