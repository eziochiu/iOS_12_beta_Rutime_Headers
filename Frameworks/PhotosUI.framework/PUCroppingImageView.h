/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUCroppingImageView : UIView {
    UIView * _accessoryView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _accessoryViewInsets;
    UIImage * _image;
    unsigned long long  _imageFillMode;
    UIImageView * _imageView;
}

@property (nonatomic, retain) UIView *accessoryView;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } accessoryViewInsets;
@property (nonatomic) bool antialiasEdges;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) unsigned long long imageFillMode;

- (void).cxx_destruct;
- (void)_configure;
- (void)_updateLayout;
- (id)accessoryView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })accessoryViewInsets;
- (bool)antialiasEdges;
- (id)image;
- (unsigned long long)imageFillMode;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setAccessoryView:(id)arg1;
- (void)setAccessoryViewInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setAntialiasEdges:(bool)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setImage:(id)arg1;
- (void)setImageFillMode:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
