/* made by EzioChiu.
 */

@protocol ACDAuthenticationDialogManagerProtocol <NSObject>

@required

- (void)authenticationDialogDidFinishWithSuccess:(bool)arg1 response:(NSDictionary *)arg2;
- (void)contextForAuthenticationDialog:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSString *, NSString *, NSString *, NSString *, void*

@end
