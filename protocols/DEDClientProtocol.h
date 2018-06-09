/* made by EzioChiu.
 */

@protocol DEDClientProtocol <NSObject>

@required

- (void)deviceSupportsDiagnosticExtensions:(NSArray *)arg1 session:(NSString *)arg2;
- (void)didAdoptFilesWithError:(NSError *)arg1 forSession:(NSString *)arg2;
- (void)didCommitSession:(NSString *)arg1;
- (void)finishedDiagnosticWithIdentifier:(NSString *)arg1 result:(DEDAttachmentGroup *)arg2 session:(NSString *)arg3;
- (void)hasCollected:(NSArray *)arg1 isCollecting:(NSArray *)arg2 inSession:(NSString *)arg3;
- (void)hasCollected:(NSArray *)arg1 isCollecting:(NSArray *)arg2 withIdentifiers:(NSArray *)arg3 inSession:(NSString *)arg4;
- (void)pongSession:(NSString *)arg1;
- (void)uploadProgress:(unsigned long long)arg1 total:(unsigned long long)arg2 session:(NSString *)arg3;

@optional

- (void)didCancelSession:(NSString *)arg1;
- (long long)transportType;

@end
