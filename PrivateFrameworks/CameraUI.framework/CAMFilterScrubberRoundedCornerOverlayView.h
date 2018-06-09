/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMFilterScrubberRoundedCornerOverlayView : UICollectionReusableView {
    UIColor * _cornerColor;
    double  _cornerRadius;
    unsigned long long  _corners;
}

@property (nonatomic, readonly) UIColor *cornerColor;
@property (nonatomic, readonly) double cornerRadius;
@property (nonatomic) unsigned long long corners;

- (void).cxx_destruct;
- (void)_setCorners:(unsigned long long)arg1;
- (id)cornerColor;
- (double)cornerRadius;
- (unsigned long long)corners;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCorners:(unsigned long long)arg1;

@end
