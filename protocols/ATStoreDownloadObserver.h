/* made by EzioChiu.
 */

@protocol ATStoreDownloadObserver <NSObject>

@optional

- (void)ATStoreDownloadService:(ATStoreDownloadService *)arg1 didChangeStateForAsset:(ATAsset *)arg2 oldState:(long long)arg3 newState:(long long)arg4;
- (void)ATStoreDownloadService:(ATStoreDownloadService *)arg1 didEnqueueAsset:(ATAsset *)arg2;
- (void)ATStoreDownloadService:(ATStoreDownloadService *)arg1 didFinishAsset:(ATAsset *)arg2 withError:(NSError *)arg3;
- (void)ATStoreDownloadService:(ATStoreDownloadService *)arg1 didUpdateProgressForAsset:(ATAsset *)arg2 progress:(float)arg3;

@end
