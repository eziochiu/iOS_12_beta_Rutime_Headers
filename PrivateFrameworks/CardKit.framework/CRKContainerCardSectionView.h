/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
 */

@interface CRKContainerCardSectionView : UIView <CRKCardSectionView> {
    NSString * _cardSectionViewIdentifier;
    UIView<CRKComposableView> * _composedSuperview;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    UIView * _contentView;
    UIView * _userInputEventInterceptView;
}

@property (nonatomic, copy) NSString *cardSectionViewIdentifier;
@property (nonatomic) UIView<CRKComposableView> *composedSuperview;
@property (nonatomic) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic, retain) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool interceptsTouches;
@property (readonly) Class superclass;

+ (struct CGSize { double x1; double x2; })sizeThatFitsCardSection:(id)arg1 boundingSize:(struct CGSize { double x1; double x2; })arg2;

- (void).cxx_destruct;
- (id)cardSectionViewIdentifier;
- (id)composedSuperview;
- (struct CGSize { double x1; double x2; })contentSize;
- (id)contentView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)interceptsTouches;
- (void)layoutSubviews;
- (void)removeFromComposedSuperview;
- (void)setCardSectionViewIdentifier:(id)arg1;
- (void)setComposedSuperview:(id)arg1;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setContentView:(id)arg1;
- (void)setInterceptsTouches:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
