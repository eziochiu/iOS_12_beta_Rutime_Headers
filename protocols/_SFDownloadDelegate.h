/* made by EzioChiu.
 */

@protocol _SFDownloadDelegate

@required

- (void)downloadDidFail:(_SFDownload *)arg1;
- (void)downloadDidFinish:(_SFDownload *)arg1;

@end
