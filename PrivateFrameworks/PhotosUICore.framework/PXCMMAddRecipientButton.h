/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMAddRecipientButton : UIButton {
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSizeToAlignWith;
    double  _inset;
    UIColor * _separatorColor;
    UIView * _separatorView;
    double  _separatorViewHeight;
}

@property (nonatomic) struct CGSize { double x1; double x2; } imageSizeToAlignWith;
@property (nonatomic) double inset;
@property (nonatomic, retain) UIColor *separatorColor;

- (void).cxx_destruct;
- (void)_commmonPXCMMAddRecipientButtonInitialization;
- (struct CGSize { double x1; double x2; })imageSizeToAlignWith;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)inset;
- (void)layoutSubviews;
- (id)separatorColor;
- (void)setImageSizeToAlignWith:(struct CGSize { double x1; double x2; })arg1;
- (void)setInset:(double)arg1;
- (void)setSeparatorColor:(id)arg1;

@end
