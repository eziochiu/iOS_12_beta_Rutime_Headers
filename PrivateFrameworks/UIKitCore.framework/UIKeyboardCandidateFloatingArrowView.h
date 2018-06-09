/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKeyboardCandidateFloatingArrowView : UICollectionReusableView {
    UIButton * _arrowButton;
}

@property (nonatomic, retain) UIButton *arrowButton;

+ (id)collectionViewKind;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)applyLayoutAttributes:(id)arg1;
- (id)arrowButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareForReuse;
- (void)setArrowButton:(id)arg1;
- (void)updateArrow;

@end
