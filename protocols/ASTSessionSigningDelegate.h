/* made by EzioChiu.
 */

@protocol ASTSessionSigningDelegate <ASTSessionDelegate>

@required

- (void)session:(ASTSession *)arg1 generateAuthInfoWithNonce:(NSData *)arg2;

@optional

- (void)session:(void *)arg1 signFile:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: ASTSession *, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)session:(void *)arg1 signPayload:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: ASTSession *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*

@end
