/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIViewAnimationDelegate : NSObject <CAAnimationDelegate> {
    id /* block */  _completionBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (id)initWithCompletionBlock:(id /* block */)arg1;

@end
