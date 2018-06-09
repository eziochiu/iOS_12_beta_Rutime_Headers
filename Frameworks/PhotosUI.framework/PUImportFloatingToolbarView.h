/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUImportFloatingToolbarView : UIView {
    _UIBackdropView * _backdropView;
    NSString * _backdropViewGroupName;
    UIView * _shadowView;
    bool  _shouldBlurBackground;
    UIToolbar * _toolbar;
}

@property (nonatomic, retain) _UIBackdropView *backdropView;
@property (nonatomic, copy) NSString *backdropViewGroupName;
@property (nonatomic, copy) NSArray *items;
@property (nonatomic, retain) UIView *shadowView;
@property (nonatomic) bool shouldBlurBackground;
@property (nonatomic, retain) UIToolbar *toolbar;

- (void).cxx_destruct;
- (void)_updateBackdropViewGroupName;
- (void)_updateBackground;
- (id)backdropView;
- (id)backdropViewGroupName;
- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)items;
- (void)layoutSubviews;
- (void)setBackdropView:(id)arg1;
- (void)setBackdropViewGroupName:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setItems:(id)arg1 animated:(bool)arg2;
- (void)setShadowView:(id)arg1;
- (void)setShouldBlurBackground:(bool)arg1;
- (void)setToolbar:(id)arg1;
- (id)shadowView;
- (bool)shouldBlurBackground;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)sizeToFit;
- (id)toolbar;

@end
