/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartFeature : NSObject <TSCHUnretainedParent> {
    NSArray * mCategoryAxisIDs;
    TSCHChartType * mChartType;
    NSArray * mValueAxisIDs;
}

@property (nonatomic, readonly, retain) NSArray *categoryAxisIDs;
@property (nonatomic, readonly, retain) NSArray *valueAxisIDs;

- (id)categoryAxisIDs;
- (id)categoryLabelPositioner;
- (void)clearParent;
- (id)columnShapeUIName;
- (void)dealloc;
- (id)defaultDataFileName;
- (float)defaultLabelExplosionPercentage;
- (int)deprecated3DBevelEdgesSpecificProperty;
- (int)deprecated3DShadowSpecificProperty;
- (bool)drawValueLabelsForZero;
- (bool)editableFormatForValueStrings;
- (id)filteredStyleOwnersFromStyleOwners:(id)arg1;
- (id)genericToSpecificPropertyMap;
- (unsigned long long)gridOffsetToSeriesForScatterFormat:(int)arg1;
- (bool)hasExplodableSeriesElements;
- (bool)hasFixedFrameRatio;
- (id)init;
- (id)initWithChartType:(id)arg1;
- (id)initialSceneWithChartInfo:(id)arg1 layoutSettings:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; long long x8; unsigned long long x9; })arg2;
- (bool)isHorizontal;
- (int)labelOrientation;
- (unsigned long long)maxCellsToCheckForGridValueType;
- (double)maxDepthRatio;
- (double)maxInnerRadiusPercentage;
- (double)minInnerRadiusPercentage;
- (void)p_initializeAxisIDs;
- (Class)p_selectAxisClassForScale:(int)arg1 linearClass:(Class)arg2 logClass:(Class)arg3 percentClass:(Class)arg4;
- (Class)presetImagerClass;
- (bool)rendersBackgroundAxis;
- (bool)rendersUsingRadialGeometry;
- (int)representativeGridValueAxisType;
- (bool)requiresStagesBuildingInReverse;
- (bool)requiresYAxisOrdinal;
- (bool)reverseSingleColumnLegendOrder;
- (double)sageMaxDepthRatio;
- (double)spiceMaxDepthRatio;
- (int)stackingSignRule;
- (Class)stageClass;
- (unsigned long long)styleIndexForAxisID:(id)arg1;
- (bool)suppliesFinalTextures;
- (id)supportedAxisScales;
- (id)supportedSeriesTypes;
- (bool)supportsBackgroundFill;
- (bool)supportsBorderFrame;
- (bool)supportsBubbleOptions;
- (bool)supportsCalloutLines;
- (bool)supportsCategoryAxisMinorTickmarks;
- (bool)supportsCategoryAxisSeriesNames;
- (bool)supportsCategoryLabelsInChartRangeEditor;
- (bool)supportsColumnShape;
- (bool)supportsConnectingLines;
- (bool)supportsEditing;
- (bool)supportsEditingForAxisID:(id)arg1;
- (bool)supportsElementChunking;
- (bool)supportsElementSeriesNames;
- (bool)supportsErrorBars;
- (bool)supportsGroupedShadows;
- (bool)supportsIndividualShadowRendering;
- (bool)supportsInterSetDepthGap;
- (bool)supportsLabelExplosion;
- (bool)supportsMultipleSeriesTypes;
- (bool)supportsMultipleValuesPerSeries;
- (bool)supportsPercentNumberFormatting;
- (bool)supportsPlaceTitleAtCenter;
- (bool)supportsReferenceLines;
- (bool)supportsSeriesLabels;
- (bool)supportsSharedAndSeparateX;
- (bool)supportsShowLabelsInFrontOption;
- (bool)supportsStartAngleRotation;
- (bool)supportsSymbolOverhang;
- (bool)supportsTrendLines;
- (bool)supportsValueLabels;
- (void)updateTitlesForExportingModel:(id)arg1 info:(id)arg2;
- (id)userInterfaceNameForPlaceTitleAtCenter:(bool)arg1;
- (Class)valueAxisClassForID:(id)arg1 scale:(int)arg2;
- (id)valueAxisIDs;
- (id)valueLabelPositioner;

@end
