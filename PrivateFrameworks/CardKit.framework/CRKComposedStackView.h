/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
 */

@interface CRKComposedStackView : CRKComposedView {
    unsigned long long  _direction;
    NSMutableArray * _keylines;
}

@property (nonatomic) unsigned long long direction;

- (void).cxx_destruct;
- (void)_updateLayout;
- (void)addCardSectionSubview:(id)arg1 withKeyline:(long long)arg2;
- (void)cardSectionSubviewWantsToBeRemovedFromHierarchy:(id)arg1;
- (unsigned long long)direction;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setCardSectionSubviews:(id)arg1;
- (void)setDirection:(unsigned long long)arg1;
- (void)setDirection:(unsigned long long)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })templatedContentMargins;
- (void)triggerLayoutAnimated:(bool)arg1 completion:(id /* block */)arg2;

@end
