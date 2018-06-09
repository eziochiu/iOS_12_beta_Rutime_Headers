/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

@interface TKPickerDividerTableViewCell : UITableViewCell {
    long long  _contentBackdropOverlayBlendMode;
    UIView * _dividerView;
}

@property (nonatomic) long long contentBackdropOverlayBlendMode;
@property (nonatomic, retain) UIColor *contentBackgroundColor;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_dividerViewFrame;
- (long long)contentBackdropOverlayBlendMode;
- (id)contentBackgroundColor;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setContentBackdropOverlayBlendMode:(long long)arg1;
- (void)setContentBackgroundColor:(id)arg1;
- (void)setSeparatorStyle:(long long)arg1;

@end
