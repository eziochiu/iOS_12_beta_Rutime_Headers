/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHTimeWindowStrokeGroupingStrategy : CHStrokeGroupingStrategy

- (id)_timeSortedStrokesForIdentifiers:(id)arg1;
- (id)recognizableDrawingForStrokeGroup:(id)arg1 orderedStrokesIDs:(id*)arg2;
- (id)updatedGroupingResultWithCancellationBlock:(id /* block */)arg1;

@end
