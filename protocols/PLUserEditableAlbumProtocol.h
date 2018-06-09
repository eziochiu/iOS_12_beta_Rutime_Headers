/* made by EzioChiu.
 */

@protocol PLUserEditableAlbumProtocol <PLAlbumProtocol>

@required

- (void)insertInternalUserEditableAssets:(NSArray *)arg1 atIndexes:(NSIndexSet *)arg2 trimmedVideoPathInfo:(NSDictionary *)arg3 commentText:(NSString *)arg4;
- (NSMutableOrderedSet *)userEditableAssets;

@end
