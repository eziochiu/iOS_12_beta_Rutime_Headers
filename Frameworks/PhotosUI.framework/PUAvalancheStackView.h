/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAvalancheStackView : UIView {
    long long  _contentMode;
    CALayer * _imageLayer;
    CALayer * _stackLayer0;
    CALayer * _stackLayer1;
}

@property (nonatomic) long long contentMode;
@property (nonatomic, retain) CALayer *imageLayer;
@property (nonatomic, retain) CALayer *stackLayer0;
@property (nonatomic, retain) CALayer *stackLayer1;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_imageContentFrame;
- (long long)contentMode;
- (id)imageLayer;
- (id)init;
- (void)layoutSubviews;
- (void)setContentMode:(long long)arg1;
- (void)setImage:(id)arg1;
- (void)setImageLayer:(id)arg1;
- (void)setStackLayer0:(id)arg1;
- (void)setStackLayer1:(id)arg1;
- (id)stackLayer0;
- (id)stackLayer1;

@end
