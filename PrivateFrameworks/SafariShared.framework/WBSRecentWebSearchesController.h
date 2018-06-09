/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSRecentWebSearchesController : NSObject {
    NSMutableArray * _recentSearchEntries;
}

+ (id)_defaultsKey;
+ (unsigned long long)_maximumNumberOfSearchesToTrack;
+ (bool)_shouldTrackSearches;

- (void).cxx_destruct;
- (void)_addLegacySearch:(id)arg1;
- (void)_addRecentSearchEntry:(id)arg1;
- (void)_loadRecentSearchesIfNeeded;
- (void)_migrateLegacyData;
- (id)_recentSearchDictionariesFromUserDefaultsUsingKey:(id)arg1;
- (id)_recentSearchesDictionaries;
- (void)_removeLegacyRecentSearchesData;
- (void)_saveRecentSearchDictionaries:(id)arg1 toUserDefaultsUsingKey:(id)arg2;
- (void)_saveRecentSearches;
- (void)addRecentSearch:(id)arg1;
- (void)clearRecentSearches;
- (void)clearRecentSearchesAddedAfterDate:(id)arg1;
- (id)recentSearches;
- (id)recentSearchesMatchingPrefix:(id)arg1;

@end
