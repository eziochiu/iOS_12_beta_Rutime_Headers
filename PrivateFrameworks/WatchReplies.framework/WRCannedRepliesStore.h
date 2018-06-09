/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchReplies.framework/WatchReplies
 */

@interface WRCannedRepliesStore : NSObject {
    NSString * _cachedLanguage;
    NSArray * _cachedLocalizedReplies;
    NSArray * _cannedReplies;
    unsigned long long  _category;
    bool  _didLocalizeDefaultReplies;
    bool  _didMigrationCheck;
    NPSDomainAccessor * _domainAccessor;
    WRReplyStoreInfo * _info;
    NPSManager * _npsManager;
}

+ (bool)supportsEnhancedEditing;

- (void).cxx_destruct;
- (id)cannedReplies;
- (void)dealloc;
- (id)domainAccessor;
- (void)handleStoreChange;
- (bool)includeSmartReplies;
- (id)init;
- (id)initWithCategory:(unsigned long long)arg1;
- (void)invalidateCachesIfNeededForLanguage:(id)arg1;
- (void)loadCannedRepliesIfNeeded;
- (void)localizeDefaultRepliesIfNeeded;
- (id)localizedDefaultReply:(id)arg1;
- (id)localizedFormalDefaultReply:(id)arg1;
- (id)migrateRepliesIfNeeded:(id)arg1;
- (id)npsManager;
- (id)repliesForLanguage:(id)arg1;
- (void)saveReplies:(id)arg1;
- (void)setCannedReplies:(id)arg1;
- (void)setIncludeSmartReplies:(bool)arg1;
- (bool)supportsSmartReplies;
- (bool)usesFormalReplies;

@end
