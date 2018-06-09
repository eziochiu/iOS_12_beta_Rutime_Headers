/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface _PKCheckerGridView : UIView {
    UIColor * _colorA;
    UIColor * _colorB;
    double  _gridSize;
    UIImageView * _imageView;
}

@property (nonatomic, retain) UIColor *colorA;
@property (nonatomic, retain) UIColor *colorB;
@property (nonatomic) double gridSize;
@property (nonatomic, retain) UIImageView *imageView;

- (void).cxx_destruct;
- (id)colorA;
- (id)colorB;
- (double)gridSize;
- (id)gridTileImage;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setColorA:(id)arg1;
- (void)setColorB:(id)arg1;
- (void)setGridSize:(double)arg1;
- (void)setImageView:(id)arg1;

@end
