/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSAGalleryRep : TSDRep <TSDImageDrawingDataSource, TSKChangeSourceObserver, TSWPContainerTextEditingRep> {
    TSWPRep * _captionRep;
    TSDImageDrawingHelper * _drawingHelper;
}

@property (nonatomic, readonly) TSWPRep *captionRep;
@property (nonatomic, readonly) NSArray *childReps;
@property (nonatomic, readonly) TSWPRep *containedRep;
@property (nonatomic, readonly) NSObject<TSDContainerInfo> *containerInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) TSAGalleryLayout *galleryLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2 mixingTypeContext:(id)arg3;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })p_textureLayoutTransformInRootForRep:(id)arg1 isMagicMove:(bool)arg2;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_textureRectForRep:(id)arg1 isMagicMove:(bool)arg2;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })p_textureRenderTransformRelativeToTextureRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forRep:(id)arg2 isMagicMove:(bool)arg3;

- (void).cxx_destruct;
- (id)captionRep;
- (id)childReps;
- (id)containedRep;
- (id)containerInfo;
- (void)dealloc;
- (void)didDisplayTextureWithDescription:(id)arg1 isAtEndOfBuild:(bool)arg2;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (id)galleryInfo;
- (id)galleryLayout;
- (id)imageDrawingHelperAdjustedImageData:(id)arg1;
- (id)imageDrawingHelperImageData:(id)arg1;
- (bool)imageDrawingHelperImageHasAlpha:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageDrawingHelperImageRect:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })imageDrawingHelperImageTransformInRootForAntialiasingDefeat:(id)arg1;
- (id)imageDrawingHelperThumbnailAdjustedImageData:(id)arg1;
- (id)imageDrawingHelperThumbnailImageData:(id)arg1;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (void)invalidateCurrentItem;
- (void)p_announceNewItemForAccessibilityIfNeeded;
- (void)p_drawImageInContext:(struct CGContext { }*)arg1 forLayer:(bool)arg2;
- (id)p_emptyPlaceholderImage;
- (bool)p_isEmpty;
- (id)p_newTextureForStage:(unsigned long long)arg1 isIncoming:(bool)arg2 includeImage:(bool)arg3 includeCaption:(bool)arg4 size:(struct CGSize { double x1; double x2; })arg5 offset:(struct CGPoint { double x1; double x2; })arg6 renderTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg7;
- (void)recursivelyPerformSelector:(SEL)arg1;
- (void)recursivelyPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1 withObject:(id)arg2;
- (id)textureForDescription:(id)arg1;
- (void)updateChildrenFromLayout;
- (void)willBeRemoved;

@end
