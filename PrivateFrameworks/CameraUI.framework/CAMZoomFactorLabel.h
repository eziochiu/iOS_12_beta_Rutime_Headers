/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMZoomFactorLabel : UIView {
    UILabel * __label;
    NSString * _contentSizeCategory;
    double  _zoomFactor;
}

@property (nonatomic, readonly) UILabel *_label;
@property (nonatomic, copy) NSString *contentSizeCategory;
@property (nonatomic) double zoomFactor;

- (void).cxx_destruct;
- (id)_label;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_labelInsets;
- (void)_updateFont;
- (id)contentSizeCategory;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setContentSizeCategory:(id)arg1;
- (void)setZoomFactor:(double)arg1;
- (double)zoomFactor;

@end
