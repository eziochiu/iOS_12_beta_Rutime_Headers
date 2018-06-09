/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

@interface DOCTagColorPicker : UIView {
    UIGestureRecognizer * _changeColorPanGestureRecognizer;
    UIGestureRecognizer * _changeColorTapGestureRecognizer;
    NSArray * _dotViews;
    NSNumber * _previousSelectedTagColor;
    long long  _selectedTagColor;
    UIStackView * _stackView;
}

@property (nonatomic, readonly) UIGestureRecognizer *changeColorPanGestureRecognizer;
@property (nonatomic, readonly) UIGestureRecognizer *changeColorTapGestureRecognizer;
@property (nonatomic, readonly) NSArray *dotViews;
@property (nonatomic, retain) NSNumber *previousSelectedTagColor;
@property (nonatomic) long long selectedTagColor;
@property (nonatomic, retain) UIStackView *stackView;

- (void).cxx_destruct;
- (id)changeColorPanGestureRecognizer;
- (id)changeColorTapGestureRecognizer;
- (id)dotViews;
- (void)handleChangeColor:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)previousSelectedTagColor;
- (long long)selectedTagColor;
- (id)selectedTagDotView;
- (void)setColorDotSpacing;
- (void)setPreviousSelectedTagColor:(id)arg1;
- (void)setSelectedTagColor:(long long)arg1;
- (void)setSelectedTagColorForLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setStackView:(id)arg1;
- (id)stackView;

@end
