/* made by EzioChiu.
 */

@protocol AKAppleIDAuthenticationLimitedUIProvider <NSObject>

@required

- (void)dismissBasicLoginUIWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)dismissSecondFactorUIWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)presentBasicLoginUIWithCompletion:(void *)arg1; // needs 1 arg types, found 9: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSString *, NSDictionary *, NSError *, void*
- (void)presentLoginAlertWithError:(void *)arg1 title:(void *)arg2 message:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 12: NSError *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSString *, NSDictionary *, NSError *, void*
- (void)presentSecondFactorAlertWithError:(void *)arg1 title:(void *)arg2 message:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSError *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)presentSecondFactorUIWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*

@optional

- (void)registerSurrogateWithIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
