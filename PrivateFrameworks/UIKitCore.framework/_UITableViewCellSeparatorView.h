/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UITableViewCellSeparatorView : UIView {
    UIView * _backgroundView;
    bool  _drawsWithVibrantLightMode;
    UIVisualEffectView * _effectView;
    UIView * _overlayView;
    UIVisualEffect * _separatorEffect;
}

@property (nonatomic) bool drawsWithVibrantLightMode;
@property (nonatomic, retain) UIVisualEffect *separatorEffect;

- (void).cxx_destruct;
- (bool)drawsWithVibrantLightMode;
- (void)layoutSubviews;
- (id)separatorEffect;
- (void)setDrawsWithVibrantLightMode:(bool)arg1;
- (void)setSeparatorEffect:(id)arg1;

@end
