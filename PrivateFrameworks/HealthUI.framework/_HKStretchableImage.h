/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface _HKStretchableImage : NSObject {
    UIImage * _bottomImage;
    UIImage * _centerImage;
    UIImage * _singlePointImage;
    UIImage * _topImage;
}

@property (nonatomic, retain) UIImage *bottomImage;
@property (nonatomic, retain) UIImage *centerImage;
@property (nonatomic, retain) UIImage *singlePointImage;
@property (nonatomic, retain) UIImage *topImage;

- (void).cxx_destruct;
- (double)_desiredWidth;
- (void)_renderSingleImageInContext:(struct CGContext { }*)arg1 point:(struct CGPoint { double x1; double x2; })arg2 contextBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 alpha:(double)arg4;
- (void)_renderStretchedInContext:(struct CGContext { }*)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 contextBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 alpha:(double)arg4;
- (id)bottomImage;
- (id)centerImage;
- (void)renderInContext:(struct CGContext { }*)arg1 topCenter:(struct CGPoint { double x1; double x2; })arg2 bottomCenter:(struct CGPoint { double x1; double x2; })arg3 contextBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 alpha:(double)arg5;
- (void)setBottomImage:(id)arg1;
- (void)setCenterImage:(id)arg1;
- (void)setSinglePointImage:(id)arg1;
- (void)setTopImage:(id)arg1;
- (id)singlePointImage;
- (id)topImage;

@end
