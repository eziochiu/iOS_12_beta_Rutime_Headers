/* made by EzioChiu.
 */

@protocol CDPAuthProviderInternal <NSObject>

@required

- (void)cdpContext:(void *)arg1 performSilentRecoveryTokenRenewal:(void *)arg2; // needs 2 arg types, found 8: CDPContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CDPContext *, NSError *, void*
- (void)cdpContext:(void *)arg1 verifyMasterKey:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: CDPContext *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*

@end
