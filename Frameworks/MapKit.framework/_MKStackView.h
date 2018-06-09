/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKStackView : UIView {
    bool  _bottomConstraintShouldBeGreaterThanOrEqual;
    <_MKAnimationStackViewDelegate> * _stackAnimationDelegate;
    NSArray * _stackConstraints;
    <_MKStackViewDelegate> * _stackDelegate;
    NSArray * _stackedSubviews;
    NSHashTable * _viewsNeedingWidthConstraints;
}

@property (nonatomic) bool bottomConstraintShouldBeGreaterThanOrEqual;
@property (nonatomic) <_MKAnimationStackViewDelegate> *stackAnimationDelegate;
@property (nonatomic) <_MKStackViewDelegate> *stackDelegate;
@property (nonatomic, copy) NSArray *stackedSubviews;

- (void).cxx_destruct;
- (void)_createConstraints;
- (void)addSubview:(id)arg1;
- (bool)bottomConstraintShouldBeGreaterThanOrEqual;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBottomConstraintShouldBeGreaterThanOrEqual:(bool)arg1;
- (void)setStackAnimationDelegate:(id)arg1;
- (void)setStackDelegate:(id)arg1;
- (void)setStackedSubviews:(id)arg1;
- (void)setStackedSubviews:(id)arg1 animated:(bool)arg2;
- (id)stackAnimationDelegate;
- (id)stackDelegate;
- (id)stackedSubviews;

@end
