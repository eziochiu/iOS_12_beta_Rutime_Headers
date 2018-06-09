/* made by EzioChiu.
 */

@protocol _CPResultRankingFeedback <NSObject>

@required

- (void)addDuplicateResults:(_CPSearchResultForFeedback *)arg1;
- (void)addHiddenResults:(_CPSearchResultForFeedback *)arg1;
- (void)clearDuplicateResults;
- (void)clearHiddenResults;
- (NSArray *)duplicateResults;
- (_CPSearchResultForFeedback *)duplicateResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)duplicateResultsCount;
- (NSArray *)hiddenResults;
- (_CPSearchResultForFeedback *)hiddenResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)hiddenResultsCount;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (unsigned int)localResultPosition;
- (double)personalizationScore;
- (_CPSearchResultForFeedback *)result;
- (void)setDuplicateResults:(NSArray *)arg1;
- (void)setHiddenResults:(NSArray *)arg1;
- (void)setLocalResultPosition:(unsigned int)arg1;
- (void)setPersonalizationScore:(double)arg1;
- (void)setResult:(_CPSearchResultForFeedback *)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;

@end
