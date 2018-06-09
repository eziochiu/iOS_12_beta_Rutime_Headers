/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UISwipeActionButton : UIButton {
    bool  _autosizes;
    UIView * _backgroundView;
    UIColor * _defaultBackgroundColor;
    UIColor * _highlightedBackgroundColor;
}

@property (nonatomic) bool autosizes;
@property (nonatomic, retain) UIView *backgroundView;
@property (nonatomic, readonly) double buttonWidth;
@property (nonatomic, retain) UIColor *defaultBackgroundColor;
@property (nonatomic, retain) UIColor *highlightedBackgroundColor;
@property (nonatomic, readonly) UIView *sourceView;

+ (double)defaultButtonWidth;
+ (id)titleFont;
+ (id)titleFontOfSize:(double)arg1;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_allowableContentRectForContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned long long)_defaultLayoutForHeight:(double)arg1;
- (bool)_heightDemandsCompactLayout;
- (long long)_numberOfLinesForTitle:(id)arg1;
- (bool)autosizes;
- (id)backgroundView;
- (double)buttonWidth;
- (id)defaultBackgroundColor;
- (id)highlightedBackgroundColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAutosizes:(bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setDefaultBackgroundColor:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setHighlightedBackgroundColor:(id)arg1;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (id)sourceView;
- (void)traitCollectionDidChange:(id)arg1;

@end
