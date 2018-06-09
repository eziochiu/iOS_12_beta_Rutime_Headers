/* made by EzioChiu.
 */

@protocol SXComponentInserter <NSObject>

@required

- (SXComponentInsert *)componentInsertForMarker:(id <SXBlueprintMarker>)arg1 layoutProvider:(id <SXComponentInsertionLayoutProvider>)arg2;
- (unsigned long long)componentTraits;
- (<SXComponentInsertionConditionEngine> *)conditionEngine;
- (NSArray *)conditions;
- (bool)validateMarker:(id <SXBlueprintMarker>)arg1 remainingMarkerCount:(unsigned long long)arg2 layoutProvider:(id <SXComponentInsertionLayoutProvider>)arg3;

@optional

- (void)componentInsertionCompleted;

@end
