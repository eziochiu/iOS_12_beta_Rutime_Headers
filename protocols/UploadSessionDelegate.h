/* made by EzioChiu.
 */

@protocol UploadSessionDelegate <NSObject>

@required

- (void)uploadSessionCompleted:(UploadSession *)arg1;
- (void)uploadSessionFailed:(UploadSession *)arg1;

@end
