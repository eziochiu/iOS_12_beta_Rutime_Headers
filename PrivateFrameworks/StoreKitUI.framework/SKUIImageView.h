/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIImageView : UIImageView {
    id /* block */  _cornerPathBlock;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _lastLayoutSize;
    SKUIImagePlaceholder * _placeholder;
    UITapGestureRecognizer * _tapRecognizer;
}

@property (nonatomic, copy) id /* block */ cornerPathBlock;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic, readonly) CAShapeLayer *layer;
@property (nonatomic, retain) SKUIImagePlaceholder *placeholder;
@property (nonatomic, readonly) UITapGestureRecognizer *tapRecognizer;

+ (Class)layerClass;

- (void).cxx_destruct;
- (id /* block */)cornerPathBlock;
- (struct CGSize { double x1; double x2; })imageSize;
- (void)layoutSubviews;
- (id)placeholder;
- (void)setContents:(id)arg1;
- (void)setCornerPathBlock:(id /* block */)arg1;
- (void)setImage:(id)arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPlaceholder:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)tapRecognizer;

@end
