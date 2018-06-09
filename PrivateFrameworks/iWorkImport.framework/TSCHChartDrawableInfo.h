/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartDrawableInfo : TSDDrawableInfo <TSCECalculationEngineRegistration, TSCHStyleSwapSupporting, TSDCompatibilityAwareMediaContainer, TSDMixing, TSDReducibleImageContainer, TSKCustomFormatContainingInfo, TSKModel, TSKSearchable, TSPCopying, TSSPresetSource, TSSStyleClient> {
    TSCHChartInfo * mChart;
    TSCHChunkManager * mChunkManager;
    TSPObject<TSCHMediatorProvider> * mMediatorPersistentObject;
}

@property (nonatomic, readonly) TSCHChartInfo *chart;
@property (nonatomic, readonly) TSCHChunkManager *chunkManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long multiDataSetIndex;
@property (readonly) Class superclass;

+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3;
+ (bool)needsObjectUUID;
+ (id)presetKinds;

- (void).cxx_destruct;
- (void)acceptVisitor:(id)arg1;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)animationFilters;
- (id)applyStyleSwapTuple:(id)arg1;
- (id)applyStyleSwapTuples:(id)arg1;
- (bool)aspectRatioLocked;
- (bool)canAspectRatioLockBeChangedByUser;
- (bool)canSizeBeChangedIncrementally;
- (id)changeDetailsForCustomFormatListDidUpdateToCustomFormat:(id)arg1;
- (id)chart;
- (id)childInfos;
- (unsigned long long)chunkCountForTextureDeliveryStyle:(unsigned long long)arg1 animationFilter:(id)arg2;
- (id)chunkManager;
- (id)componentRootObject;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (int)elementKind;
- (void)finalizeDataOnDeepCopyBeforeSerializingForDragAndDrop;
- (struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; })formulaOwnerUID;
- (id)geometry;
- (bool)hasBackgroundLayerForPieChart;
- (bool)hasReferenceLines;
- (id)infoGeometryForVisiblePositioningInfoGeometry:(id)arg1;
- (id)initWithContext:(id)arg1 chart:(id)arg2;
- (id)initWithContext:(id)arg1 chartType:(id)arg2 chartAreaFrame:(id)arg3 legendFrame:(id)arg4 stylePreset:(id)arg5 privateSeriesStyles:(id)arg6;
- (id)initWithContext:(id)arg1 chartType:(id)arg2 chartAreaFrame:(id)arg3 stylePreset:(id)arg4 privateSeriesStyles:(id)arg5;
- (id)initWithContext:(id)arg1 chartType:(id)arg2 chartBodyFrame:(id)arg3 stylePreset:(id)arg4 privateSeriesStyles:(id)arg5;
- (id)initWithContext:(id)arg1 chartType:(id)arg2 circumscribingFrame:(id)arg3 stylePreset:(id)arg4 privateSeriesStyles:(id)arg5;
- (id)initWithContext:(id)arg1 chartType:(id)arg2 legendShowing:(id)arg3 chartAreaFrame:(id)arg4 legendFrame:(id)arg5 stylePreset:(id)arg6 privateSeriesStyles:(id)arg7 chartNonStyle:(id)arg8 legendNonStyle:(id)arg9 valueAxisNonStyles:(id)arg10 categoryAxisNonStyles:(id)arg11 seriesNonStyles:(id)arg12 refLineNonStylesMap:(id)arg13 refLineStylesMap:(id)arg14;
- (id)initWithContext:(id)arg1 chartType:(id)arg2 legendShowing:(id)arg3 chartAreaFrame:(id)arg4 stylePreset:(id)arg5 privateSeriesStyles:(id)arg6 chartNonStyle:(id)arg7 legendNonStyle:(id)arg8 valueAxisNonStyles:(id)arg9 categoryAxisNonStyles:(id)arg10 seriesNonStyles:(id)arg11 refLineNonStylesMap:(id)arg12 refLineStylesMap:(id)arg13;
- (id)initWithContext:(id)arg1 chartType:(id)arg2 legendShowing:(id)arg3 chartBodyFrame:(id)arg4 chartAreaFrame:(id)arg5 circumscribingFrame:(id)arg6 legendFrame:(id)arg7 stylePreset:(id)arg8 privateSeriesStyles:(id)arg9 chartNonStyle:(id)arg10 legendNonStyle:(id)arg11 valueAxisNonStyles:(id)arg12 categoryAxisNonStyles:(id)arg13 seriesNonStyles:(id)arg14 refLineNonStylesMap:(id)arg15 refLineStylesMap:(id)arg16;
- (id)initWithContext:(id)arg1 chartType:(id)arg2 legendShowing:(id)arg3 chartBodyFrame:(id)arg4 stylePreset:(id)arg5 privateSeriesStyles:(id)arg6 chartNonStyle:(id)arg7 legendNonStyle:(id)arg8 valueAxisNonStyles:(id)arg9 categoryAxisNonStyles:(id)arg10 seriesNonStyles:(id)arg11 refLineNonStylesMap:(id)arg12 refLineStylesMap:(id)arg13;
- (id)initWithContext:(id)arg1 chartType:(id)arg2 legendShowing:(id)arg3 circumscribingFrame:(id)arg4 stylePreset:(id)arg5 privateSeriesStyles:(id)arg6 chartNonStyle:(id)arg7 legendNonStyle:(id)arg8 valueAxisNonStyles:(id)arg9 categoryAxisNonStyles:(id)arg10 seriesNonStyles:(id)arg11 refLineNonStylesMap:(id)arg12 refLineStylesMap:(id)arg13;
- (bool)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;
- (bool)isEquivalentForSerializationRoundTrip:(id)arg1;
- (bool)isSelectable;
- (bool)isVisibleAtBeginningOfMagicChartBuildForDeliveryStyle:(unsigned long long)arg1;
- (Class)layoutClass;
- (void)loadFromPreUFFArchiveWithUnarchiver:(id)arg1;
- (long long)mediaCompatibilityTypeForData:(id)arg1 associatedHint:(id)arg2;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (unsigned long long)multiDataSetIndex;
- (id)objectToArchiveInDependencyTracker;
- (id)p_copyFor3DAs2DWithContext:(id)arg1 chartFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 legendFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)p_drawableGeometry;
- (void)p_setDrawableGeometry:(id)arg1 clearObjectPlaceholderFlag:(bool)arg2;
- (void)reassignPasteboardCustomFormatKeys;
- (id)referencedStyles;
- (bool)registerLast;
- (void)registerWithCalculationEngineForDocumentLoad:(id)arg1;
- (Class)repClass;
- (void)replaceReferencedStylesUsingBlock:(id /* block */)arg1;
- (bool)requiresStagesBuildingInReverse;
- (void)saveToArchiver:(id)arg1;
- (void)setGeometry:(id)arg1;
- (void)setGeometry:(id)arg1 omitLegendResize:(bool)arg2;
- (void)setInsertionCenterPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPersistentMediator:(id)arg1;
- (bool)shouldAddMultiDataBuildWhenAddingToDocument;
- (id)styleOwnerFromSwapType:(int)arg1 andIndex:(unsigned long long)arg2;
- (bool)suppliesFinalTextures;
- (bool)supportsHyperlinks;
- (bool)supportsParentRotation;
- (struct CGSize { double x1; double x2; })targetSizeForImageData:(id)arg1 associatedHint:(id)arg2;
- (unsigned long long)textureDeliveryStyleFromDeliveryString:(id)arg1;
- (id)textureDeliveryStylesLocalized:(bool)arg1 animationFilter:(id)arg2;
- (id)transformedGeometryWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)tsaMoveToPosition:(struct CGPoint { double x1; double x2; })arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (void)unregisterFromCalculationEngine:(id)arg1;
- (void)upgradeFormatsForCustomFormatListU2_0;
- (bool)validatedLoadFromUnarchiver:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleBoundsForPositioning;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)willModify;

@end
