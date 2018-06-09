/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface _NTKCFaceDetailCollectionCell : UICollectionViewCell {
    bool  _active;
    UIImage * _image;
    UIImageView * _imageView;
    _NTKCFaceDetailCollectionCellLabel * _label;
    double  _outlineOutset;
    CAShapeLayer * _outlineView;
    long long  _style;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _swatchFrame;
    NSString * _text;
}

@property (nonatomic) bool active;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) double outlineOutset;
@property (nonatomic) long long style;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } swatchFrame;
@property (nonatomic, retain) NSString *text;

+ (double)outlineLineWidth;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (bool)active;
- (id)image;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)outlineOutset;
- (void)setActive:(bool)arg1;
- (void)setActive:(bool)arg1 animated:(bool)arg2;
- (void)setImage:(id)arg1;
- (void)setOutlineOutset:(double)arg1;
- (void)setStyle:(long long)arg1;
- (void)setSwatchFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setText:(id)arg1;
- (long long)style;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })swatchFrame;
- (id)text;

@end
