/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIDynamicCaretAlternatives : UIView {
    NSArray * _alternativesButtons;
    UIView * _horizontalDivider;
    UIView * _verticalDivider;
}

@property (nonatomic, retain) NSArray *alternativesButtons;
@property (nonatomic, retain) UIView *horizontalDivider;
@property (nonatomic, retain) UIView *verticalDivider;

- (void).cxx_destruct;
- (id)alternativesButtons;
- (void)highlightButtonAtIndex:(long long)arg1;
- (id)horizontalDivider;
- (long long)indexOfButtonForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setAlternativesButtons:(id)arg1;
- (void)setButtonLabels:(id)arg1;
- (void)setHorizontalDivider:(id)arg1;
- (void)setVerticalDivider:(id)arg1;
- (id)verticalDivider;

@end
