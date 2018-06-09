/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKLegendView : HKBorderLineView {
    NSLayoutConstraint * _bottomConstraint;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _edgeInsets;
    NSLayoutConstraint * _leadingConstraint;
    NSArray * _leftEntries;
    NSMutableArray * _leftEntryViews;
    UIStackView * _mainStack;
    NSArray * _rightEntries;
    NSMutableArray * _rightEntryViews;
    UIColor * _topBorderColor;
    NSLayoutConstraint * _topConstraint;
    UIView * _topDividerView;
    NSLayoutConstraint * _trailingConstraint;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } edgeInsets;
@property (nonatomic, readonly) NSArray *leftEntries;
@property (nonatomic, readonly) NSArray *rightEntries;
@property (nonatomic, retain) UIColor *topBorderColor;

- (void).cxx_destruct;
- (void)_rebuildStackStructure;
- (void)_updateLegendLeftEntries:(id)arg1 rightEntries:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (id)initWithEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)leftEntries;
- (id)rightEntries;
- (void)setEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setLeftEntries:(id)arg1 rightEntries:(id)arg2;
- (void)setTopBorderColor:(id)arg1;
- (id)topBorderColor;

@end
