/* made by EzioChiu.
 */

@protocol FMClient.ClientSessionProtocol

@required

- (void)credential:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _TtC8FMClient24AuthenticationCredential *, NSError *, void*
- (void)credentialNotAuthorizedWithCredential:(void *)arg1 error:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: _TtC8FMClient24AuthenticationCredential *, NSError *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)sessionInfoWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _TtC8FMClient11SessionInfo *, NSError *, void*

@end
