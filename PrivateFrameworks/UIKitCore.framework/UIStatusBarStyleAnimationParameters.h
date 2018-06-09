/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIStatusBarStyleAnimationParameters : UIStatusBarAnimationParameters {
    int  _styleAnimation;
}

@property (nonatomic) int styleAnimation;

- (id)initWithDefaultParameters;
- (void)setStyleAnimation:(int)arg1;
- (bool)shouldAnimate;
- (int)styleAnimation;

@end
