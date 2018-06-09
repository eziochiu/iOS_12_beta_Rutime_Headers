/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUMultiOrientationImageView : UIView {
    bool  _allowsEdgeAntialiasing;
    UIView * _currentOrientedSubview;
    UIImage * _image;
    NSArray * _orientedSubviews;
}

@property (nonatomic) bool allowsEdgeAntialiasing;
@property (nonatomic, retain) UIImage *image;

- (void).cxx_destruct;
- (void)_updateLayout;
- (void)_updateSubviews;
- (bool)allowsEdgeAntialiasing;
- (id)image;
- (void)setAllowsEdgeAntialiasing:(bool)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentMode:(long long)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setImage:(id)arg1;

@end
