/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDImageRep : TSDMediaRep <CALayerDelegate, TSDMagicMoveMatching> {
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  mBaseMaskLayoutTransform;
    struct CGImage { } * mCachedSizedImage;
    long long  mCachedSizedImageOrientation;
    struct CGSize { 
        double width; 
        double height; 
    }  mCachedSizedImageSize;
    CALayer * mContentsLayer;
    bool  mDirectlyManagesLayerContent;
    bool  mFrameInUnscaledCanvasIsValid;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mFrameInUnscaledCanvasRelativeToSuper;
    NSCache * mHitTestCache;
    long long  mHitTestCacheOnce;
    CAShapeLayer * mIAMaskLayer;
    unsigned long long  mImageSizingDisabledCount;
    bool  mInInstantAlphaMode;
    struct CGImage { } * mInstantAlphaImage;
    TSDInstantAlphaTracker * mInstantAlphaTracker;
    TSDLayoutGeometry * mLastImageGeometryInRoot;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  mLastLayoutToImageTransform;
    TSDLayoutGeometry * mLastMaskGeometryInRoot;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  mLastPictureFrameLayerTransform;
    NSRecursiveLock * mLayerUpdateAndSizingStateLock;
    CAShapeLayer * mMaskPathLayer;
    CAShapeLayer * mMaskSublayer;
    bool  mShowImageHighlight;
    struct CGImage { } * mSizedImage;
    NSObject<OS_dispatch_queue> * mSizedImageAccessQueue;
    bool  mSizedImageHasAdjustmentsBakedIn;
    bool  mSizedImageHasMaskBakedIn;
    struct CGPath { } * mSizedImageMaskPath;
    long long  mSizedImageOrientation;
    struct CGSize { 
        double width; 
        double height; 
    }  mSizedImageSize;
    TSDImageRepSizingState * mSizingState;
    bool  mSizingStateReady;
    NSMutableArray * mUpdateFromLayoutBlocks;
    NSObject<OS_dispatch_semaphore> * mUpdateFromLayoutBlocksLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2;
+ (struct CGPath { }*)p_newPathToBakeIntoSizedImageForSize:(struct CGSize { double x1; double x2; })arg1 withImageLayout:(id)arg2 orientation:(long long)arg3;

- (void)addBitmapsToRenderingQualityInfo:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)addKnobsToArray:(id)arg1;
- (id)additionalLayersOverLayer;
- (double)additionalRotationForKnobOrientation;
- (void)becameNotSelected;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsForHighlightLayer;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsForStandardKnobs;
- (void)cacheImageAtCurrentSize;
- (bool)canDrawInParallel;
- (bool)canDrawShadowInOneStepWithChildren:(bool)arg1;
- (struct CGPoint { double x1; double x2; })centerForRotation;
- (bool)containsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)contentsLayer;
- (void)dealloc;
- (void)didCreateLayer:(id)arg1;
- (void)didUpdateLayer:(id)arg1;
- (bool)directlyManagesLayerContent;
- (int)dragTypeAtCanvasPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)drawInContextWithoutEffects:(struct CGContext { }*)arg1 withContent:(bool)arg2 withStroke:(bool)arg3 withOpacity:(bool)arg4 forAlphaOnly:(bool)arg5 drawChildren:(bool)arg6;
- (void)drawInLayerContext:(struct CGContext { }*)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameInUnscaledCanvas;
- (void)generateSizedImageOnBackgroundThread;
- (bool)handleDoubleTapAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)highlightImage;
- (id)hitRepChrome:(struct CGPoint { double x1; double x2; })arg1;
- (void)i_willEnterForeground;
- (id)imageInfo;
- (id)imageLayout;
- (id)imageOfStroke:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (bool)isDraggable;
- (void)layoutInRootChangedFrom:(id)arg1 to:(id)arg2 translatedOnly:(bool)arg3;
- (id)maskInfo;
- (id)maskLayout;
- (id)newCachedSizedImage;
- (id)newCachedSizedImageWithNaturalSize;
- (id)overlayLayers;
- (void)p_canvasSelectionDidChange:(id)arg1;
- (void)p_createMaskLayerForLayer:(id)arg1;
- (struct CGSize { double x1; double x2; })p_desiredSizedImageSize;
- (bool)p_directlyManagesContentForLayer:(id)arg1;
- (void)p_disposeMaskLayer;
- (void)p_disposeStrokeLayer;
- (void)p_drawInContext:(struct CGContext { }*)arg1 withContent:(bool)arg2 withStroke:(bool)arg3 withOpacity:(double)arg4 withMask:(bool)arg5 withIAMask:(bool)arg6 forLayer:(bool)arg7 forShadow:(bool)arg8 forHitTest:(bool)arg9;
- (bool)p_drawsInOneStep;
- (void)p_generateSizedImage:(id)arg1;
- (void)p_generateSizedImageIfNecessary;
- (void)p_getAliasedValuesForMaskToBoundsDirectLayerFrame:(out struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 transform:(out struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg2;
- (bool)p_hitCacheGetCachedValue:(bool*)arg1 forPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)p_hitCacheSetCachedValue:(bool)arg1 forPoint:(struct CGPoint { double x1; double x2; })arg2;
- (id)p_imageData;
- (struct CGImage { }*)p_imageForDirectlyManagedLayer:(id)arg1;
- (id)p_imageProvider;
- (void)p_invalidateHitTestCache;
- (void)p_invalidateSizedImage;
- (void)p_invalidateSizedImageFromQueue;
- (struct CGImage { }*)p_newImageByApplyingAdjustmentsToImage:(struct CGImage { }*)arg1 alreadyEnhanced:(bool)arg2;
- (bool)p_okayToGenerateSizedImage;
- (long long)p_orientationForDirectlyManagedLayer;
- (void)p_popoverViewPresented:(id)arg1;
- (bool)p_shouldBakeMaskIntoSizedImage;
- (bool)p_shouldMaskWithFrameLayers;
- (bool)p_shouldRenderWithMaskToBounds;
- (void)p_startSizing;
- (void)p_takeSizedImageFromCache;
- (void)p_takeSizedImageFromState;
- (bool)p_takeSizedImageFromState:(id)arg1;
- (void)p_takeSizedImageFromStateIfReady;
- (void)p_updateDirectlyManagesLayerContentForLayer:(id)arg1;
- (void)p_updateMaskLayer:(id)arg1 forRepLayer:(id)arg2 shouldIncludeMask:(bool)arg3 shouldIncludeInstantAlpha:(bool)arg4;
- (void)p_updateMaskSublayersForMaskEditMode;
- (void)p_updateStrokeLayerForStroke:(id)arg1 repLayer:(id)arg2;
- (id)p_validatedBitmapImageProvider;
- (id)p_validatedImageProvider;
- (id)p_validatedThumbnailImageProvider;
- (id)pathSourceForSelectionHighlightBehavior;
- (void)popDisableImageSizing;
- (struct CGPoint { double x1; double x2; })positionOfStandardKnob:(id)arg1 forBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)processChangedProperty:(int)arg1;
- (void)processChanges:(id)arg1;
- (void)pushDisableImageSizing;
- (bool)shouldAllowReplacementFromPaste;
- (bool)shouldCreateSelectionKnobs;
- (bool)shouldIgnoreEditMenuTapAtPoint:(struct CGPoint { double x1; double x2; })arg1 withRecognizer:(id)arg2;
- (bool)shouldShowDragHUD;
- (bool)shouldShowMediaReplaceUI;
- (bool)shouldShowSelectionHighlight;
- (bool)shouldShowShadow;
- (bool)shouldShowSmartMaskKnobs;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })targetRectForEditMenu;
- (id)textureForContext:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformForHighlightLayer;
- (void)unhighlightImage;
- (void)updateFromLayout;
- (void)updateLayerGeometryFromLayout:(id)arg1;
- (void)updatePositionsOfKnobs:(id)arg1;
- (void)useCachedSizedImage:(id)arg1;
- (void)viewScaleDidChange;
- (bool)wantsToDistortWithImagerContext;
- (void)wideGamutValueDidChange;
- (void)willBeRemoved;
- (void)willBeginReadMode;
- (void)willUpdateLayer:(id)arg1;

@end
