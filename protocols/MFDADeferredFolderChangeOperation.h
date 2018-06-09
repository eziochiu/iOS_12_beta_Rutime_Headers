/* made by EzioChiu.
 */

@protocol MFDADeferredFolderChangeOperation <MFDAOfflineCacheOperation>

@required

- (void)applyToFolderMap:(NSMutableDictionary *)arg1;
- (MFDAFolderChangeResult *)folderChangeResult;

@end
