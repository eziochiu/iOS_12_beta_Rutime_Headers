/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSCacheRetainReleasePolicy : NSObject {
    NSCountedSet * _entryRetainCounts;
    NSCountedSet * _negativeEntryRetainCounts;
    id /* block */  _purgeBlock;
}

@property (nonatomic, readonly, copy) NSSet *retainedKeyStrings;

- (void).cxx_destruct;
- (void)_releaseEntryForKeyString:(id)arg1;
- (void)_retainEntryForKeyString:(id)arg1;
- (id)initWithPurgeBlock:(id /* block */)arg1;
- (bool)isEntryRetainedForKeyString:(id)arg1;
- (void)releaseEntriesForKeyStrings:(id)arg1;
- (void)releaseEntryForKeyString:(id)arg1;
- (void)releaseEntryWithKeyStringProvider:(id /* block */)arg1;
- (void)retainEntriesForKeyStrings:(id)arg1;
- (void)retainEntryForKeyString:(id)arg1;
- (void)retainEntryWithKeyStringProvider:(id /* block */)arg1;
- (id)retainedKeyStrings;

@end
