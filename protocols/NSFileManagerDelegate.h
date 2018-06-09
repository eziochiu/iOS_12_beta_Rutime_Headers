/* made by EzioChiu.
 */

@protocol NSFileManagerDelegate <NSObject>

@optional

- (bool)fileManager:(NSFileManager *)arg1 shouldCopyItemAtPath:(NSString *)arg2 toPath:(NSString *)arg3;
- (bool)fileManager:(NSFileManager *)arg1 shouldCopyItemAtURL:(NSURL *)arg2 toURL:(NSURL *)arg3;
- (bool)fileManager:(NSFileManager *)arg1 shouldLinkItemAtPath:(NSString *)arg2 toPath:(NSString *)arg3;
- (bool)fileManager:(NSFileManager *)arg1 shouldLinkItemAtURL:(NSURL *)arg2 toURL:(NSURL *)arg3;
- (bool)fileManager:(NSFileManager *)arg1 shouldMoveItemAtPath:(NSString *)arg2 toPath:(NSString *)arg3;
- (bool)fileManager:(NSFileManager *)arg1 shouldMoveItemAtURL:(NSURL *)arg2 toURL:(NSURL *)arg3;
- (bool)fileManager:(NSFileManager *)arg1 shouldProceedAfterError:(NSError *)arg2 copyingItemAtPath:(NSString *)arg3 toPath:(NSString *)arg4;
- (bool)fileManager:(NSFileManager *)arg1 shouldProceedAfterError:(NSError *)arg2 copyingItemAtURL:(NSURL *)arg3 toURL:(NSURL *)arg4;
- (bool)fileManager:(NSFileManager *)arg1 shouldProceedAfterError:(NSError *)arg2 linkingItemAtPath:(NSString *)arg3 toPath:(NSString *)arg4;
- (bool)fileManager:(NSFileManager *)arg1 shouldProceedAfterError:(NSError *)arg2 linkingItemAtURL:(NSURL *)arg3 toURL:(NSURL *)arg4;
- (bool)fileManager:(NSFileManager *)arg1 shouldProceedAfterError:(NSError *)arg2 movingItemAtPath:(NSString *)arg3 toPath:(NSString *)arg4;
- (bool)fileManager:(NSFileManager *)arg1 shouldProceedAfterError:(NSError *)arg2 movingItemAtURL:(NSURL *)arg3 toURL:(NSURL *)arg4;
- (bool)fileManager:(NSFileManager *)arg1 shouldProceedAfterError:(NSError *)arg2 removingItemAtPath:(NSString *)arg3;
- (bool)fileManager:(NSFileManager *)arg1 shouldProceedAfterError:(NSError *)arg2 removingItemAtURL:(NSURL *)arg3;
- (bool)fileManager:(NSFileManager *)arg1 shouldRemoveItemAtPath:(NSString *)arg2;
- (bool)fileManager:(NSFileManager *)arg1 shouldRemoveItemAtURL:(NSURL *)arg2;

@end
