/* made by EzioChiu.
 */

@protocol SSDownloadManifestRequestDelegate <SSRequestDelegate>

@optional

- (void)downloadManifestRequest:(SSDownloadManifestRequest *)arg1 didReceiveResponse:(SSDownloadManifestResponse *)arg2;

@end
