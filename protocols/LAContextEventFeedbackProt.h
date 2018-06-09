/* made by EzioChiu.
 */

@protocol LAContextEventFeedbackProt

@required

- (void)failProcessedEvent:(void *)arg1 failureError:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: long long, NSError *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)resetProcessedEvent:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)retryProcessedEvent:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)setCredential:(void *)arg1 forProcessedEvent:(void *)arg2 credentialType:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: NSData *, long long, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
