/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

@interface CCUIAnimation : NSObject <NSCopying> {
    id /* block */  _animations;
    double  _delay;
    <CCUIAnimationParameters> * _parameters;
    double  _speed;
}

@property (nonatomic, readonly, copy) id /* block */ animations;
@property (nonatomic, readonly) double delay;
@property (nonatomic, readonly, copy) <CCUIAnimationParameters> *parameters;
@property (nonatomic, readonly) double speed;

+ (id)animationWithParameters:(id)arg1 animations:(id /* block */)arg2;
+ (id)animationWithParameters:(id)arg1 delay:(double)arg2 animations:(id /* block */)arg3;
+ (id)animationWithParameters:(id)arg1 delay:(double)arg2 speed:(double)arg3 animations:(id /* block */)arg4;

- (void).cxx_destruct;
- (id)_initWithParameters:(id)arg1 delay:(double)arg2 speed:(double)arg3 animations:(id /* block */)arg4;
- (id /* block */)animations;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)delay;
- (id)parameters;
- (double)speed;

@end
