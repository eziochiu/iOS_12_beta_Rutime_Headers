/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIImage : NSObject <DOCThumbnail, MKArtworkImageSource, NSItemProviderReading, NSItemProviderWriting, NSSecureCoding, UIItemProviderPresentationSizeProviding, UIItemProviderReading, UIItemProviderWriting> {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _alignmentRectInsets;
    bool  _flipsForRightToLeftLayoutDirection;
    UIImageAsset * _imageAsset;
    struct { 
        unsigned int named : 1; 
        unsigned int imageOrientation : 3; 
        unsigned int cached : 1; 
        unsigned int hasPattern : 1; 
        unsigned int isCIImage : 1; 
        unsigned int renderingMode : 2; 
        unsigned int suppressesAccessibilityHairlineThickening : 1; 
        unsigned int hasDecompressionInfo : 1; 
    }  _imageFlags;
    void * _imageRef;
    double  _scale;
    UITraitCollection * _traitCollection;
    _UIImageVectorImageSupport * _vectorImageSupport;
}

@property (nonatomic, readonly) struct CGImage { }*CGImage;
@property (getter=_CGPDFPage, nonatomic, readonly) struct CGPDFPage { }*CGPDFPage;
@property (nonatomic, readonly) CIImage *CIImage;
@property (nonatomic, retain) NSString *MCD_identifier;
@property (readonly) struct CGImage { }*_gkCGImage;
@property (readonly) long long _gkImageOrientation;
@property (readonly) double _gkScale;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } alignmentRectInsets;
@property (nonatomic, readonly) NSURL *artworkCatalogBackingFileURL;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } capInsets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) bool flipsForRightToLeftLayoutDirection;
@property (readonly) bool hasFinishedTryingToFetchCorrectThumbnail;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImageAsset *imageAsset;
@property (nonatomic, readonly) long long imageOrientation;
@property (nonatomic, readonly) UIGraphicsImageRendererFormat *imageRendererFormat;
@property (nonatomic, readonly) NSArray *images;
@property (nonatomic, readonly) bool isRepresentativeIcon;
@property (nonatomic, readonly) long long leftCapWidth;
@property (getter=isLoading, nonatomic, readonly) bool loading;
@property (nonatomic, readonly) NSOperation *operation;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } preferredPresentationSizeForItemProvider;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } px_pixelSize;
@property (nonatomic, readonly) long long renderingMode;
@property (nonatomic, readonly) long long resizingMode;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIImage *thumbnail;
@property (nonatomic, readonly) long long topCapHeight;
@property (nonatomic, copy) UITraitCollection *traitCollection;
@property (nonatomic, retain) _UIImageVectorImageSupport *vectorImageSupport;
@property (nonatomic, readonly, copy) NSArray *writableTypeIdentifiersForItemProvider;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)_animatedImageNamed:(id)arg1 inBundle:(id)arg2 compatibleWithTraitCollection:(id)arg3 duration:(double)arg4;
+ (id)_animatedResizableImageNamed:(id)arg1 inBundle:(id)arg2 compatibleWithTraitCollection:(id)arg3 capInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg4 resizingMode:(long long)arg5 duration:(double)arg6;
+ (id)_applicationIconImageForBundleIdentifier:(id)arg1 format:(int)arg2;
+ (id)_applicationIconImageForBundleIdentifier:(id)arg1 format:(int)arg2 scale:(double)arg3;
+ (id)_backgroundGradientWithStartColor:(id)arg1 andEndColor:(id)arg2;
+ (id)_cachedImageForKey:(id)arg1 fromBlock:(id /* block */)arg2;
+ (void)_clearAssetCaches;
+ (id)_defaultBackgroundGradient;
+ (id)_deviceSpecificImageNamed:(id)arg1;
+ (id)_deviceSpecificImageNamed:(id)arg1 inBundle:(id)arg2;
+ (void)_dropResourceReferencesForURL:(id)arg1;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_edgeInsetsForStylePresetNames:(id)arg1 scale:(double)arg2;
+ (void)_flushCache:(id)arg1;
+ (void)_flushSharedImageCache;
+ (id)_iconForResourceProxy:(id)arg1 format:(int)arg2;
+ (id)_iconForResourceProxy:(id)arg1 format:(int)arg2 options:(unsigned long long)arg3;
+ (id)_iconForResourceProxy:(id)arg1 variant:(int)arg2 options:(int)arg3 variantsScale:(double)arg4;
+ (id)_iconForResourceProxy:(id)arg1 variant:(int)arg2 variantsScale:(double)arg3;
+ (int)_iconVariantForUIApplicationIconFormat:(int)arg1 idiom:(long long)arg2 scale:(double*)arg3;
+ (int)_iconVariantForUIApplicationIconFormat:(int)arg1 scale:(double*)arg2;
+ (long long)_idiomDefinedByPath:(id)arg1;
+ (id)_imageNamed:(id)arg1 withTrait:(id)arg2;
+ (id)_imageWithCGPDFPage:(struct CGPDFPage { }*)arg1;
+ (id)_imageWithCGPDFPage:(struct CGPDFPage { }*)arg1 scale:(double)arg2 orientation:(long long)arg3;
+ (bool)_isCGImageAlphaMask:(struct CGImage { }*)arg1;
+ (id)_kitImageNamed:(id)arg1 withTrait:(id)arg2;
+ (struct CGSize { double x1; double x2; })_legibilityImageSizeForSize:(struct CGSize { double x1; double x2; })arg1 style:(long long)arg2;
+ (long long)_mirroredImageOrientationForOrientation:(long long)arg1;
+ (id)_noiseImage;
+ (unsigned long long)_scaleDefinedByPath:(id)arg1;
+ (id)_tintedImageForSize:(struct CGSize { double x1; double x2; })arg1 withTint:(id)arg2 effectsImage:(id)arg3 maskImage:(id)arg4 style:(int)arg5;
+ (id)_tintedImageForSize:(struct CGSize { double x1; double x2; })arg1 withTint:(id)arg2 maskImage:(id)arg3 effectsImage:(id)arg4 style:(int)arg5;
+ (id)_tintedImageForSize:(struct CGSize { double x1; double x2; })arg1 withTint:(id)arg2 maskImage:(id)arg3 effectsImage:(id)arg4 style:(int)arg5 edgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg6;
+ (id)animatedImageNamed:(id)arg1 duration:(double)arg2;
+ (id)animatedImageWithImages:(id)arg1 duration:(double)arg2;
+ (id)animatedResizableImageNamed:(id)arg1 capInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 duration:(double)arg3;
+ (id)animatedResizableImageNamed:(id)arg1 capInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 resizingMode:(long long)arg3 duration:(double)arg4;
+ (id)imageAtPath:(id)arg1;
+ (id)imageFromAlbumArtData:(id)arg1 height:(int)arg2 width:(int)arg3 bytesPerRow:(int)arg4 cache:(bool)arg5;
+ (id)imageNamed:(id)arg1;
+ (id)imageNamed:(id)arg1 inBundle:(id)arg2;
+ (id)imageNamed:(id)arg1 inBundle:(id)arg2 compatibleWithTraitCollection:(id)arg3;
+ (id)imageWithCGImage:(struct CGImage { }*)arg1;
+ (id)imageWithCGImage:(struct CGImage { }*)arg1 scale:(double)arg2 orientation:(long long)arg3;
+ (id)imageWithCIImage:(id)arg1;
+ (id)imageWithCIImage:(id)arg1 scale:(double)arg2 orientation:(long long)arg3;
+ (id)imageWithContentsOfCPBitmapFile:(id)arg1 flags:(int)arg2;
+ (id)imageWithContentsOfFile:(id)arg1;
+ (id)imageWithData:(id)arg1;
+ (id)imageWithData:(id)arg1 scale:(double)arg2;
+ (void)initialize;
+ (id)kitImageNamed:(id)arg1;
+ (id)newObjectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 options:(id)arg3 error:(id*)arg4;
+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3;
+ (id)readableTypeIdentifiersForItemProvider;
+ (bool)supportsSecureCoding;
+ (id)writableTypeIdentifiersForItemProvider;

- (void).cxx_destruct;
- (struct CGImage { }*)CGImage;
- (id)CIImage;
- (struct CGPDFPage { }*)_CGPDFPage;
- (struct CGSize { double x1; double x2; })_CGPDFPageSize;
- (id)_applicationIconImageForFormat:(int)arg1 precomposed:(bool)arg2;
- (id)_applicationIconImageForFormat:(int)arg1 precomposed:(bool)arg2 idiom:(long long)arg3 scale:(double)arg4;
- (id)_applicationIconImageForFormat:(int)arg1 precomposed:(bool)arg2 scale:(double)arg3;
- (id)_applyBackdropViewSettings:(id)arg1;
- (id)_applyBackdropViewSettings:(id)arg1 allowImageResizing:(bool)arg2;
- (id)_applyBackdropViewSettings:(id)arg1 includeTints:(bool)arg2 includeBlur:(bool)arg3;
- (id)_applyBackdropViewSettings:(id)arg1 includeTints:(bool)arg2 includeBlur:(bool)arg3 allowImageResizing:(bool)arg4;
- (id)_applyBackdropViewStyle:(long long)arg1 includeTints:(bool)arg2 includeBlur:(bool)arg3;
- (id)_applyBackdropViewStyle:(long long)arg1 includeTints:(bool)arg2 includeBlur:(bool)arg3 graphicsQuality:(long long)arg4;
- (id)_applyBackdropViewStyle:(long long)arg1 includeTints:(bool)arg2 includeBlur:(bool)arg3 graphicsQuality:(long long)arg4 allowImageResizing:(bool)arg5;
- (id)_bezeledImageWithShadowRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 fillRed:(double)arg5 green:(double)arg6 blue:(double)arg7 alpha:(double)arg8 drawShadow:(bool)arg9;
- (void)_cacheStyledImage:(id)arg1 forPresets:(id)arg2 tintColor:(id)arg3;
- (id)_cachedImageStyledWithPresets:(id)arg1 forTintColor:(id)arg2;
- (struct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; })_calculateStatistics;
- (bool)_canEncodeWithName:(id)arg1 coder:(id)arg2;
- (void)_configureImage:(id)arg1;
- (void)_configureVectorImagePropertiesForImage:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentRectInPixels;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentStretchInPixels;
- (struct __IOSurface { }*)_copyIOSurface;
- (void)_decompressionComplete;
- (void)_decompressionFallbackImageCreation;
- (id)_decompressionInfo;
- (id)_doubleBezeledImageWithExteriorShadowRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 interiorShadowRed:(double)arg5 green:(double)arg6 blue:(double)arg7 alpha:(double)arg8 fillRed:(double)arg9 green:(double)arg10 blue:(double)arg11 alpha:(double)arg12;
- (void)_drawImageForLegibilitySettings:(id)arg1 strength:(double)arg2 size:(struct CGSize { double x1; double x2; })arg3;
- (void)_drawImageForLegibilitySettings:(id)arg1 strength:(double)arg2 size:(struct CGSize { double x1; double x2; })arg3 alphaOnly:(bool)arg4;
- (void)_drawImageForLegibilityStyle:(long long)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (void)_encodeDataWithCoder:(id)arg1 imageName:(id)arg2;
- (void)_encodePropertiesWithCoder:(id)arg1;
- (id)_flatImageWithColor:(id)arg1;
- (id)_flatImageWithWhite:(double)arg1 alpha:(double)arg2;
- (void)_flipImageOrientationHorizontally;
- (bool)_hasDecompressionInfo;
- (id)_imageForLegibilitySettings:(id)arg1 strength:(double)arg2;
- (id)_imageForLegibilitySettings:(id)arg1 strength:(double)arg2 alphaOnly:(bool)arg3;
- (id)_imageForLegibilityStyle:(long long)arg1;
- (long long)_imageOrientationConsideringRTL;
- (long long)_imageOrientationConsideringRTLForUserInterfaceLayoutDirection:(long long)arg1;
- (id)_imagePaddedByInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)_imageScaledToProportion:(double)arg1 interpolationQuality:(int)arg2;
- (id)_imageThatSuppressesAccessibilityHairlineThickening;
- (id)_imageWithBrightnessModifiedForLegibilityStyle:(long long)arg1;
- (id)_imageWithStylePresets:(id)arg1 withTintColor:(id)arg2;
- (id)_initWithCGPDFPage:(struct CGPDFPage { }*)arg1;
- (id)_initWithCGPDFPage:(struct CGPDFPage { }*)arg1 scale:(double)arg2 orientation:(long long)arg3;
- (id)_initWithContentsOfLCRFile:(id)arg1;
- (id)_initWithData:(id)arg1 immediateLoadWithMaxSize:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 renderingIntent:(int)arg4;
- (id)_initWithData:(id)arg1 preserveScale:(bool)arg2;
- (id)_initWithData:(id)arg1 preserveScale:(bool)arg2 cache:(bool)arg3;
- (id)_initWithData:(id)arg1 scale:(double)arg2;
- (id)_initWithIOSurface:(struct __IOSurface { }*)arg1 imageOrientation:(long long)arg2;
- (id)_initWithIOSurface:(struct __IOSurface { }*)arg1 scale:(double)arg2 orientation:(long long)arg3;
- (id)_initWithOtherImage:(id)arg1;
- (bool)_isAlphaMask;
- (bool)_isCached;
- (bool)_isDecompressing;
- (bool)_isInvisibleAndGetIsTranslucent:(bool*)arg1;
- (bool)_isNamed;
- (bool)_isResizable;
- (bool)_isSubimage;
- (bool)_isTiledWhenStretchedToSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGColor { }*)_patternColor;
- (void)_preheatBitmapData;
- (id)_primitiveImageAsset;
- (bool)_representsCIImageWhichSupportsIOSurfaceRendering;
- (bool)_representsLayeredImage;
- (id)_resizableImageWithCapMask:(int)arg1;
- (id)_resizableImageWithSubimageInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 resizeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (void)_saveDecompressedImage:(struct CGImage { }*)arg1;
- (double)_scaleFromPDF;
- (id)_serializedData;
- (void)_setAlignmentRectInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_setAlwaysStretches:(bool)arg1;
- (void)_setCached:(bool)arg1;
- (void)_setDecompressionInfo:(id)arg1;
- (void)_setIsFlippedInRightToLeft;
- (void)_setNamed:(bool)arg1;
- (void)_setSuppressesAccessibilityHairlineThickening:(bool)arg1;
- (void)_setVectorImageCGPDFPage:(struct CGPDFPage { }*)arg1;
- (void)_setVectorImageFlatColor:(id)arg1;
- (void)_setVectorImagePaddingInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_setVectorImageScale:(double)arg1;
- (struct CGSize { double x1; double x2; })_sizeInPixels;
- (struct CGSize { double x1; double x2; })_sizeInPixelsFromPDF;
- (struct CGSize { double x1; double x2; })_sizeWithHairlineThickening:(bool)arg1 renderingEffects:(unsigned long long)arg2 forTraitCollection:(id)arg3;
- (void)_startEagerDecompression;
- (id)_stretchableImageWithCapInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)_subimageInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)_suppressesAccessibilityHairlineThickening;
- (struct CGColor { }*)_tiledPatternColor;
- (struct CGPDFPage { }*)_vectorImageCGPDFPage;
- (id)_vectorImageFlatColor;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_vectorImagePaddingInsets;
- (double)_vectorImageScale;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })capInsets;
- (void)compositeToPoint:(struct CGPoint { double x1; double x2; })arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 operation:(int)arg3 fraction:(double)arg4;
- (void)compositeToPoint:(struct CGPoint { double x1; double x2; })arg1 operation:(int)arg2;
- (void)compositeToPoint:(struct CGPoint { double x1; double x2; })arg1 operation:(int)arg2 fraction:(double)arg3;
- (void)compositeToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 operation:(int)arg3 fraction:(double)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)draw1PartImageInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)draw1PartImageInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fraction:(double)arg2;
- (void)draw1PartImageInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fraction:(double)arg2 operation:(int)arg3;
- (void)draw3PartImageWithSliceRects:(struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; })arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)draw3PartImageWithSliceRects:(struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; })arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 fraction:(double)arg3;
- (void)draw3PartImageWithSliceRects:(struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; })arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 operation:(int)arg3 fraction:(double)arg4;
- (void)draw9PartImageWithSliceRects:(struct { struct { struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_1_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_1_2_2; } x_1_1_1; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_2_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_2_2_2; } x_1_1_2; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_3_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_3_2_2; } x_1_1_3; } x1; struct { struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_1_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_1_2_2; } x_2_1_1; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_2_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_2_2_2; } x_2_1_2; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_3_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_3_2_2; } x_2_1_3; } x2; struct { struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_1_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_1_2_2; } x_3_1_1; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_2_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_2_2_2; } x_3_1_2; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_3_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_3_2_2; } x_3_1_3; } x3; })arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)draw9PartImageWithSliceRects:(struct { struct { struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_1_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_1_2_2; } x_1_1_1; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_2_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_2_2_2; } x_1_1_2; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_3_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_3_2_2; } x_1_1_3; } x1; struct { struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_1_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_1_2_2; } x_2_1_1; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_2_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_2_2_2; } x_2_1_2; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_3_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_3_2_2; } x_2_1_3; } x2; struct { struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_1_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_1_2_2; } x_3_1_1; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_2_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_2_2_2; } x_3_1_2; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_3_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_3_2_2; } x_3_1_3; } x3; })arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 fraction:(double)arg3;
- (void)draw9PartImageWithSliceRects:(struct { struct { struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_1_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_1_2_2; } x_1_1_1; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_2_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_2_2_2; } x_1_1_2; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_3_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_3_2_2; } x_1_1_3; } x1; struct { struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_1_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_1_2_2; } x_2_1_1; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_2_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_2_2_2; } x_2_1_2; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_3_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_3_2_2; } x_2_1_3; } x2; struct { struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_1_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_1_2_2; } x_3_1_1; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_2_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_2_2_2; } x_3_1_2; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_3_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_3_2_2; } x_3_1_3; } x3; })arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 operation:(int)arg3 fraction:(double)arg4;
- (void)drawAsPatternInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)drawAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 blendMode:(int)arg2 alpha:(double)arg3;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 blendMode:(int)arg2 alpha:(double)arg3;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (bool)flipsForRightToLeftLayoutDirection;
- (unsigned long long)hash;
- (id)imageAsset;
- (id)imageFlippedForRightToLeftLayoutDirection;
- (long long)imageOrientation;
- (struct CGImage { }*)imageRef;
- (id)imageRendererFormat;
- (id)imageWithAlignmentRectInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)imageWithHorizontallyFlippedOrientation;
- (id)imageWithRenderingMode:(long long)arg1;
- (id)images;
- (id)initWithCGImage:(struct CGImage { }*)arg1;
- (id)initWithCGImage:(struct CGImage { }*)arg1 imageOrientation:(long long)arg2;
- (id)initWithCGImage:(struct CGImage { }*)arg1 scale:(double)arg2 orientation:(long long)arg3;
- (id)initWithCIImage:(id)arg1;
- (id)initWithCIImage:(id)arg1 scale:(double)arg2 orientation:(long long)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1 cache:(bool)arg2;
- (id)initWithData:(id)arg1;
- (id)initWithData:(id)arg1 cache:(bool)arg2;
- (id)initWithData:(id)arg1 scale:(double)arg2;
- (id)initWithIOSurface:(struct __IOSurface { }*)arg1;
- (id)initWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3;
- (struct __IOSurface { }*)ioSurface;
- (bool)isEqual:(id)arg1;
- (long long)leftCapWidth;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(id /* block */)arg2;
- (id)patternColor;
- (struct CGSize { double x1; double x2; })preferredPresentationSizeForItemProvider;
- (void)registerLoadHandlersToItemProvider:(id)arg1;
- (long long)renderingMode;
- (id)resizableImageWithCapInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)resizableImageWithCapInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 resizingMode:(long long)arg2;
- (long long)resizingMode;
- (double)scale;
- (void)setImageAsset:(id)arg1;
- (void)setTraitCollection:(id)arg1;
- (void)setVectorImageSupport:(id)arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)stretchableImageWithLeftCapWidth:(long long)arg1 topCapHeight:(long long)arg2;
- (long long)topCapHeight;
- (id)traitCollection;
- (id)vectorImageSupport;
- (bool)writeToCPBitmapFile:(id)arg1 flags:(int)arg2;

// Image: /System/Library/Frameworks/AVKit.framework/AVKit

+ (id)avkit_flatWhiteResizableTemplateImage;
+ (void)avkit_imageNamed:(id)arg1 completion:(id /* block */)arg2;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

+ (id)cnui_defaultChevronImage;
+ (id)cnui_highlightedChevronImage;
+ (id)cnui_imageNamed:(id)arg1;
+ (id)cnui_templateImageNamed:(id)arg1;
+ (id)cnui_templateImageNamed:(id)arg1 withTint:(id)arg2;
+ (id)cnui_tintedImageNamed:(id)arg1 withTint:(id)arg2;
+ (id)cnui_userActionImageForType:(id)arg1 style:(long long)arg2;
+ (long long)userActionImageStyleForStyle:(long long)arg1;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

+ (id)_mapkit_imageFromVKImage:(id)arg1;
+ (id)_mapkit_imageNamed:(id)arg1;
+ (id)_mapkit_imageNamed:(id)arg1 compatibleWithTraitCollection:(id)arg2;
+ (id)_mapkit_transitArtworkImageWithDataSource:(id)arg1 size:(long long)arg2 scale:(double)arg3;
+ (id)_mapkit_transitArtworkImageWithDataSource:(id)arg1 size:(long long)arg2 scale:(double)arg3 withWidthPaddingMultiple:(double)arg4;

- (id)_mapkit_dimmedImage;
- (id)_mapkit_horizontallyFlippedImage;
- (id)_mapkit_templateImageWithTintColor:(id)arg1;
- (id)badgeImageToDisplayWithScreenScale:(double)arg1;
- (id)imageToDisplayWithScreenScale:(double)arg1;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

- (id)artworkCatalogBackingFileURL;
- (id)imageWithEtchedBorderOfColor:(id)arg1 radius:(double)arg2;
- (id)imageWithShadow:(id)arg1;
- (id)initWithContentsOfExactFilePath:(id)arg1;

// Image: /System/Library/Frameworks/Messages.framework/Messages

- (id)__ms_PNGData;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

+ (id)pu_PhotosUIImageNamed:(id)arg1;
+ (id)pu_imageWithIconImage:(id)arg1 iconImageColor:(id)arg2 text:(id)arg3 font:(id)arg4 textColor:(id)arg5 fillColor:(id)arg6 strokeColor:(id)arg7 cornerRadius:(double)arg8;
+ (id)pu_imageWithText:(id)arg1 font:(id)arg2 textColor:(id)arg3 fillColor:(id)arg4 strokeColor:(id)arg5 cornerRadius:(double)arg6;

- (id)pu_extractPlayOverlayBackgroundImageFromCenter:(struct CGPoint { double x1; double x2; })arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 contentMode:(long long)arg3 asynchronously:(bool)arg4 handler:(id /* block */)arg5;
- (id)pu_overlayedImageWithColor:(id)arg1;
- (id)pu_tintedImageWithColor:(id)arg1;

// Image: /System/Library/Frameworks/QuickLook.framework/QuickLook

+ (id)imageWithImage:(id)arg1 scaledToSize:(struct CGSize { double x1; double x2; })arg2;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

+ (id)_sf_fallbackFaviconWithLightStyle:(bool)arg1;
+ (id)_sf_favoritesFaviconWithLightStyle:(bool)arg1;
+ (id)sf_imageFromMainBundleNamed:(id)arg1;
+ (id)ss_imageNamed:(id)arg1;

- (id)_sf_imageByResizingWithAccessibilityScale:(double)arg1;
- (bool)_sf_isLaunchImageSizedForOrientation:(long long)arg1 includesStatusBar:(bool*)arg2;
- (id)_sf_resizeImageToSize:(struct CGSize { double x1; double x2; })arg1;

// Image: /System/Library/Frameworks/Social.framework/Social

+ (id)socialFrameworkImageNamed:(id)arg1;

// Image: /System/Library/Frameworks/iAd.framework/iAd

+ (id)_iAd_imageNamed:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit

+ (id)akImageNamed:(id)arg1;
+ (id)ak_boldTextStyleImage;
+ (id)ak_colorSwatchPickerImageWithColor:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 selected:(bool)arg3;
+ (id)ak_colorSwatchToolbarButtonImageWithColor:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 selected:(bool)arg3;
+ (id)ak_italicTextStyleImage;
+ (id)ak_strikethroughTextStyleImage;
+ (id)ak_underlineTextStyleImage;

- (struct CGImage { }*)akCGImage;

// Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI

+ (id)aaui_imageFromColor:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI

+ (id)ak_imageWithColor:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit

+ (id)animatedImageWithAPNGRepresentation:(id)arg1;

- (id)APNGRepresentation;

// Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion

- (bool)blt_hasAlpha;

// Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit

+ (id)imageWithColor:(id)arg1;
+ (id)imageWithColor:(id)arg1 andSize:(struct CGSize { double x1; double x2; })arg2;
+ (bool)isSizeSwappedForImageOrientation:(long long)arg1;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformForImageOrientation:(long long)arg1 andSize:(struct CGSize { double x1; double x2; })arg2;

- (bool)_isSRGB;
- (bool)adjustFitInSize:(struct CGSize { double x1; double x2; }*)arg1 normalizeOrientation:(bool)arg2;
- (id)bluredImageWithFlippedXAxis:(bool)arg1;
- (id)cropImage:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)cropped16X9Image;
- (id)drawImageIntoSize:(struct CGSize { double x1; double x2; })arg1 maintainAspectRatio:(bool)arg2 normalizeOrientation:(bool)arg3;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 blendMode:(int)arg3 alpha:(float)arg4;
- (id)extendedRangeSafeDrawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)extendedRangeSafeDrawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 opaque:(bool)arg2 scale:(float)arg3;
- (id)scaledImageEqualOrSmallerThanSize:(struct CGSize { double x1; double x2; })arg1 maintainAspectRatio:(bool)arg2 normalizeOrientation:(bool)arg3;
- (id)scaledImageWithMaxDimension:(double)arg1;
- (struct CGSize { double x1; double x2; })scaledSizeEqualOrSmallerThanSize:(struct CGSize { double x1; double x2; })arg1 maintainAspectRatio:(bool)arg2 normalizeOrientation:(bool)arg3;
- (struct CGSize { double x1; double x2; })scaledSized:(struct CGSize { double x1; double x2; })arg1 maintainAspectRatio:(bool)arg2;
- (id)tintedImage;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

+ (id)abImageNamed:(id)arg1;
+ (id)ckColorImageOfSize:(struct CGSize { double x1; double x2; })arg1 withColor:(id)arg2;
+ (id)ckImageNamed:(id)arg1;
+ (id)ckImageNamed:(id)arg1 withTintColor:(id)arg2;
+ (id)ckImageWithData:(id)arg1;
+ (id)ckTemplateImageNamed:(id)arg1;

- (id)__ck_ASTCRepresentation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })__ck_contentsCenter;
- (id)__ck_imageWithOrientation:(long long)arg1;
- (id)__ck_resizableBalloonWithBalloonDescriptor:(struct CKBalloonDescriptor_t { BOOL x1; BOOL x2; BOOL x3; BOOL x4; unsigned long long x5; BOOL x6; bool x7; bool x8; bool x9; })arg1 framed:(bool)arg2;
- (id)ckImageWithTintColor:(id)arg1;
- (void)decode;

// Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit

+ (id)imageWithJSONObjectRepresentation:(id)arg1 bundle:(id)arg2;

- (id)JSONObjectRepresentationWritingResourcesToBundlePath:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit

- (id)ccuiAlphaOnlyImageForMaskImage;
- (id)ccuiSuitableCacheKeyForBitmapData;

// Image: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared

+ (id)etImageNamed:(id)arg1;
+ (id)etImageNamed:(id)arg1 inBundle:(id)arg2;

// Image: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })dc_aspectFitImageFrameForViewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 imageSize:(struct CGSize { double x1; double x2; })arg2;
+ (struct UIImage { Class x1; }*)dc_imageWithCGImage:(struct CGImage { }*)arg1;
+ (struct UIImage { Class x1; }*)dc_imageWithCGImage:(struct CGImage { }*)arg1 scale:(double)arg2 orientation:(long long)arg3;
+ (id)dc_orientationMetadataFromImageOrientation:(long long)arg1;
+ (struct UIImage { Class x1; }*)dc_orientedImageFromCGImage:(struct CGImage { }*)arg1 scale:(double)arg2 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3;
+ (struct UIImage { Class x1; }*)dc_orientedImageFromImage:(struct UIImage { Class x1; }*)arg1 fromOrientation:(long long)arg2;
+ (struct UIImage { Class x1; }*)dc_orientedImageFromImage:(struct UIImage { Class x1; }*)arg1 toOrientation:(long long)arg2;

- (struct CGImage { }*)dc_CGImage;
- (id)dc_JPEGData;
- (id)dc_JPEGDataWithOrientation:(long long)arg1;
- (id)dc_imageDataWithUTType:(id)arg1;
- (id)dc_imageDataWithUTType:(id)arg1 metadata:(id)arg2;
- (long long)dc_imageOrientation;
- (struct UIImage { Class x1; }*)dc_scaledImageMaxDimension:(double)arg1 scale:(double)arg2;
- (struct UIImage { Class x1; }*)dc_scaledImageMinDimension:(double)arg1 scale:(double)arg2;
- (struct UIImage { Class x1; }*)dc_scaledImageWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;

// Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore

- (void)addListener:(id)arg1;
- (bool)hasFinishedTryingToFetchCorrectThumbnail;
- (bool)isLoading;
- (bool)isRepresentativeIcon;
- (id)operation;
- (void)removeListener:(id)arg1;
- (void)scheduleUpdateIfNeeded;
- (id)thumbnail;

// Image: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI

+ (id)blankImageOfSize:(struct CGSize { double x1; double x2; })arg1;

- (id)compositeImage:(id)arg1;
- (id)compositeImage:(id)arg1 blendMode:(int)arg2 alpha:(double)arg3;
- (id)imagesWithSpriteSize:(struct CGSize { double x1; double x2; })arg1;
- (id)tintedImageWithColor:(id)arg1;
- (id)tintedImageWithColor:(id)arg1;

// Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI

+ (id)fa_pointImageOfColor:(id)arg1;

// Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI

+ (id)fiui_imageWithColor:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
+ (id)fiui_pixelImageWithColor:(id)arg1;

// Image: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities

- (id)FU_imageTintedWithColor:(id)arg1;

// Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI

- (id)imageByCroppingToUniformCenter;
- (id)imageWithCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

// Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI

+ (id)_gkHostImageWithBundleIdentifier:(id)arg1 imageName:(id)arg2;

// Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI

+ (id)_gkImageWithCGImage:(struct CGImage { }*)arg1 scale:(double)arg2 orientation:(long long)arg3;
+ (id)_gkImageWithRawData:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 rowBytes:(unsigned long long)arg4 bitmapInfo:(unsigned int)arg5;
+ (void)_gkloadRemoteImageForURL:(id)arg1 queue:(id)arg2 withCompletionHandler:(id /* block */)arg3;

- (struct CGImage { }*)_gkCGImage;
- (id)_gkImageByAddingAlpha;
- (id)_gkImageByScalingAndCroppingToSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (id)_gkImageByScalingToSize:(struct CGSize { double x1; double x2; })arg1;
- (id)_gkImageByScalingToSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (id)_gkImageByScalingToSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 padColor:(id)arg3;
- (id)_gkImageByTintingWithColor:(id)arg1;
- (long long)_gkImageOrientation;
- (void)_gkReadAtSize:(struct CGSize { double x1; double x2; })arg1 ARGBHostEndianBytes:(id /* block */)arg2;
- (double)_gkScale;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

+ (id)hk_disclosureChevronImage;
+ (id)hk_transparentInterfaceImageWithSize:(struct CGSize { double x1; double x2; })arg1;

- (id)hk_croppedImageWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)hk_resizedImageWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)hk_resizedInterfaceImageWithSize:(struct CGSize { double x1; double x2; })arg1;
- (double)hk_scaledImageViewHeightWithScaledWidth:(double)arg1;
- (id)hk_watchIconImage;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)imageWithNormalizedOrientation;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

+ (id)hu_locationArrowTemplate;
+ (struct CGSize { double x1; double x2; })hu_scaleSize:(struct CGSize { double x1; double x2; })arg1 toSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3;

- (id)hu_imageScaledToSize:(struct CGSize { double x1; double x2; })arg1 contentMode:(long long)arg2;

// Image: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI

- (id)layerContentsForLayer:(id)arg1;

// Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation

+ (id)_lp_createImageWithCGImage:(struct CGImage { }*)arg1;

- (struct CGImage { }*)_lp_CGImage;
- (id)_lp_flatImageWithColor:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI

+ (id)mu_markupAppIcon;

// Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI

+ (id)imageWithSize:(struct CGSize { double x1; double x2; })arg1 opaque:(bool)arg2 fromBlock:(id /* block */)arg3;

- (id)scaledImageWithSize:(struct CGSize { double x1; double x2; })arg1;

// Image: /System/Library/PrivateFrameworks/Memories.framework/Memories

+ (id)imageFlippedIfABLocaleWithName:(id)arg1;
+ (id)imageNamed:(id)arg1 keepInCache:(bool)arg2;
+ (id)imageWithColor:(id)arg1;
+ (id)imageWithColor:(id)arg1 andSize:(struct CGSize { double x1; double x2; })arg2;
+ (bool)isSizeSwappedForImageOrientation:(long long)arg1;
+ (void)saveToStretchyCache:(id)arg1 forKey:(id)arg2;
+ (id)stretchyImageNamed:(id)arg1;
+ (id)stretchyImageNamed:(id)arg1 hStretch:(bool)arg2 vStretch:(bool)arg3;
+ (id)stretchyVersionH:(bool)arg1 V:(bool)arg2 forImage:(id)arg3;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformForImageOrientation:(long long)arg1 andSize:(struct CGSize { double x1; double x2; })arg2;

- (bool)_isSRGB;
- (bool)adjustFitInSize:(struct CGSize { double x1; double x2; }*)arg1 normalizeOrientation:(bool)arg2;
- (id)applyBlurWithRadius:(double)arg1 tintColor:(id)arg2 saturationDeltaFactor:(double)arg3 maskImage:(id)arg4;
- (id)applyBlurWithRadius:(double)arg1 tintColor:(id)arg2 saturationDeltaFactor:(double)arg3 maskImage:(id)arg4 scale:(double)arg5;
- (id)applyDarkEffect;
- (id)applyExtraLightEffect;
- (id)applyLightEffect;
- (id)applyTintEffectWithColor:(id)arg1;
- (id)cropImage:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)cropped16X9Image;
- (id)drawImageIntoSize:(struct CGSize { double x1; double x2; })arg1 maintainAspectRatio:(bool)arg2 normalizeOrientation:(bool)arg3;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 blendMode:(int)arg3 alpha:(float)arg4;
- (id)extendedRangeSafeDrawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)extendedRangeSafeDrawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 opaque:(bool)arg2 scale:(float)arg3;
- (id)scaledImageEqualOrSmallerThanSize:(struct CGSize { double x1; double x2; })arg1 maintainAspectRatio:(bool)arg2 normalizeOrientation:(bool)arg3;
- (id)scaledImageWithMaxDimension:(double)arg1;
- (struct CGSize { double x1; double x2; })scaledSizeEqualOrSmallerThanSize:(struct CGSize { double x1; double x2; })arg1 maintainAspectRatio:(bool)arg2 normalizeOrientation:(bool)arg3;
- (struct CGSize { double x1; double x2; })scaledSized:(struct CGSize { double x1; double x2; })arg1 maintainAspectRatio:(bool)arg2;
- (id)stretchyHVersion;
- (id)stretchyImageViewWithLeftCap:(double)arg1 topCap:(double)arg2;
- (id)stretchyImageWithLeftCapWidth:(int)arg1 topCapHeight:(int)arg2;
- (id)stretchyVVersion;
- (id)stretchyVersion;
- (id)stretchyVersionH:(bool)arg1 V:(bool)arg2;
- (id)tintedImage;

// Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI

- (id)MCD_identifier;
- (void)setMCD_identifier:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NanoPhotosUICompanion.framework/NanoPhotosUICompanion

+ (id)_npto_eagerlyDecodedImageWithData:(id)arg1 orientation:(long long)arg2;

- (void)_npto_drawWithAspectFillInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_npto_drawWithAspectFillInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 biasTowardsFaces:(id)arg2;
- (void)_npto_drawWithSrcRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 intoDstRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)_npto_subImageFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

// Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion

+ (id)newImageForScreenCorner:(unsigned long long)arg1 device:(id)arg2 cornerRadius:(double)arg3;

// Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI

- (id)nu_imageByApplyingAlpha:(double)arg1;
- (id)nu_scaledImageWithMaximumSize:(struct CGSize { double x1; double x2; })arg1 targetScale:(double)arg2;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

+ (id)UIImageFromCIImage:(id)arg1;
+ (struct UIImage { Class x1; }*)fileIconForURL:(id)arg1 withPreferredSize:(struct CGSize { double x1; double x2; })arg2;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })ic_aspectFitImageFrameForViewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 imageSize:(struct CGSize { double x1; double x2; })arg2;
+ (struct UIImage { Class x1; }*)ic_imageWithColor:(struct UIColor { Class x1; }*)arg1 size:(struct CGSize { double x1; double x2; })arg2;
+ (struct UIImage { Class x1; }*)ic_imageWithContentsOfURL:(id)arg1;
+ (struct UIImage { Class x1; }*)imageNamed:(id)arg1 withTint:(struct UIColor { Class x1; }*)arg2;
+ (id)orientationMetadataFromImageOrientation:(long long)arg1;
+ (struct UIImage { Class x1; }*)orientedImageFromCGImage:(struct CGImage { }*)arg1 scale:(double)arg2 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3;
+ (struct UIImage { Class x1; }*)orientedImageFromImage:(struct UIImage { Class x1; }*)arg1 fromOrientation:(long long)arg2;
+ (struct UIImage { Class x1; }*)orientedImageFromImage:(struct UIImage { Class x1; }*)arg1 toOrientation:(long long)arg2;

- (struct UIImage { Class x1; }*)decodeInBackground;
- (void)decodeWithCompletion:(id /* block */)arg1;
- (id)ic_JPEGData;
- (id)ic_JPEGDataWithOrientation:(long long)arg1;
- (id)ic_PNGData;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })ic_cropRectZeroAlpha;
- (id)ic_horizontallyMirroredImage;
- (id)ic_imageDataWithUTType:(id)arg1;
- (id)ic_imageDataWithUTType:(id)arg1 metadata:(id)arg2;
- (struct UIImage { Class x1; }*)imageFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGContext { }*)newARGB8BitmapContextFromImage:(struct CGImage { }*)arg1;
- (struct UIImage { Class x1; }*)scaledImageMaxDimension:(double)arg1 scale:(double)arg2;
- (struct UIImage { Class x1; }*)scaledImageMinDimension:(double)arg1 scale:(double)arg2;
- (struct UIImage { Class x1; }*)scaledImageWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

+ (id)imageWithPKImage:(id)arg1;

- (struct CGSize { double x1; double x2; })alignmentSize;
- (id)pkui_imageOverlaidWithColor:(id)arg1;
- (id)pkui_imageWithAlpha:(double)arg1;
- (id)pkui_resizableImageByTilingCenterPixel;
- (id)pkui_resizableImageByTilingHorizontally;
- (id)pkui_resizableImageByTilingVertically;

// Image: /System/Library/PrivateFrameworks/PersonaUI.framework/PersonaUI

+ (id)pr_imageWithCGImage:(struct CGImage { }*)arg1;
+ (id)pr_imageWithCGImage:(struct CGImage { }*)arg1 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (id)pr_imageWithCGImage:(struct CGImage { }*)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3;

- (id)pr_circleImageOfDiameter:(double)arg1 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)pr_circleImageWithCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGImage { }*)pr_imageRef;

// Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport

+ (void)bl_2xCacheMemoryWarning:(id)arg1;
+ (void)bl_begin2xImageCaching;
+ (id)bl_darkenImage:(id)arg1 blackAlpha:(double)arg2;
+ (void)bl_end2xImageCaching;
+ (int)bl_exifOrientationForImageOrientation:(long long)arg1;
+ (id)bl_flattenedPatternImage:(id)arg1 intoSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)bl_flattenedStretchableImage:(id)arg1 intoSize:(struct CGSize { double x1; double x2; })arg2;
+ (long long)bl_imageOrientationForExifOrientation:(int)arg1;
+ (int)bl_inverseOrientationForImageOrientation:(long long)arg1;
+ (bool)bl_isMirroredForImageOrientation:(long long)arg1;
+ (bool)bl_isSizeSwappedForImageOrientation:(long long)arg1;
+ (id)bl_maskImageFromAlphaChannelOfImage:(id)arg1 drawnIntoRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (long long)bl_orientationForImageOrientation:(long long)arg1 rotatedBy90DegreeTurnsClockwise:(int)arg2;
+ (id)bl_printImageNamed:(id)arg1;
+ (id)bl_resizablePrintImageNamed:(id)arg1 resizableImageWithCapInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 resizingMode:(long long)arg3;
+ (int)bl_rotationAngleForImageOrientation:(long long)arg1;
+ (void)bl_saveToStretchyCache:(id)arg1 forKey:(id)arg2;
+ (void)bl_set2xImageCache:(id)arg1;
+ (id)bl_stretchyImageNamed:(id)arg1;
+ (id)bl_stretchyImageNamed:(id)arg1 hStretch:(bool)arg2 vStretch:(bool)arg3;
+ (id)bl_stretchyVersionH:(bool)arg1 V:(bool)arg2 forImage:(id)arg3;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })bl_transformForImageOrientation:(long long)arg1 andSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)ciImageWithInk_renderWithInput:(id)arg1 withTexture1:(id)arg2 withTexture2:(id)arg3 withTexture3:(id)arg4 withStrength:(double)arg5 withSaturation:(float)arg6 thumbnailMode:(bool)arg7;
+ (float)defaultFXValue;
+ (id)defaultForFXKey:(id)arg1;
+ (id)defaultForFXKey:(id)arg1 groupIndex:(int)arg2 value:(float)arg3;
+ (id)imageBufferWithInk_blendTexture:(id)arg1 options:(id)arg2 gradientRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 padding:(double)arg4 liveInteraction:(bool)arg5 textureName:(id)arg6;
+ (int)imageWithArtisticEdge:(float)arg1 withBufferIn:(void*)arg2 withBufferOut:(void*)arg3 withBytesPerRow:(unsigned long long)arg4 withBytesPerRowOrg:(unsigned long long)arg5 withWidth:(int)arg6 withHeight:(int)arg7 destRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg8 padding:(double)arg9 scale:(int)arg10;
+ (id)imageWithInk_colorThumbnails:(float)arg1 sourceImageBuffer:(id)arg2;
+ (int)imageWithTiltShift:(float)arg1 withBufferIn:(void*)arg2 withBufferOut:(void*)arg3 withBytesPerRow:(unsigned long long)arg4 withBytesPerRowOrg:(unsigned long long)arg5 withWidth:(int)arg6 withHeight:(int)arg7 withTiltShiftData:(void*)arg8 withCenter:(struct CGPoint { double x1; double x2; })arg9 withSize:(double)arg10 withAngle:(float)arg11 destRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg12 padding:(double)arg13 scale:(int)arg14;
+ (float)inkEffectsSaturationFromAmount:(float)arg1;
+ (bool)integerOnlyValuesForGroupIndex:(int)arg1;
+ (int)maximumValueForGroupIndex:(int)arg1;
+ (int)minimumValueForGroupIndex:(int)arg1;
+ (void)tiltShiftPrepareLivePreview:(void*)arg1 fromBuffer:(id)arg2;
+ (bool)wantFXAngleInteractionForGroup:(int)arg1 value:(float)arg2;
+ (bool)wantFXAsymetricWidthDisplayForGroup:(int)arg1 value:(float)arg2;
+ (bool)wantFXCenterPointInteractionForGroup:(int)arg1 value:(float)arg2;
+ (bool)wantFXCenterSizeInteractionForGroup:(int)arg1 value:(float)arg2;
+ (bool)wantFXCenterWidthDisplayForGroup:(int)arg1 value:(float)arg2;
+ (bool)wantFXSingleTouchCenterAndSizeInteractionForGroup:(int)arg1 value:(float)arg2;

- (id)bl_bezeledImageWithShadowRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 fillRed:(double)arg5 green:(double)arg6 blue:(double)arg7 alpha:(double)arg8 drawShadow:(bool)arg9;
- (id)bl_colorAtX:(int)arg1 y:(int)arg2;
- (void)bl_drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)bl_fixAspectedThumbnailWithMediaAspectRatio:(double)arg1;
- (id)bl_flattenedImage;
- (id)bl_flattenedImageFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)bl_flattenedImageFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 opaque:(bool)arg2;
- (id)bl_flattenedImageInBoundingSize:(struct CGSize { double x1; double x2; })arg1;
- (id)bl_flattenedImageInBoundingSize:(struct CGSize { double x1; double x2; })arg1 preserveOrientation:(bool)arg2 boundingScale:(double)arg3;
- (id)bl_flattenedImageRotatedBy90DegreeTurnsClockwise:(long long)arg1;
- (id)bl_flattenedImageWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)bl_flattenedImageWithSize:(struct CGSize { double x1; double x2; })arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 scale:(double)arg3;
- (id)bl_flattenedImageWithSize:(struct CGSize { double x1; double x2; })arg1 opaque:(bool)arg2;
- (id)bl_flattenedImageWithSize:(struct CGSize { double x1; double x2; })arg1 opaque:(bool)arg2 scale:(int)arg3;
- (id)bl_flattenedImageWithSquareOfSize:(int)arg1;
- (id)bl_flattenedImageWithSquareOfSize:(int)arg1 scale:(int)arg2;
- (id)bl_hFlippedImage;
- (float)bl_lumaAtX:(int)arg1 y:(int)arg2;
- (float)bl_lumaAtX:(int)arg1 y:(int)arg2 sampleSize:(float)arg3;
- (struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; })bl_pixelAtX:(int)arg1 y:(int)arg2;
- (struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; })bl_pixelAtX:(int)arg1 y:(int)arg2 sampleSize:(float)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bl_rect;
- (void)bl_saveToDocumentsFolder:(id)arg1;
- (void)bl_saveToStretchyCache:(id)arg1 forKey:(id)arg2;
- (id)bl_stretchyHVersion;
- (id)bl_stretchyImageWithLeftCapWidth:(int)arg1 topCapHeight:(int)arg2;
- (id)bl_stretchyVVersion;
- (id)bl_stretchyVersion;
- (id)bl_stretchyVersionH:(bool)arg1 V:(bool)arg2;
- (id)bl_transparentBorderImage:(unsigned long long)arg1;
- (id)description;
- (void)dumpTexture:(struct __CVBuffer { }*)arg1;

// Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices

+ (bool)isSizeSwappedForImageOrientation:(long long)arg1;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformForImageOrientation:(long long)arg1 andSize:(struct CGSize { double x1; double x2; })arg2;

- (id)ASCIIDescription;
- (id)ASCIIDescriptionWithWidth:(long long)arg1 height:(long long)arg2;
- (void*)PL_imageContents;
- (id)newImageRotatedByDegrees:(float)arg1;
- (id)newImageWithOrientation:(long long)arg1;
- (id)pl_imageJPEGData;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (id)_px_createOverlayImageWithGlyphStyle:(unsigned long long)arg1 backgroundWhite:(double)arg2 backgroundAlpha:(double)arg3 glyphAlpha:(double)arg4;
+ (id)px_cachedCircularImageNamed:(id)arg1 tintedWithColor:(id)arg2 backgroundColor:(id)arg3;
+ (id)px_imageFromSolidColor:(id)arg1;
+ (id)px_imageNamed:(id)arg1;
+ (id)px_playOverlayImage:(unsigned long long)arg1;
+ (void)px_preloadPlayOverlayGlyphsIfNeeded;

- (id)px_ASTCCompressedImageWithBlockSize:(unsigned int)arg1;
- (id)px_backdropImageWithStyle:(long long)arg1;
- (id)px_debugImageWithStrokeRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)px_drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withContentMode:(long long)arg2;
- (id)px_extractPlayOverlayBackgroundImageFromLocation:(struct CGPoint { double x1; double x2; })arg1 inViewportWithSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 contentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 asynchronously:(bool)arg5 handler:(id /* block */)arg6;
- (id)px_imageByCroppingEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)px_imageByCroppingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)px_imageByCroppingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 pixelTargetSize:(struct CGSize { double x1; double x2; })arg2 cornerRadius:(double)arg3;
- (id)px_imageWithDebugRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)px_isLargerThan:(id)arg1;
- (struct CGSize { double x1; double x2; })px_pixelSize;
- (id)px_predrawnImage;
- (id)px_tintedCircularImageWithColor:(id)arg1 backgroundColor:(id)arg2;
- (id)px_tintedImageWithColor:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit

- (id)pl_alphaOnlyImageForMask;

// Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences

+ (id)circleImageWithDiameter:(double)arg1 color:(id)arg2;

// Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI

+ (id)_ps_imageWithContentsOfCPBitmapFile:(id)arg1 scale:(double)arg2;

// Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices

- (id)rms_jpegDataScaledToSize:(struct CGSize { double x1; double x2; })arg1 compressionQuality:(float)arg2;

// Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared

+ (id)safari_imageWithSize:(struct CGSize { double x1; double x2; })arg1 actions:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI

+ (id)st_blankSpaceImageWithSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)st_imageForCategoryIdentifier:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices

+ (id)ss_cgImageBackedImageFromImageSurface:(id)arg1;
+ (id)ss_imageFromImageSurface:(id)arg1;

- (id)ss_imageSurfaceFromImage;

// Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI

+ (id)siriui_semiTransparentChevronImage;
+ (id)siriui_semiTransparentChevronImageAndAllowNaturalLayout:(bool)arg1;
+ (id)siriui_semiTransparentChevronImageWithColor:(id)arg1 allowNaturalLayout:(bool)arg2;

// Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation

+ (long long)UIImageOrientationForExifOrientation:(long long)arg1;
+ (id)animatedImageAtURL:(id)arg1;
+ (id)decompressedDeviceImageWithCGImage:(struct CGImage { }*)arg1 opaque:(bool)arg2 scale:(double)arg3 orientation:(long long)arg4;
+ (id)imageWithColor:(id)arg1 andSize:(struct CGSize { double x1; double x2; })arg2 opaque:(bool)arg3 scale:(double)arg4;

- (id)applyBlurDarkEffect;
- (id)applyBlurExtraLightEffect;
- (id)applyBlurLightEffect;
- (id)applyBlurTintEffectWithColor:(id)arg1;
- (id)applyBlurWithRadius:(double)arg1 tintColor:(id)arg2 saturationDeltaFactor:(double)arg3 maskImage:(id)arg4;
- (id)centerImageWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)decompressedDeviceImage:(bool)arg1;
- (id)imageWithAdjustedOrientation:(long long)arg1 andResolution:(unsigned long long)arg2;
- (id)imageWithSize:(struct CGSize { double x1; double x2; })arg1 andCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)imageWithSize:(struct CGSize { double x1; double x2; })arg1 opaque:(bool)arg2 scale:(double)arg3;
- (id)imageWithTransparentInset:(double)arg1;
- (struct CGImage { }*)newBorderMask:(unsigned long long)arg1 size:(struct CGSize { double x1; double x2; })arg2;

// Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation

+ (unsigned long long)sbf_bytesNeededForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 withContextType:(long long)arg3;
+ (id)sbf_imageFromBGRAContextWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 colorSpace:(struct CGColorSpace { }*)arg3 withAlpha:(bool)arg4 pool:(id)arg5 drawing:(id /* block */)arg6 encapsulation:(id /* block */)arg7;
+ (id)sbf_imageFromContextWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 type:(long long)arg3 pool:(id)arg4 drawing:(id /* block */)arg5;
+ (id)sbf_imageFromContextWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 type:(long long)arg3 pool:(id)arg4 drawing:(id /* block */)arg5 encapsulation:(id /* block */)arg6;
+ (id)sbf_imageWithIOSurface:(struct __IOSurface { }*)arg1 scale:(double)arg2 orientation:(long long)arg3;

- (id)sbf_ASTCSafeImage;
- (id)sbf_CGImageBackedImage;
- (long long)sbf_EXIFOrientation;
- (struct CGColorSpace { }*)sbf_colorSpace;
- (id)sbf_cropImageWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 outputSize:(struct CGSize { double x1; double x2; })arg2;
- (id)sbf_cropImageWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 outputSize:(struct CGSize { double x1; double x2; })arg2 canUseIOSurface:(bool)arg3;
- (id)sbf_cropImageWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 outputSize:(struct CGSize { double x1; double x2; })arg2 preservingAspectRatio:(bool)arg3;
- (id)sbf_cropImageWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 outputSize:(struct CGSize { double x1; double x2; })arg2 preservingAspectRatio:(bool)arg3 canUseIOSurface:(bool)arg4;
- (id)sbf_imageByConvertingToColorSpace:(struct CGColorSpace { }*)arg1 type:(long long)arg2;
- (id)sbf_imageByManipulatingInDeviceColorSpaceWithBlock:(id /* block */)arg1;
- (id)sbf_imageMaskedByColor:(id)arg1;
- (id)sbf_memoryMappedImageWithPool:(id)arg1;
- (id)sbf_resizeImageToSize:(struct CGSize { double x1; double x2; })arg1;
- (id)sbf_resizeImageToSize:(struct CGSize { double x1; double x2; })arg1 preservingAspectRatio:(bool)arg2;
- (id)sbf_resizedImageForCurrentMagnifyMode;
- (id)sbf_scaleImage:(double)arg1;
- (id)sbf_scaleImage:(double)arg1 canUseIOSurface:(bool)arg2;

// Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI

+ (id)singlePointImageWithColor:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI

+ (id)_tpImageNamed:(id)arg1 inBundle:(id)arg2 compatibleWithTraitCollection:(id)arg3;
+ (id)favoritesAudioGlyphImage;
+ (id)favoritesMailGlyphImage;
+ (id)favoritesMessageGlyphImage;
+ (id)favoritesTTYDirectGlyphImage;
+ (id)favoritesTTYRelayGlyphImage;
+ (id)favoritesVideoGlyphImage;
+ (id)favoritesWidgetAudioGlyphImage;
+ (id)favoritesWidgetMailGlyphImage;
+ (id)favoritesWidgetMessageGlyphImage;
+ (id)favoritesWidgetTTYDirectGlyphImage;
+ (id)favoritesWidgetTTYRelayGlyphImage;
+ (id)favoritesWidgetVideoGlyphImage;
+ (id)telephonyUIActionButtonGlyphImage;
+ (id)telephonyUIImageNamed:(id)arg1;
+ (id)telephonyUIUnreadIndicatorGlyphImage;
+ (id)telephonyUI_AudioControlsGlyphForDeviceType:(long long)arg1;
+ (id)telephonyUI_AudioRouteGlyphForDeviceType:(long long)arg1;
+ (id)telephonyUI_BluetoothAudioControlGlyphImage;
+ (id)telephonyUI_BluetoothAudioRouteGlyphImage;
+ (id)telephonyUI_CarPlayAudioRouteGlyphImage;
+ (id)telephonyUI_headphonesAudioRouteGlyphImage;
+ (id)telephonyUI_iPadAudioRouteGlyphImage;
+ (id)telephonyUI_iPhoneAudioRouteGlyphImage;
+ (id)telephonyUI_iPodAudioRouteGlyphImage;
+ (id)telephonyUI_muteAudioRouteGlyphImage;
+ (id)telephonyUI_speakerAudioRouteGlyphImage;
+ (id)tpImageNamed:(id)arg1 inBundle:(id)arg2;

- (id)imageWithEtchedBorderOfColor:(id)arg1 radius:(double)arg2;
- (id)imageWithShadow:(id)arg1;

// Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit

+ (id)nc_imageFromPDFWithFileURL:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
+ (id)nc_imageWithPDDocument:(struct CGPDFDocument { }*)arg1 size:(struct CGSize { double x1; double x2; })arg2;

// Image: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras

+ (id)imageForPlaceholderURL:(id)arg1;

// Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI

+ (id)imageWithColor:(id)arg1;
+ (id)vui_videosUIImageNamed:(id)arg1;

- (id)vui_imageWithColor:(id)arg1;

// Image: /System/Library/PrivateFrameworks/VoiceShortcutsUI.framework/VoiceShortcutsUI

+ (id)vcui_imageFromColor:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI

+ (unsigned long long)sbg_bytesNeededForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 withContextType:(int)arg3;
+ (id)sbg_imageFromContextWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 type:(int)arg3 pool:(id)arg4 drawing:(id /* block */)arg5;
+ (id)sbg_imageFromContextWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 type:(int)arg3 pool:(id)arg4 drawing:(id /* block */)arg5 encapsulation:(id /* block */)arg6;

- (id)_wlkui_iconImageOfSize:(struct CGSize { double x1; double x2; })arg1;
- (id)_wlkui_iconImageOfSize:(struct CGSize { double x1; double x2; })arg1 radius:(double)arg2 stroke:(double)arg3;

// Image: /System/Library/PrivateFrameworks/Weather.framework/Weather

- (id)WAImageLoaderPreCacheImage;

// Image: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI

+ (id)icqBundleImageNamed:(id)arg1;

// Image: /System/Library/PrivateFrameworks/iPhotoMigrationSupport.framework/iPhotoMigrationSupport

+ (id)blj_imageNamed:(id)arg1;

// Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI

- (id)stretchableImageWithLeftCapWidth:(long long)arg1 rightCapWidth:(long long)arg2;

@end
