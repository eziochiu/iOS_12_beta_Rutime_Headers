/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIGroupTableViewCellBackground : UIView {
    struct { 
        unsigned int selected : 1; 
    }  _groupBackgroundFlags;
    double  _sectionBorderWidth;
    int  _sectionLocation;
    long long  _selectionStyle;
    UIColor * _selectionTintColor;
    long long  _separatorStyle;
}

@property (nonatomic) double sectionBorderWidth;
@property (nonatomic) int sectionLocation;
@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic) long long selectionStyle;
@property (nonatomic, retain) UIColor *selectionTintColor;
@property (nonatomic) long long separatorStyle;

+ (void)_flushCacheOnNotification:(id)arg1;
+ (id)_roundedRectBezierPathInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withSectionLocation:(int)arg2 sectionCornerRadius:(double)arg3 cornerRadiusAdjustment:(double)arg4 sectionBorderWidth:(double)arg5 forBorder:(bool)arg6;
+ (void)initialize;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_backgroundImageCapInsets;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_backgroundImageContentsCenter;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_backgroundImageContentsRect;
- (struct CGSize { double x1; double x2; })_backgroundImageSize;
- (id)_bottomShadowColor;
- (id)_contentMaskLayer;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentRectForContentHeight:(double)arg1;
- (id)_fillColor;
- (void)_layoutSubviews:(bool)arg1;
- (id)_sectionBorderColor;
- (double)_sectionCornerRadius;
- (id)_separatorColor;
- (void)_setSectionLocationAnimationDidStop;
- (id)_topShadowColor;
- (id)_topShadowViewWithColor:(id)arg1;
- (bool)_usesResizableBackgroundImage;
- (id)backgroundColor;
- (void)displayLayer:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isSelected;
- (void)layoutSubviews;
- (double)sectionBorderWidth;
- (int)sectionLocation;
- (long long)selectionStyle;
- (id)selectionTintColor;
- (long long)separatorStyle;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSectionBorderWidth:(double)arg1;
- (void)setSectionLocation:(int)arg1;
- (void)setSectionLocation:(int)arg1 animated:(bool)arg2;
- (void)setSelected:(bool)arg1;
- (void)setSelectionStyle:(long long)arg1;
- (void)setSelectionTintColor:(id)arg1;
- (void)setSelectionTintColor:(id)arg1 layoutSubviews:(bool)arg2;
- (void)setSeparatorStyle:(long long)arg1;

@end