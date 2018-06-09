/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVManagedAssetCache : AVAssetCache {
    AVManagedAssetCacheInternal * _priv;
}

+ (id)assetCacheWithURL:(id)arg1;

- (id)URL;
- (id)allKeys;
- (long long)currentSize;
- (void)dealloc;
- (void)finalize;
- (id)initWithURL:(id)arg1;
- (bool)isPlayableOffline;
- (id)lastModifiedDateOfEntryForKey:(id)arg1;
- (long long)maxEntrySize;
- (long long)maxSize;
- (id)mediaSelectionOptionsInMediaSelectionGroup:(id)arg1;
- (void)removeEntryForKey:(id)arg1;
- (void)setMaxEntrySize:(long long)arg1;
- (void)setMaxSize:(long long)arg1;
- (long long)sizeOfEntryForKey:(id)arg1;

@end
