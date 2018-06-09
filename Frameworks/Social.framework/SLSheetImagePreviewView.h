/* made by EzioChiu
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLSheetImagePreviewView : UIView {
    UIImage * _image;
    UIImageView * _imageView;
    NSArray * _principalAttachments;
}

@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) NSArray *principalAttachments;

+ (id)fallbackPreviewImage;

- (void).cxx_destruct;
- (void)ensurePlaceholderPreviewImage;
- (bool)generatePreviewImageFromAttachments;
- (id)image;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)principalAttachments;
- (void)setImage:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setPreviewImage:(id)arg1 forAttachment:(id)arg2;
- (void)setPrincipalAttachments:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
