/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDImageInfo : TSDMediaInfo <TSDContainerInfo, TSDMixing, TSDReducableInfo, TSKTransformableObject, TSSPresetSource, TSSThemedObject> {
    TSPData * mAdjustedImageData;
    TSPData * mEnhancedImageData;
    TSDImageAdjustments * mImageAdjustments;
    TSPData * mImageData;
    TSDBezierPath * mInstantAlphaPath;
    bool  mInterpretsUntaggedImageDataAsGeneric;
    TSDMaskInfo * mMaskInfo;
    struct CGSize { 
        double width; 
        double height; 
    }  mNaturalSize;
    TSPData * mOriginalImageData;
    TSDMediaStyle * mStyle;
    TSPData * mThumbnailAdjustedImageData;
    TSPData * mThumbnailImageData;
    TSDBezierPath * mTracedPath;
}

@property (nonatomic, retain) TSPData *adjustedImageData;
@property (getter=isAnchoredToText, nonatomic, readonly) bool anchoredToText;
@property (getter=isAttachedToBodyText, nonatomic, readonly) bool attachedToBodyText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) TSPData *enhancedImageData;
@property (getter=isFloatingAboveText, nonatomic, readonly) bool floatingAboveText;
@property (nonatomic, copy) TSDInfoGeometry *geometry;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) TSDImageAdjustments *imageAdjustments;
@property (nonatomic, retain) TSPData *imageData;
@property (nonatomic, readonly) TSDMediaStyle *imageStyle;
@property (getter=isInlineWithText, nonatomic, readonly) bool inlineWithText;
@property (nonatomic, retain) TSDBezierPath *instantAlphaPath;
@property (nonatomic) bool interpretsUntaggedImageDataAsGeneric;
@property (nonatomic, retain) TSDMaskInfo *maskInfo;
@property (nonatomic) bool matchesObjectPlaceholderGeometry;
@property (nonatomic) struct CGSize { double x1; double x2; } naturalSize;
@property (nonatomic, retain) TSPData *originalImageData;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property (nonatomic, readonly) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (nonatomic) NSObject<TSDContainerInfo> *parentInfo;
@property (readonly) Class superclass;
@property (nonatomic, retain) TSPData *thumbnailAdjustedImageData;
@property (nonatomic, retain) TSPData *thumbnailImageData;
@property (nonatomic, readonly) TSDBezierPath *tracedPath;

+ (void)adjustIncomingImageGeometry:(id)arg1 maskGeometry:(id)arg2 forImageData:(id)arg3 maskedWithInstantAlphaPath:(id)arg4 withNaturalSize:(struct CGSize { double x1; double x2; })arg5 forTargetImageGeometry:(id)arg6 withTargetMaskGeometry:(id)arg7;
+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3;
+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3 reservedCount:(unsigned long long)arg4;
+ (id)bootstrapPropertyMapForPresetIndex:(unsigned long long)arg1 inTheme:(id)arg2 alternate:(int)arg3;
+ (id)presetKinds;

- (void)acceptVisitor:(id)arg1;
- (id)adjustedImageData;
- (struct CGPoint { double x1; double x2; })centerForReplacingWithNewMedia;
- (id)childInfos;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })computeFullTransform;
- (id)copyWithContext:(id)arg1;
- (id)copyWithContext:(id)arg1 style:(id)arg2;
- (void)dealloc;
- (id)defaultMaskInfo;
- (id)defaultMaskInfoWithContext:(id)arg1;
- (struct CGSize { double x1; double x2; })defaultOriginalSize;
- (id)enhancedImageData;
- (id)geometry;
- (id)geometryWithMask;
- (id)i_thumbnailForImageData:(id)arg1;
- (id)imageAdjustments;
- (id)imageData;
- (id)imageDatasForReducingFileSizeWithAssociatedHints;
- (id)imageStyle;
- (id)initWithContext:(id)arg1 geometry:(id)arg2;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 imageData:(id)arg4 originalImageData:(id)arg5;
- (id)instantAlphaPath;
- (bool)interpretsUntaggedImageDataAsGeneric;
- (bool)isMasked;
- (bool)isOpaque;
- (bool)isPDF;
- (bool)isValid;
- (Class)layoutClass;
- (bool)maskCanBeReset;
- (id)maskInfo;
- (id)mediaDisplayName;
- (id)mediaFileType;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (struct CGSize { double x1; double x2; })naturalSize;
- (id)objectForProperty:(int)arg1;
- (id)originalImageData;
- (struct CGSize { double x1; double x2; })originalSize;
- (id)parentInfo;
- (id)presetKind;
- (struct CGSize { double x1; double x2; })rawDataSize;
- (Class)repClass;
- (void)setAdjustedImageData:(id)arg1;
- (void)setEnhancedImageData:(id)arg1;
- (void)setExteriorTextWrap:(id)arg1;
- (void)setImageAdjustments:(id)arg1;
- (void)setImageData:(id)arg1;
- (void)setInstantAlphaPath:(id)arg1;
- (void)setInterpretsUntaggedImageDataAsGeneric:(bool)arg1;
- (void)setMaskInfo:(id)arg1;
- (void)setNaturalSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setOriginalImageData:(id)arg1;
- (void)setParentInfo:(id)arg1;
- (void)setStyle:(id)arg1;
- (void)setThumbnailAdjustedImageData:(id)arg1;
- (void)setThumbnailImageData:(id)arg1;
- (id)style;
- (Class)styleClass;
- (struct CGSize { double x1; double x2; })targetSizeForImageData:(id)arg1 associatedHint:(id)arg2;
- (id)thumbnailAdjustedImageData;
- (id)thumbnailImageData;
- (id)tracedPath;
- (void)updateGeometryToReplaceMediaInfo:(id)arg1;
- (id)updatedMaskInfoGeometryForImageDraggedBy:(struct CGPoint { double x1; double x2; })arg1;
- (void)wasRemovedFromDocumentRoot:(id)arg1;

@end
