/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIStyledImageDataConsumer : SKUIImageDataConsumer {
    UIColor * _backgroundColor;
    UIColor * _borderColor;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _borderMargins;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _borderRadii;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _borderWidths;
    IKColor * _iKBackgroundColor;
    long long  _imageContentMode;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _imagePadding;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    long long  _imageTreatment;
    UIColor * _shadowColor;
    struct CGSize { 
        double width; 
        double height; 
    }  _shadowOffset;
    double  _shadowRadius;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, retain) UIColor *borderColor;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } borderMargins;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } borderWidths;
@property (nonatomic) long long imageContentMode;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } imagePadding;
@property (nonatomic) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic) long long imageTreatment;
@property (nonatomic, retain) UIColor *shadowColor;
@property (nonatomic) struct CGSize { double x1; double x2; } shadowOffset;
@property (nonatomic) double shadowRadius;

+ (id)appIconConsumerWithSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)applePackIconConsumer;
+ (id)brickConsumer;
+ (id)brickConsumerWithBrickSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)cardIconConsumer;
+ (id)cardProductImageConsumer;
+ (id)categoriesMessagesConsumer;
+ (id)categoryIconConsumer;
+ (id)giftComposeProductImageConsumer;
+ (id)giftResultIconConsumer;
+ (id)giftResultProductImageConsumer;
+ (id)giftThemeIconConsumer;
+ (id)giftThemeProductImageConsumer;
+ (id)gridIconConsumer;
+ (bool)isImageCompressionEnabled;
+ (id)listIconConsumer;
+ (id)lockupIconConsumerWithSize:(long long)arg1;
+ (id)lockupProductImageConsumerWithSize:(long long)arg1;
+ (id)manageMessagesConsumer;
+ (id)mixedTopChartsNewsstandConsumer;
+ (id)newsstandRoomNewsstandConsumer;
+ (id)newsstandSwooshNewsstandConsumer;
+ (id)parentBundleIconConsumer;
+ (id)productImageConsumerWithSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)productPageProductImageConsumer;
+ (id)purchasedIconConsumer;
+ (id)purchasedMessagesConsumer;
+ (id)purchasedProductImageConsumer;
+ (id)roomIconConsumer;
+ (id)roomProductImageConsumer;
+ (id)safariBannerIconConsumer;
+ (id)safariBannerProductImageConsumer;
+ (id)shareSheetIconConsumer;
+ (id)swooshNewsstandConsumer;
+ (id)topChartsIconConsumer;
+ (id)topChartsNewsstandConsumer;
+ (id)updatesIconConsumer;
+ (id)updatesProductImageConsumer;
+ (id)wishlistIconConsumer;
+ (id)wishlistProductImageConsumer;

- (void).cxx_destruct;
- (id)_arcRoundedImageWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 contentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 cornerRadius:(double)arg3 drawBlock:(id /* block */)arg4;
- (bool)_backgroundIsOpaque;
- (id)_defaultPlaceholderColor;
- (void)_drawBordersWithImageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)_imageWithSize:(struct CGSize { double x1; double x2; })arg1 isOpaque:(bool)arg2 drawBlock:(id /* block */)arg3;
- (id)_leftToRightGradient:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 contentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 drawBlock:(id /* block */)arg3;
- (id)_outputImageWithInputSize:(struct CGSize { double x1; double x2; })arg1 outputSize:(struct CGSize { double x1; double x2; })arg2 drawBlock:(id /* block */)arg3;
- (id /* block */)_placeholderCornerPathBlock;
- (id)_radialBlurImageWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 contentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 drawBlock:(id /* block */)arg3;
- (id)_roundedBorderWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 contentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 drawBlock:(id /* block */)arg3;
- (id)_scaledImageWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 contentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 drawBlock:(id /* block */)arg3;
- (id)_uberBannerImageWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inputSize:(struct CGSize { double x1; double x2; })arg2 drawBlock:(id /* block */)arg3;
- (id)_uberImageWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inputSize:(struct CGSize { double x1; double x2; })arg2 drawBlock:(id /* block */)arg3;
- (id)backgroundColor;
- (id)borderColor;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })borderMargins;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })borderWidths;
- (long long)imageContentMode;
- (id)imageForColor:(id)arg1;
- (id)imageForColor:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)imageForImage:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })imagePadding;
- (id)imagePlaceholderForColor:(id)arg1;
- (struct CGSize { double x1; double x2; })imageSize;
- (long long)imageTreatment;
- (id)init;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 treatment:(long long)arg2;
- (id)initWithViewElement:(id)arg1;
- (bool)isImagePlaceholderAvailable;
- (void)setBackgroundColor:(id)arg1;
- (void)setBorderColor:(id)arg1;
- (void)setBorderMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setBorderWidths:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setImageContentMode:(long long)arg1;
- (void)setImagePadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setImageTreatment:(long long)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setShadowOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)setShadowRadius:(double)arg1;
- (id)shadowColor;
- (struct CGSize { double x1; double x2; })shadowOffset;
- (double)shadowRadius;

@end
