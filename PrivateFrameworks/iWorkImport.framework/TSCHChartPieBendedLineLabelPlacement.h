/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartPieBendedLineLabelPlacement : TSCHChartPieLabelPlacement

- (double)amountLabelsInQuadrantNeedToShift:(id)arg1 cleanUpOption:(unsigned long long)arg2;
- (double)amountWedgeLayoutInfoShouldShiftForCleanUp:(id)arg1 withCleanUpOption:(unsigned long long)arg2;
- (double)amountWedgeLayoutInfoShouldShiftToPreventBendPointOnCircumference:(id)arg1;
- (double)amountWedgeLayoutInfoShouldShiftToPreventShortFirstHalf:(id)arg1;
- (id)arrayOfConflictingLabelsWithWedgeLayoutInfosOnOneSide:(id)arg1;
- (id)bottomLeftQuadrant;
- (id)bottomRightQuadrant;
- (struct CGPoint { double x1; double x2; })calloutLineEndpointForWedgeLayoutInfo:(id)arg1;
- (struct CGPoint { double x1; double x2; })calloutLineMidPointForWedgeLayoutInfo:(id)arg1 startPoint:(struct CGPoint { double x1; double x2; })arg2 endPoint:(struct CGPoint { double x1; double x2; })arg3;
- (struct CGPoint { double x1; double x2; })calloutLineStartpointForWedgeLayoutInfo:(id)arg1;
- (bool)conflictBetweenWedgeLayoutInfo:(id)arg1 nextWedgeLayoutInfo:(id)arg2;
- (struct CGPoint { double x1; double x2; })defaultCalloutLineMidPointForWedgeLayoutInfo:(id)arg1 startPoint:(struct CGPoint { double x1; double x2; })arg2 endPoint:(struct CGPoint { double x1; double x2; })arg3;
- (struct CGPoint { double x1; double x2; })firstHalfOfBendedLineVectorNormalizedWithWedgeLayoutInfo:(id)arg1 shouldBeUpwards:(bool)arg2;
- (void)fixConflictsInOneQuadrantOfPieChartWithArray:(id)arg1 quadrantInHorizontalHalfDisk:(unsigned long long)arg2;
- (void)fixOverlapsOnOneVerticalSideWithConflictingLabelsArray:(id)arg1;
- (void)fixOverlapsOutsideWedges;
- (void)fixOverlapsWithWedgeLayoutInfos:(id)arg1 inVerticalHalfDisk:(unsigned long long)arg2;
- (id)innermostWedgeLayoutInfo:(id)arg1;
- (bool)innermostWedgeLayoutInfoWillUsePerpendicularAngle:(id)arg1;
- (id)newCalloutLinePaths:(id)arg1 startLineEnd:(id)arg2 outStartLineEndPath:(id*)arg3 endLineEnd:(id)arg4 outEndLineEndPath:(id*)arg5 stroke:(id)arg6 outStroke:(id*)arg7 context:(struct CGContext { }*)arg8 contextScale:(float)arg9;
- (void)preventOverlapsWithinWedges;
- (double)shiftAmountForWedgeLayoutInfo:(id)arg1 adjacentWedgeLayoutInfo:(id)arg2 adjacentShouldBeAbove:(bool)arg3;
- (void)shiftLabelsVerticallyInOneQuadrantWithWedgeLayoutInfos:(id)arg1 shiftAmount:(double)arg2 quadrantInHorizontalHalfDisk:(unsigned long long)arg3;
- (void)shiftLabelsVerticallyInQuadrantIfNecessary:(id)arg1 withCleanUpOption:(unsigned long long)arg2;
- (void)shiftLabelsVerticallyToCleanUpPlacement;
- (void)shiftLabelsVerticallyToCleanUpPlacementWithCleanUpOption:(unsigned long long)arg1;
- (id)topLeftQuadrant;
- (id)topRightQuadrant;
- (double)totalHeightOverlapWithArray:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformToShiftWedgeLayoutInfoAwayFromAdjacentWedgeLayoutInfo:(id)arg1 adjacentWedgeLayoutInfo:(id)arg2 adjacentShouldBeAbove:(bool)arg3 totalHeightOverlap:(double)arg4;
- (id)updateLabelTransformsToPreventOverlap;
- (bool)wedgeLayoutInfoShouldShiftForCleanUp:(id)arg1 withCleanUpOption:(unsigned long long)arg2;
- (bool)wedgeLayoutInfoShouldShiftToPreventBendPointOnCircumference:(id)arg1;
- (bool)wedgeLayoutInfoShouldShiftToPreventTooShortCalloutLineFirstHalf:(id)arg1;
- (bool)wedgeLayoutInfoShouldUsePerpendicularAngle:(id)arg1 defaultMidpoint:(struct CGPoint { double x1; double x2; })arg2;
- (id)wedgeLayoutInfosInHorizontalHalfDiskWithWedgeLayoutInfos:(id)arg1 horizontalHalfDisk:(unsigned long long)arg2;
- (id)wedgeLayoutInfosInOneQuadrant:(id)arg1 verticalHalfDisk:(unsigned long long)arg2 horizontalHalfDisk:(unsigned long long)arg3;
- (id)wedgeLayoutInfosInVerticalHalfDiskWithWedgeLayoutInfos:(id)arg1 verticalHalfDisk:(unsigned long long)arg2;
- (id)wedgeLayoutInfosThatNeedShiftingToCleanUpQuadrant:(id)arg1 cleanUpOption:(unsigned long long)arg2;

@end
