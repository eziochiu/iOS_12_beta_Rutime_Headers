/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIThemeRendition : NSObject {
    long long  _artworkStatus;
    int  _blendMode;
    unsigned long long  _colorSpaceID;
    int  _exifOrientation;
    struct _renditionkeytoken { unsigned short x1; unsigned short x2; } * _key;
    NSString * _name;
    double  _opacity;
    struct CGSize { 
        double width; 
        double height; 
    }  _physicalSizeInMeters;
    NSDictionary * _properties;
    struct cuithemerenditionrenditionflags { 
        unsigned int isHeaderFlaggedFPO : 1; 
        unsigned int isExcludedFromContrastFilter : 1; 
        unsigned int isVectorBased : 1; 
        unsigned int isOpaque : 1; 
        unsigned int bitmapEncoding : 4; 
        unsigned int optOutOfThinning : 1; 
        unsigned int isFlippable : 1; 
        unsigned int isTintable : 1; 
        unsigned int preservedVectorRepresentation : 1; 
        unsigned int reserved : 20; 
    }  _renditionFlags;
    unsigned int  _scale;
    NSData * _srcData;
    struct _renditionkeytoken { 
        unsigned short identifier; 
        unsigned short value; 
    }  _stackKey;
    unsigned int  _subtype;
    long long  _templateRenderingMode;
    long long  _type;
    struct CGImage { } * _uncroppedImage;
    NSString * _utiType;
    long long  _validLookGradation;
}

@property (nonatomic) long long artworkStatus;
@property (nonatomic) int blendMode;
@property (nonatomic) int exifOrientation;
@property (nonatomic) NSString *internalName;
@property (nonatomic) unsigned int internalScale;
@property (nonatomic) long long internalTemplateRenderingMode;
@property (nonatomic) double opacity;
@property (nonatomic, readonly) NSData *srcData;
@property (nonatomic) unsigned int subtype;
@property (nonatomic) long long type;

+ (id)displayNameForRenditionType:(long long)arg1;
+ (id)filteredCSIDataFromBaseCSIData:(id)arg1;
+ (Class)renditionClassForRenditionType:(long long)arg1 andPixelFormat:(unsigned int)arg2;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_destinationFrame;
- (id)_initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg2 artworkStatus:(long long)arg3;
- (id)_initWithCSIHeader:(const struct _csiheader { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8 : 4; unsigned int x9 : 28; struct _csimetadata { unsigned int x_10_1_1; unsigned short x_10_1_2; unsigned short x_10_1_3; BOOL x_10_1_4[128]; } x10; unsigned int x11; struct _csibitmaplist { unsigned int x_12_1_1; unsigned int x_12_1_2[0]; } x12; }*)arg1;
- (void)_initalizeMetadataFromCSIData:(const struct _csiheader { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8 : 4; unsigned int x9 : 28; struct _csimetadata { unsigned int x_10_1_1; unsigned short x_10_1_2; unsigned short x_10_1_3; BOOL x_10_1_4[128]; } x10; unsigned int x11; struct _csibitmaplist { unsigned int x_12_1_1; unsigned int x_12_1_2[0]; } x12; }*)arg1;
- (void)_initializeCompositingOptionsFromCSIData:(const struct _csiheader { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8 : 4; unsigned int x9 : 28; struct _csimetadata { unsigned int x_10_1_1; unsigned short x_10_1_2; unsigned short x_10_1_3; BOOL x_10_1_4[128]; } x10; unsigned int x11; struct _csibitmaplist { unsigned int x_12_1_1; unsigned int x_12_1_2[0]; } x12; }*)arg1;
- (void)_initializePropertiesFromCSIData:(const struct _csiheader { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8 : 4; unsigned int x9 : 28; struct _csimetadata { unsigned int x_10_1_1; unsigned short x_10_1_2; unsigned short x_10_1_3; BOOL x_10_1_4[128]; } x10; unsigned int x11; struct _csibitmaplist { unsigned int x_12_1_1; unsigned int x_12_1_2[0]; } x12; }*)arg1;
- (void)_initializeRenditionKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (void)_initializeTypeIdentifiersWithLayout:(unsigned short)arg1;
- (void)_setStructuredThemeStore:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })alphaCroppedRect;
- (long long)artworkStatus;
- (id)assetPackIdentifier;
- (int)bitmapEncoding;
- (int)blendMode;
- (unsigned long long)colorSpaceID;
- (id)contentNames;
- (struct CGImage { }*)createImageFromPDFRenditionWithScale:(double)arg1;
- (const struct _csicolor { unsigned int x1; unsigned int x2; unsigned int x3 : 8; unsigned int x4 : 3; unsigned int x5 : 21; unsigned int x6; double x7[0]; }*)csiColor;
- (id)data;
- (void)dealloc;
- (id)description;
- (bool)edgesOnly;
- (id)effectPreset;
- (int)exifOrientation;
- (id)externalTags;
- (id)gradient;
- (double)gradientDrawingAngle;
- (unsigned int)gradientStyle;
- (id)imageForSliceIndex:(long long)arg1;
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg2;
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg2 artworkStatus:(long long)arg3;
- (id)internalName;
- (unsigned int)internalScale;
- (long long)internalTemplateRenderingMode;
- (bool)isFlippable;
- (bool)isHeaderFlaggedFPO;
- (bool)isInternalLink;
- (bool)isOpaque;
- (bool)isScaled;
- (bool)isTiled;
- (bool)isTintable;
- (bool)isValidForLookGradation:(long long)arg1;
- (bool)isVectorBased;
- (const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)key;
- (id)layerReferences;
- (id)linkingToRendition;
- (id)maskForSliceIndex:(long long)arg1;
- (id)metrics;
- (id)mipLevels;
- (id)name;
- (int)objectVersion;
- (double)opacity;
- (bool)optOutOfThinning;
- (struct CGSize { double x1; double x2; })originalUncroppedSize;
- (struct CGPDFDocument { }*)pdfDocument;
- (struct CGSize { double x1; double x2; })physicalSizeInMeters;
- (int)pixelFormat;
- (bool)preservedVectorRepresentation;
- (id)properties;
- (id)provideTextureInfo;
- (struct cuithemerenditionrenditionflags { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 4; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 20; }*)renditionFlags;
- (double)scale;
- (void)setArtworkStatus:(long long)arg1;
- (void)setBlendMode:(int)arg1;
- (void)setExifOrientation:(int)arg1;
- (void)setInternalName:(id)arg1;
- (void)setInternalScale:(unsigned int)arg1;
- (void)setInternalTemplateRenderingMode:(long long)arg1;
- (void)setName:(id)arg1;
- (void)setOpacity:(double)arg1;
- (void)setSubtype:(unsigned int)arg1;
- (void)setType:(long long)arg1;
- (id)sizeIndexes;
- (id)sliceInformation;
- (unsigned long long)sourceRowbytes;
- (id)srcData;
- (bool)substituteWithSystemColor;
- (unsigned int)subtype;
- (id)systemColorName;
- (long long)templateRenderingMode;
- (id)textureImages;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })transformation;
- (long long)type;
- (struct CGImage { }*)uncroppedImage;
- (struct CGImage { }*)unslicedImage;
- (struct CGSize { double x1; double x2; })unslicedSize;
- (id)utiType;
- (unsigned short)valueForTokenIdentifier:(unsigned short)arg1;

@end
