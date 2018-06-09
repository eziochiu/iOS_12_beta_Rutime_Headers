/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartPieStraightLineLabelPlacement : TSCHChartPieLabelPlacement {
    unsigned long long  mCGPointCellSize;
    NSDictionary * mSeriesIndexToAllWedgeLayoutInfosToTheLeft;
    NSMutableDictionary * mSeriesIndexToConflictingWedgeLayoutInfos;
    NSDictionary * mSeriesIndexToWedgeLayoutInfo;
    NSMutableDictionary * mSpatialMap;
}

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })calloutLineEndpointForWedgeLayoutInfo:(id)arg1;
- (struct CGPoint { double x1; double x2; })calloutLineStartpointForWedgeLayoutInfo:(id)arg1;
- (struct CGPoint { double x1; double x2; })cellForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)conflictsExist;
- (void)createSeriesIndexToAllWedgeLayoutInfosToTheLeftMap;
- (void)createSeriesIndexToConflictingWedgeLayoutInfosMap;
- (void)createSeriesIndexToWedgeLayoutInfoMap;
- (void)createSpatialMap;
- (void)fixConflictsForWedgeLayoutInfos;
- (void)fixTitleConflictsIfNeeded;
- (void)invalidateWedgeLayoutInfo:(id)arg1 oldSetOfKeysForWedgeLayoutInfo:(id)arg2;
- (id)newCalloutLinePaths:(id)arg1 startLineEnd:(id)arg2 outStartLineEndPath:(id*)arg3 endLineEnd:(id)arg4 outEndLineEndPath:(id*)arg5 stroke:(id)arg6 outStroke:(id*)arg7 context:(struct CGContext { }*)arg8 contextScale:(float)arg9;
- (id)setOfKeysForWedgeLayoutInfo:(id)arg1;
- (void)setUpCaches;
- (double)shiftAmountForWedgeLayoutInfo:(id)arg1;
- (void)shiftLabelOutwards:(id)arg1 shiftAmount:(double)arg2 invalidateCahes:(bool)arg3;
- (bool)shouldShiftWedgeLayoutInfo:(id)arg1;
- (unsigned long long)spatialMapCellSize;
- (void)updateConflictsForWedgeLayoutInfo:(id)arg1 wedgeLayoutInfosThatShareCells:(id)arg2;
- (id)updateLabelTransformsToPreventOverlap;
- (void)updateSeriesIndexToConflictingWedgeLayoutInfosMapForInvalidatedWedgeLayoutInfo:(id)arg1 oldSetOfKeysForWedgeLayoutInfo:(id)arg2;
- (void)updateSpatialMapWithInvalidatedWedgeLayoutInfo:(id)arg1 oldSetOfKeysForWedgeLayoutInfo:(id)arg2;
- (id)wedgeLayoutInfo:(id)arg1 conflictsWithWedgeLayoutInfos:(id)arg2;
- (id)wedgeLayoutInfosThatShareCellsWithWedgeLayoutInfo:(id)arg1;
- (id)wedgeLayoutInfosToTheLeftOfWedgeLayoutInfo:(id)arg1;

@end
