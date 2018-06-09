/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPNamedEntityBlacklist : NSObject {
    _PASLock * _lock;
    unsigned long long  _maxRegexMatchingTicks;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_loadAssetData;
- (id)blacklistedSetFromEntities:(id)arg1;
- (id)init_;

@end
