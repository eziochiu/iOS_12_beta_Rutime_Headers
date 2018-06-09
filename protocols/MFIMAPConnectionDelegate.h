/* made by EzioChiu.
 */

@protocol MFIMAPConnectionDelegate <NSObject>

@optional

- (void)connection:(MFIMAPConnection *)arg1 didBeginBodyLoad:(NSMutableData *)arg2 section:(NSString *)arg3;
- (void)connection:(MFIMAPConnection *)arg1 didFinishLoadingBodyData:(NSMutableData *)arg2 section:(NSString *)arg3;
- (void)connection:(MFIMAPConnection *)arg1 didLoadMoreBodyData:(NSMutableData *)arg2 section:(NSString *)arg3;
- (void)connection:(MFIMAPConnection *)arg1 didReceiveResponse:(MFIMAPResponse *)arg2 forCommand:(struct { int x1; id x2; unsigned long long x3; id x4; /* Warning: Unrecognized filer type: '3' using 'void*' */ void*x5; void*x6; }*)arg3;
- (bool)connection:(MFIMAPConnection *)arg1 shouldHandleUntaggedResponse:(MFIMAPResponse *)arg2 forCommand:(struct { int x1; id x2; unsigned long long x3; id x4; /* Warning: Unrecognized filer type: '3' using 'void*' */ void*x5; void*x6; }*)arg3;
- (unsigned int)connectionBodyDataReadChunkSize:(MFIMAPConnection *)arg1;
- (void)connectionDidDisconnect:(MFIMAPConnection *)arg1;
- (bool)shouldStartIdleForConnection:(MFIMAPConnection *)arg1;
- (void)willRemoveDelegation:(MFIMAPConnection *)arg1;

@end
