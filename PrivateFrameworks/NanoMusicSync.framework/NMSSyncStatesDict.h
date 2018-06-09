/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

@interface NMSSyncStatesDict : NSObject <NSCopying> {
    NSMutableDictionary * _syncStatesDict;
}

+ (id)assetTypeForMediaType:(unsigned long long)arg1;
+ (unsigned long long)mediaTypeForAssetType:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)init;
- (void)setSyncState:(unsigned long long)arg1 forMediaType:(unsigned long long)arg2;
- (void)setSyncStateForAllMediaTypes:(unsigned long long)arg1;
- (unsigned long long)syncStateForMediaType:(unsigned long long)arg1;

@end
