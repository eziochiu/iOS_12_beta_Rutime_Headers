/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIDropAnimationHandlers : NSObject <UIDragAnimating> {
    NSMutableArray * _alongsideAnimationHandlers;
    NSMutableArray * _completionHandlers;
}

@property (nonatomic, readonly) NSArray *alongsideAnimationHandlers;
@property (nonatomic, readonly) NSArray *completionHandlers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addAnimations:(id /* block */)arg1;
- (void)addCompletion:(id /* block */)arg1;
- (id)alongsideAnimationHandlers;
- (id)completionHandlers;
- (id)init;
- (void)invokeAllCompletionHandlers;
- (void)resetAllAnimationHandlers;

@end
