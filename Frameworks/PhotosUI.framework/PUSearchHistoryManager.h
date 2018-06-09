/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSearchHistoryManager : NSObject {
    NSOrderedSet * _recentSearches;
}

@property (nonatomic, retain) NSOrderedSet *recentSearches;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)clearRecentSearches;
- (id)recentSearches;
- (void)saveRecentSearch:(id)arg1;
- (void)setRecentSearches:(id)arg1;

@end
