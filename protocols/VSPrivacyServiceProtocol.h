/* made by EzioChiu.
 */

@protocol VSPrivacyServiceProtocol <NSObject>

@required

- (void)preflightCheckForProcessIdentifier:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (void)requestAccessForAuditToken:(void *)arg1 processIdentifier:(void *)arg2 identityProviderDisplayName:(void *)arg3 identityProviderID:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 11: struct { unsigned int x1[8]; }, int, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, VSOptional *, void*

@end
