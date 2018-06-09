/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
 */

@interface CRKComposedView : UIView <CRKComposableView> {
    NSArray * _cardSectionSubviews;
    NSMutableArray * _mutableCardSectionSubviews;
}

@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } cardSectionContentMargins;
@property (nonatomic, retain) NSArray *cardSectionSubviews;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addCardSectionSubview:(id)arg1 withKeyline:(long long)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })cardSectionContentMargins;
- (void)cardSectionSubviewWantsToBeRemovedFromHierarchy:(id)arg1;
- (id)cardSectionSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCardSectionSubviews:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
