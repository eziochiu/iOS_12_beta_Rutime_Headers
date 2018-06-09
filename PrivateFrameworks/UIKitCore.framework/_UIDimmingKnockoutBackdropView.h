/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIDimmingKnockoutBackdropView : UIView <UIInterfaceActionVisualBackgroundDisplaying, UIInterfaceActionVisualGroupBackgroundDisplaying> {
    double  _cornerRadius;
    long long  _style;
    UIVisualEffectView * backdropView;
    UIView * dimmingKnockoutView;
}

@property (nonatomic) double cornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long style;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureViewsWithStyle:(long long)arg1;
- (id)_dimmingKnockoutBackgroundColorForBackdropStyle:(long long)arg1;
- (id)_filterForBackdropStyle:(long long)arg1;
- (void)_setContinuousCornerRadius:(double)arg1;
- (id)_visualEffectForStyle:(long long)arg1;
- (double)cornerRadius;
- (id)initWithStyle:(long long)arg1;
- (void)layoutSubviews;
- (void)setAlpha:(double)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setPressed:(bool)arg1;
- (void)setRoundedCornerPosition:(unsigned long long)arg1;
- (void)setStyle:(long long)arg1;
- (long long)style;

@end
