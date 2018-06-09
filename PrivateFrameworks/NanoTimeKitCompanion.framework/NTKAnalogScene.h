/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKAnalogScene : SKScene {
    UIColor * _alternativeTickColor;
    SKNode * _background;
    SKNode * _backgroundChild;
    SKNode * _circle;
    unsigned long long  _currentDensity;
    NTKVariantNode * _currentVariantNode;
    long long  _dataMode;
    CLKDevice * _device;
    NTKFaceEditView * _editView;
    SKNode * _faceChild;
    SKSpriteNode * _faceCircleSprite;
    SKTexture * _faceCircleTexture;
    UIColor * _faceColor;
    SKNode * _root;
    bool  _shouldHideVariantsBelowCurrent;
    bool  _showContentForUnadornedSnapshot;
    UIColor * _tickColor;
    NSMutableArray * _variantNodes;
}

@property (readonly) NSArray *activeVariantNodes;
@property (nonatomic, retain) UIColor *alternativeTickColor;
@property (nonatomic, readonly) SKNode *background;
@property (nonatomic, readonly) SKNode *circle;
@property (nonatomic, readonly) unsigned long long currentDensity;
@property (nonatomic, retain) NTKVariantNode *currentVariantNode;
@property (nonatomic, readonly) long long dataMode;
@property (nonatomic, readonly) CLKDevice *device;
@property (nonatomic, retain) NTKFaceEditView *editView;
@property (nonatomic, readonly) SKNode *face;
@property (retain) UIColor *faceColor;
@property (nonatomic) bool shouldHideVariantsBelowCurrent;
@property (nonatomic) bool shouldRasterizeBackground;
@property (nonatomic) bool showContentForUnadornedSnapshot;
@property (nonatomic, retain) UIColor *tickColor;
@property (nonatomic, readonly) NSMutableArray *variantNodes;

+ (id)sceneWithSize:(struct CGSize { double x1; double x2; })arg1 forDevice:(id)arg2;

- (void).cxx_destruct;
- (void)_applyDataMode:(long long)arg1;
- (void)_applyShowContentForUnadornedSnapshot;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4;
- (bool)_canRasterize;
- (void)_cleanupAfterEditing;
- (void)_configureForEditMode:(long long)arg1;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_displayZoomScale:(double)arg1 fraction:(double)arg2;
- (void)_prepareForEditing;
- (void)_restoreToFullScreen;
- (void)_setObscuredContentHiddenForScrubbing:(bool)arg1 animated:(bool)arg2 withCompletion:(id /* block */)arg3;
- (void)_updateTickColors;
- (id)activeVariantNodes;
- (void)addNodeToBackground:(id)arg1;
- (void)addNodeToFace:(id)arg1;
- (id)addVariantNodeWithElements:(id)arg1;
- (id)addVariantNodeWithElements:(id)arg1 parent:(id)arg2 hidden:(bool)arg3;
- (id)alternativeTickColor;
- (void)applyLabelPositions:(const struct NTKLabelPosition { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; long long x2; long long x3; }*)arg1 toNodes:(id)arg2;
- (void)applyLabelPositions:(const struct NTKLabelPosition { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; long long x2; long long x3; }*)arg1 withCenter:(struct CGPoint { double x1; double x2; })arg2 toNodes:(id)arg3;
- (id)auxiliaryScrubbingObscuredNodes;
- (id)background;
- (id)circle;
- (void)cleanupAfterZoom;
- (unsigned long long)currentDensity;
- (id)currentVariantNode;
- (long long)dataMode;
- (id)device;
- (void)didMoveToView:(id)arg1;
- (id)displayTime;
- (id)editView;
- (void)endScrubbingAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)enumerateTickCollectionNodes:(id /* block */)arg1;
- (id)face;
- (id)faceCircleSprite;
- (id)faceColor;
- (void)forEachActiveVariant:(id /* block */)arg1;
- (id)handColor;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 forDevice:(id)arg2;
- (void)invalidateRasterization;
- (void)performWristRaiseAnimation;
- (void)preRender;
- (void)prepareToZoom;
- (void)prepareWristRaiseAnimation;
- (unsigned long long)scrubbingObscured12ElementBottomIndex;
- (id)scrubbingObscuredCollectionNodes;
- (void)setAlternativeTickColor:(id)arg1;
- (void)setBackgroundAlpha:(double)arg1;
- (void)setCurrentVariantNode:(id)arg1;
- (void)setDensity:(unsigned long long)arg1;
- (void)setEditView:(id)arg1;
- (void)setFaceColor:(id)arg1;
- (void)setShouldHideVariantsBelowCurrent:(bool)arg1;
- (void)setShouldRasterizeBackground:(bool)arg1;
- (void)setShowContentForUnadornedSnapshot:(bool)arg1;
- (void)setTickColor:(id)arg1;
- (void)setZoomFraction:(double)arg1 diameter:(double)arg2;
- (bool)shouldHideVariantsBelowCurrent;
- (bool)shouldRasterizeBackground;
- (bool)showContentForUnadornedSnapshot;
- (void)startScrubbingAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (id)tickColor;
- (id)variantNodes;

@end
