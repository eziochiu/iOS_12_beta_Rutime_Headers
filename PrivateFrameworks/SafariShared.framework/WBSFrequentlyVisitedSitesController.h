/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSFrequentlyVisitedSitesController : NSObject {
    WBSFrequentlyVisitedSitesBannedURLStore * _bannedURLStore;
    WBSHistory * _history;
    double  _timeOfLastFrequentlyVisitedSitesComputation;
}

@property (nonatomic, readonly) NSArray *frequentlyVisitedSites;

+ (float)scoreForHistoryItem:(id)arg1 atTime:(double)arg2;
+ (float)scoreForHistoryItem:(id)arg1 atTime:(double)arg2 withMinimumVisitCount:(unsigned long long)arg3;
+ (float)scoreForHistoryItemOnHistoryQueue:(id)arg1 atTime:(double)arg2;
+ (float)scoreWithHistoryItemForVisitScoring:(id)arg1 historyItemForURLScoring:(id)arg2 atTime:(double)arg3;
+ (float)scoreWithHistoryItemForVisitScoring:(id)arg1 historyItemForURLScoring:(id)arg2 atTime:(double)arg3 withMinimumVisitCount:(unsigned long long)arg4;

- (void).cxx_destruct;
- (id)_canonicalizedFavoritesURLStringSet;
- (id)_computeFrequentlyVisitedSiteCandidates;
- (void)_postFrequentlyVisitedSitesDidChangeNotification;
- (void)_recomputeFrequentlyVisitedSitesNow;
- (bool)_saveFrequentlyVisitedSites:(id)arg1;
- (float)_scoreForHistoryItemOnHistoryQueue:(id)arg1;
- (void)_updateFrequentlyVisitedSitesWithCandidates:(id)arg1;
- (void)clearFrequentlyVisitedSites;
- (id)frequentlyVisitedSites;
- (id)initWithHistory:(id)arg1 bannedURLStore:(id)arg2;
- (bool)recomputeFrequentlyVisitedSitesIfNecessary;

@end