/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

@interface CPSPanButton : UIButton <UIGestureRecognizerDelegate> {
    CALayer * _backgroundLayer;
    unsigned long long  _direction;
}

@property (nonatomic, retain) CALayer *backgroundLayer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long direction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_backgroundColor;
+ (id)_focusedBackgroundColor;

- (void).cxx_destruct;
- (id)backgroundLayer;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (unsigned long long)direction;
- (id)initWithDirection:(unsigned long long)arg1;
- (void)layoutSubviews;
- (void)setBackgroundLayer:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
