/* made by EzioChiu.
 */

@protocol FTPasswordManager <NSObject>

@required

- (ACAccount *)acAccountWithProfileID:(NSString *)arg1 username:(NSString *)arg2 accountStore:(ACAccountStore *)arg3;
- (void)cancelRequestID:(NSString *)arg1 serviceIdentifier:(NSString *)arg2;
- (void)cleanUpAccountsBasedOnInUseUsernames:(void *)arg1 profileIDs:(void *)arg2 completionBlock:(void *)arg3; // needs 3 arg types, found 8: NSArray *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)cleanUpAccountsWithUsername:(void *)arg1 orProfileID:(void *)arg2 basedOnInUseUsernames:(void *)arg3 profileIDs:(void *)arg4 completionBlock:(void *)arg5; // needs 5 arg types, found 10: NSString *, NSString *, NSArray *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)fetchAuthTokenForProfileID:(void *)arg1 username:(void *)arg2 service:(void *)arg3 outRequestID:(void *)arg4 completionBlock:(void *)arg5; // needs 5 arg types, found 17: NSString *, NSString *, NSString *, id*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSString *, NSString *, NSString *, NSString *, NSString *, NSDictionary *, NSNumber *, void*
- (void)fetchPasswordForProfileID:(void *)arg1 username:(void *)arg2 service:(void *)arg3 outRequestID:(void *)arg4 completionBlock:(void *)arg5; // needs 5 arg types, found 17: NSString *, NSString *, NSString *, id*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSString *, NSString *, NSString *, NSString *, NSString *, NSDictionary *, NSNumber *, void*
- (bool)isAuthTokenReceiptTime:(double)arg1 withinGracePeriod:(double)arg2;
- (void)performCleanUpWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (NSString *)profileIDForACAccount:(ACAccount *)arg1;
- (void)removeAuthTokenAllowingGracePeriodForProfileID:(NSString *)arg1 username:(NSString *)arg2;
- (void)requestAuthTokenForProfileID:(void *)arg1 username:(void *)arg2 service:(void *)arg3 badPassword:(void *)arg4 showForgotPassword:(void *)arg5 failIfNotSilent:(void *)arg6 outRequestID:(void *)arg7 completionBlock:(void *)arg8; // needs 8 arg types, found 23: NSString *, NSString *, NSString *, bool, bool, bool, id*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSString *, NSString *, NSString *, NSString *, NSString *, NSDictionary *, NSNumber *, bool, bool, bool, void*
- (void)requestAuthTokenForProfileID:(void *)arg1 username:(void *)arg2 service:(void *)arg3 badPassword:(void *)arg4 showForgotPassword:(void *)arg5 outRequestID:(void *)arg6 completionBlock:(void *)arg7; // needs 7 arg types, found 22: NSString *, NSString *, NSString *, bool, bool, id*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSString *, NSString *, NSString *, NSString *, NSString *, NSDictionary *, NSNumber *, bool, bool, bool, void*
- (void)requestPasswordForUsername:(void *)arg1 service:(void *)arg2 badPassword:(void *)arg3 showForgotPassword:(void *)arg4 shouldRememberPassword:(void *)arg5 outRequestID:(void *)arg6 completionBlock:(void *)arg7; // needs 7 arg types, found 21: NSString *, NSString *, bool, bool, bool, id*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSString *, NSString *, NSString *, NSString *, NSString *, NSDictionary *, bool, bool, bool, void*
- (void)setAuthTokenForProfileID:(void *)arg1 username:(void *)arg2 service:(void *)arg3 authToken:(void *)arg4 selfHandle:(void *)arg5 accountStatus:(void *)arg6 outRequestID:(void *)arg7 completionBlock:(void *)arg8; // needs 8 arg types, found 16: NSString *, NSString *, NSString *, NSString *, NSString *, NSNumber *, id*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSString *, NSString *, bool, void*
- (void)setAuthTokenForProfileID:(void *)arg1 username:(void *)arg2 service:(void *)arg3 authToken:(void *)arg4 selfHandle:(void *)arg5 outRequestID:(void *)arg6 completionBlock:(void *)arg7; // needs 7 arg types, found 15: NSString *, NSString *, NSString *, NSString *, NSString *, id*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSString *, NSString *, bool, void*
- (void)setHandlesForProfileID:(NSString *)arg1 username:(NSString *)arg2 service:(NSString *)arg3 handles:(NSArray *)arg4;
- (void)setPasswordForProfileID:(void *)arg1 username:(void *)arg2 service:(void *)arg3 password:(void *)arg4 outRequestID:(void *)arg5 completionBlock:(void *)arg6; // needs 6 arg types, found 14: NSString *, NSString *, NSString *, NSString *, id*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSString *, NSString *, bool, void*
- (void)updatePreviousUsername:(NSString *)arg1 toNewUsername:(NSString *)arg2;

@end
