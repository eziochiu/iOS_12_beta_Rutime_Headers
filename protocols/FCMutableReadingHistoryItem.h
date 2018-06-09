/* made by EzioChiu.
 */

@protocol FCMutableReadingHistoryItem <FCReadingHistoryItem>

@required

- (NSString *)articleID;
- (unsigned long long)articleLikingStatus;
- (NSDate *)firstSeenAt;
- (NSDate *)firstSeenAtOfMaxVersionSeen;
- (bool)hasArticleBeenConsumed;
- (bool)hasArticleBeenMarkedOffensive;
- (bool)hasArticleBeenRead;
- (bool)hasArticleBeenSeen;
- (NSString *)identifier;
- (NSDate *)lastVisitedAt;
- (long long)maxVersionRead;
- (long long)maxVersionSeen;
- (void)setArticleID:(NSString *)arg1;
- (void)setArticleLikingStatus:(unsigned long long)arg1;
- (void)setFirstSeenAt:(NSDate *)arg1;
- (void)setFirstSeenAtOfMaxVersionSeen:(NSDate *)arg1;
- (void)setHasArticleBeenConsumed:(bool)arg1;
- (void)setHasArticleBeenMarkedOffensive:(bool)arg1;
- (void)setHasArticleBeenRead:(bool)arg1;
- (void)setHasArticleBeenSeen:(bool)arg1;
- (void)setLastVisitedAt:(NSDate *)arg1;
- (void)setMaxVersionRead:(long long)arg1;
- (void)setMaxVersionSeen:(long long)arg1;

@end
