/* made by EzioChiu.
 */

@protocol WebDownloadDelegate <NSURLDownloadDelegate>

@optional

- (WAKWindow *)downloadWindowForAuthenticationSheet:(WebDownload *)arg1;

@end
