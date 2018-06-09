/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFNavigationBarReaderButton : UIButton {
    UIImageView * _defaultStateImageView;
    bool  _drawsLightGlyph;
    UIColor * _glyphTintColor;
    bool  _prefersResizableBackground;
    double  _resizableBackgroundCornerRadius;
    UIImageView * _selectedStateGlyphImageView;
    UIImageView * _selectedStateImageView;
    bool  _useStandaloneAppearance;
}

@property (nonatomic) bool drawsLightGlyph;
@property (nonatomic) bool prefersResizableBackground;
@property (nonatomic) double resizableBackgroundCornerRadius;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } visibleSize;

+ (struct CGSize { double x1; double x2; })glyphSize;

- (void).cxx_destruct;
- (void)_updateImageViews;
- (bool)_usesResizableBackground;
- (bool)drawsLightGlyph;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 useStandaloneAppearance:(bool)arg2 prefersResizableBackground:(bool)arg3 resizableBackgroundCornerRadius:(double)arg4;
- (void)layoutSubviews;
- (bool)prefersResizableBackground;
- (double)resizableBackgroundCornerRadius;
- (void)setDrawsLightGlyph:(bool)arg1;
- (void)setGlyphTintColor:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setPrefersResizableBackground:(bool)arg1;
- (void)setResizableBackgroundCornerRadius:(double)arg1;
- (void)setSelected:(bool)arg1;
- (struct CGSize { double x1; double x2; })visibleSize;

@end
