/* made by EzioChiu.
 */

@protocol NUImageExportResult <NUExportResult>

@required

- (NSData *)destinationData;
- (NSURL *)destinationURL;

@end
