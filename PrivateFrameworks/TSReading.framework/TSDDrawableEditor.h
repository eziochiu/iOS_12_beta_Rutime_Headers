/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDDrawableEditor : NSObject <TSDEditor> {
    TSDMultiPaneController * mGraphicInspector;
    TSDInteractiveCanvasController * mICC;
    NSSet * mInfos;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) TSDDrawableInfo *firstInfo;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) TSDDrawableInfo *info;
@property (nonatomic, retain) NSSet *infos;
@property (nonatomic, readonly) TSDInteractiveCanvasController *interactiveCanvasController;
@property (nonatomic, readonly) NSSet *layouts;
@property (nonatomic, readonly) NSSet *selectedObjectsSupportingConnectionLineAttributes;
@property (nonatomic, readonly) NSSet *selectedObjectsSupportingEndpoints;
@property (nonatomic, readonly) NSSet *selectedObjectsSupportingFill;
@property (nonatomic, readonly) NSSet *selectedObjectsSupportingOpacity;
@property (nonatomic, readonly) NSSet *selectedObjectsSupportingReflection;
@property (nonatomic, readonly) NSSet *selectedObjectsSupportingResize;
@property (nonatomic, readonly) NSSet *selectedObjectsSupportingShadow;
@property (nonatomic, readonly) NSSet *selectedObjectsSupportingShrinkTextToFit;
@property (nonatomic, readonly) NSSet *selectedObjectsSupportingSmartShapeAttributes;
@property (nonatomic, readonly) NSSet *selectedObjectsSupportingStroke;
@property (nonatomic, readonly) NSSet *selectedObjectsSupportingTextInset;
@property (nonatomic, retain) TSKSelection *selection;
@property (readonly) Class superclass;

+ (id)keyPathsForValuesAffectingFirstInfo;
+ (id)keyPathsForValuesAffectingInfo;
+ (id)keyPathsForValuesAffectingLayouts;
+ (bool)shouldSuppressMultiselection;

- (void)applyStylePresetWithIndex:(id)arg1;
- (void)beginChangingStrokeWidth:(id)arg1;
- (bool)canAddOrShowComment;
- (int)canPerformAction:(SEL)arg1;
- (int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2;
- (void)dealloc;
- (void)didChangeStrokeWidth:(id)arg1;
- (id)documentRoot;
- (void)endChangingStrokeWidth:(id)arg1;
- (id)firstInfo;
- (id)imageForPreset:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)info;
- (id)infos;
- (id)infosOfClass:(Class)arg1;
- (id)initWithInteractiveCanvasController:(id)arg1;
- (id)interactiveCanvasController;
- (id)layouts;
- (double)pictureFrameAssetScaleForNormalizedWidth:(double)arg1;
- (void)presetSelected:(id)arg1 sender:(id)arg2;
- (id)selectedLayoutsSupportingFlipping;
- (id)selectedLayoutsSupportingInspectorPositioning;
- (id)selectedLayoutsSupportingRotation;
- (id)selectedObjectsSupportingConnectionLineAttributes;
- (id)selectedObjectsSupportingEndpoints;
- (id)selectedObjectsSupportingFill;
- (id)selectedObjectsSupportingOpacity;
- (id)selectedObjectsSupportingReflection;
- (id)selectedObjectsSupportingResize;
- (id)selectedObjectsSupportingShadow;
- (id)selectedObjectsSupportingShrinkTextToFit;
- (id)selectedObjectsSupportingSmartShapeAttributes;
- (id)selectedObjectsSupportingStroke;
- (id)selectedObjectsSupportingTextInset;
- (void)setInfos:(id)arg1;
- (void)setStroke:(id)arg1;
- (void)setStrokeColor:(id)arg1;
- (void)setStyleValue:(id)arg1 forStyleProperty:(int)arg2;
- (id)stroke;
- (id)strokeColor;
- (id)strokeColorPickerTitle;
- (id)strokeSwatches;
- (double)strokeWidthForNormalizedWidth:(double)arg1;
- (void)stylePresetInspector:(id)arg1 didSelectPreset:(id)arg2;
- (id)stylePresetKindForInspector;
- (void)takePatternFromStroke:(id)arg1 withDefaultStroke:(id)arg2;
- (id)topLevelInspectorAutosaveName;
- (id)viewControllerForMoreStyleOptions;

@end
