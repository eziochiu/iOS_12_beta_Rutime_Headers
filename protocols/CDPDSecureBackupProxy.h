/* made by EzioChiu.
 */

@protocol CDPDSecureBackupProxy <NSObject>

@required

- (NSDictionary *)accountInfoWithInfo:(NSDictionary *)arg1 error:(id*)arg2;
- (void)cacheRecoveryKey:(void *)arg1 completionBlock:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)disableWithInfo:(void *)arg1 completionBlock:(void *)arg2; // needs 2 arg types, found 7: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)disableWithInfo:(NSDictionary *)arg1 error:(id*)arg2;
- (void)enableWithInfo:(void *)arg1 completionBlock:(void *)arg2; // needs 2 arg types, found 7: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)enableWithInfo:(NSDictionary *)arg1 error:(id*)arg2;
- (NSDictionary *)recoverWithInfo:(NSDictionary *)arg1 error:(id*)arg2;
- (void)uncacheAllSecrets;

@end
