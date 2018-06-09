/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
 */

@interface WGShortLookStyleButton : UIControl {
    bool  _backgroundBlurred;
    MTMaterialView * _backgroundView;
    double  _dimension;
    BSUIFontProvider * _fontProvider;
    UILabel * _titleLabel;
}

@property (getter=isBackgroundBlurred, nonatomic) bool backgroundBlurred;
@property (nonatomic, retain) NSString *groupName;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (double)_backgroundViewCornerRadius;
- (void)_configureBackgroundViewIfNecessary;
- (void)_configureMaskIfNecessary;
- (void)_configureTitleLabelIfNecessary;
- (double)_dimension;
- (id)_fontProvider;
- (void)_layoutTitleLabel;
- (double)_minimumScaleFactorForFont:(id)arg1;
- (void)_setBackgroundViewCornerRadius:(double)arg1;
- (void)_updateTitleLabelFont;
- (id)groupName;
- (void)invalidateCachedGeometry;
- (bool)isBackgroundBlurred;
- (void)layoutSubviews;
- (void)setBackgroundBlurred:(bool)arg1;
- (void)setGroupName:(id)arg1;
- (void)setTitle:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)title;
- (void)traitCollectionDidChange:(id)arg1;

@end
