/* made by EzioChiu.
 */

@protocol PXPeopleProgressDataSource <NSObject>

@required

- (void)asyncPeopleScanningProgress:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, double, unsigned long long, void*
- (unsigned long long)homeMembersCount;
- (bool)isFaceProcessingComplete;
- (bool)isPersonPromoterDone;
- (void)loadQueryData;
- (unsigned long long)pendingAssetCount;
- (unsigned long long)processedAssetCount;
- (void)syncPeopleScanningProgress:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, double, unsigned long long, void*
- (unsigned long long)totalAssetCount;
- (void)updateProgressIfNeededWithWorkBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, double, unsigned long long, void*

@optional

- (unsigned long long)cachedUnlockValue;
- (void)setCachedUnlockValue:(unsigned long long)arg1;

@end
