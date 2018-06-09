/* made by EzioChiu.
 */

@protocol REElementRelevanceEngineDelegate <NSObject>

@required

- (void)relevanceEngine:(REElementRelevanceEngine *)arg1 didInsertElement:(NSString *)arg2 atPath:(RESectionPath *)arg3;
- (void)relevanceEngine:(REElementRelevanceEngine *)arg1 didMoveElement:(NSString *)arg2 fromPath:(RESectionPath *)arg3 toPath:(RESectionPath *)arg4;
- (void)relevanceEngine:(REElementRelevanceEngine *)arg1 didRemoveElement:(NSString *)arg2 atPath:(RESectionPath *)arg3;
- (void)relevanceEngine:(REElementRelevanceEngine *)arg1 elementWasAdded:(NSString *)arg2;
- (void)relevanceEngine:(REElementRelevanceEngine *)arg1 elementWasRemoved:(NSString *)arg2;

@end
