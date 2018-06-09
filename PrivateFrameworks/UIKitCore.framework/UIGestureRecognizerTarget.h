/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIGestureRecognizerTarget : NSObject {
    SEL  _action;
    id  _target;
}

@property (nonatomic, readonly) SEL action;
@property (nonatomic, readonly) id target;

+ (id)gestureTargetWithTarget:(id)arg1 action:(SEL)arg2;

- (void).cxx_destruct;
- (void)_sendActionWithGestureRecognizer:(id)arg1;
- (SEL)action;
- (id)description;
- (bool)isEqualToTarget:(id)arg1 action:(SEL)arg2;
- (id)target;

@end