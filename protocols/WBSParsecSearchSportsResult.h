/* made by EzioChiu.
 */

@protocol WBSParsecSearchSportsResult

@required

- (WBSParsecSearchSportsAttributionExtraCompletionItem *)extraCompletionItem;
- (NSArray *)images;
- (NSArray *)individualScores;
- (NSString *)subtitle;

@end
