/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleCollectionViewPlusCell : PXPeopleCollectionViewCell {
    CAShapeLayer * _plusShapeLayer;
}

@property (nonatomic, retain) CAShapeLayer *plusShapeLayer;

- (void).cxx_destruct;
- (struct CGPath { }*)_createShapePathForBoundsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_updatePlusShapeLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)plusShapeLayer;
- (void)setPlusShapeLayer:(id)arg1;

@end
