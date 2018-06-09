/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartFeaturePieFamily : TSCHChartFeature

- (id)animationDeliveryStylesForFilter:(id)arg1;
- (bool)editableFormatForValueStrings;
- (id)genericToSpecificPropertyMap;
- (bool)hasExplodableSeriesElements;
- (bool)hasFixedFrameRatio;
- (id)initialSceneWithChartInfo:(id)arg1 layoutSettings:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; long long x8; unsigned long long x9; })arg2;
- (unsigned long long)maxCellsToCheckForGridValueType;
- (void)p_initializeAxisIDs;
- (bool)rendersBackgroundAxis;
- (bool)rendersUsingRadialGeometry;
- (int)representativeGridValueAxisType;
- (unsigned long long)styleIndexForAxisID:(id)arg1;
- (bool)supportsBackgroundFill;
- (bool)supportsBorderFrame;
- (bool)supportsCategoryLabelsInChartRangeEditor;
- (bool)supportsElementSeriesNames;
- (bool)supportsErrorBars;
- (bool)supportsGroupedShadows;
- (bool)supportsLabelExplosion;
- (bool)supportsMultipleValuesPerSeries;
- (bool)supportsPercentNumberFormatting;
- (bool)supportsReferenceLines;
- (bool)supportsStartAngleRotation;
- (bool)supportsTrendLines;
- (void)updateTitlesForExportingModel:(id)arg1 info:(id)arg2;
- (Class)valueAxisClassForID:(id)arg1 scale:(int)arg2;

@end
