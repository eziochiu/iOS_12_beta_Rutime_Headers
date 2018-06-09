/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface _HKDocumentImageView : UIView {
    UIImageView * _imageView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _margins;
}

@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } margins;

- (void).cxx_destruct;
- (id)imageView;
- (id)initWithImage:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })margins;
- (void)setMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end
