/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVStackWrappingView : UIView {
    UIImage * _backgroundImage;
    UIView * _backgroundView;
    UIImageView * _bgImageView;
    NSArray * _headerSupplementaryViews;
    UICollectionView * _stackView;
    NSArray * _supplementaryCellLayoutAttributes;
}

@property (nonatomic, retain) UIImage *backgroundImage;
@property (nonatomic, retain) UIView *backgroundView;
@property (nonatomic, copy) NSArray *headerSupplementaryViews;
@property (nonatomic, retain) UICollectionView *stackView;
@property (nonatomic, readonly, copy) NSArray *supplementaryCellLayoutAttributes;

- (void).cxx_destruct;
- (id)backgroundImage;
- (id)backgroundView;
- (void)configureSupplementaryCellLayoutAttributesWithAutomaticInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)headerSupplementaryViews;
- (id)preferredFocusEnvironments;
- (void)safeAreaInsetsDidChange;
- (void)setBackgroundImage:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setHeaderSupplementaryViews:(id)arg1;
- (void)setStackView:(id)arg1;
- (id)stackView;
- (id)supplementaryCellLayoutAttributes;

@end
