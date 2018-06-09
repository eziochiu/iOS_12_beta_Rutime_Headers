/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIScrollingTabBarPalette : UIView {
    bool  _attached;
    SKUIScrollingTabBarBackgroundView * _backgroundView;
    UIView * _contentView;
    <SKUIScrollingTabBarPaletteDelegate> * _delegate;
    double  _paletteHeight;
    bool  _tabBarBackgroundExtendsBehindPalette;
}

@property (getter=isAttached, setter=_setAttached:, nonatomic) bool attached;
@property (getter=_backgroundView, nonatomic, readonly) SKUIScrollingTabBarBackgroundView *backgroundView;
@property (nonatomic, readonly) UIView *contentView;
@property (getter=_delegate, setter=_setDelegate:, nonatomic) <SKUIScrollingTabBarPaletteDelegate> *delegate;
@property (nonatomic, readonly) double paletteHeight;
@property (nonatomic) bool tabBarBackgroundExtendsBehindPalette;

- (void).cxx_destruct;
- (id)_backgroundView;
- (id)_delegate;
- (void)_setAttached:(bool)arg1;
- (void)_setDelegate:(id)arg1;
- (id)contentView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAttached;
- (void)layoutSubviews;
- (double)paletteHeight;
- (void)setTabBarBackgroundExtendsBehindPalette:(bool)arg1;
- (bool)tabBarBackgroundExtendsBehindPalette;
- (void)traitCollectionDidChange:(id)arg1;

@end
