/* made by EzioChiu.
 */

@protocol PGGraphEvent <NSObject>

@required

- (NSSet *)addressNodes;
- (NSSet *)businessNodes;
- (NSSet *)dateNodes;
- (bool)endsBeforeLocalDate:(NSDate *)arg1;
- (void)enumerateBusinessesUsingBlock:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PGGraphBusinessEdge *, PGGraphBusinessNode *, bool*, void*
- (void)enumerateMeaningNodesUsingBlock:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PGGraphMeaningEdge *, PGGraphMeaningNode *, bool*, void*
- (bool)happensPartiallyAtMyHome;
- (bool)happensPartiallyAtMyWork;
- (NSSet *)highConfidenceSceneNodes;
- (NSSet *)holidayNodes;
- (NSDate *)localEndDate;
- (NSDate *)localStartDate;
- (NSSet *)meaningLabels;
- (NSSet *)meaningNodes;
- (NSSet *)momentNodes;
- (NSSet *)personNodes;
- (NSSet *)poiNodes;
- (NSSet *)publicEventNodes;
- (NSSet *)roiNodes;
- (NSSet *)sceneNodes;
- (NSSet *)searchConfidenceSceneNodes;
- (NSSet *)seasonNodes;
- (NSSet *)socialGroupNodes;
- (bool)startsAfterLocalDate:(NSDate *)arg1;
- (NSDate *)universalEndDate;
- (NSDate *)universalStartDate;

@end
