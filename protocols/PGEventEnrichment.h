/* made by EzioChiu.
 */

@protocol PGEventEnrichment <NSObject>

@required

- (PGGraphPersonNode *)anniversaryPersonNode;
- (PHAssetCollection *)assetCollection;
- (PGGraphPersonNode *)birthdayPersonNode;
- (void)enumerateMeaningNodesUsingBlock:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PGGraphMeaningEdge *, PGGraphMeaningNode *, bool*, void*
- (PGGraph *)graph;
- (NSSet *)meaningLabels;
- (NSSet *)momentNodes;
- (NSArray *)sortedMomentNodes;
- (NSString *)uuid;

@end
