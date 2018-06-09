/* made by EzioChiu.
 */

@protocol SFPasswordPickerServiceViewControllerProtocol <NSObject>

@required

- (void)authenticateToPresentInPopover:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, long long, void*
- (void)setAuthenticationGracePeriod:(double)arg1;
- (void)setRemoteAppID:(NSString *)arg1;
- (void)setRemoteLocalizedAppName:(NSString *)arg1;
- (void)setRemoteUnlocalizedAppName:(NSString *)arg1;
- (void)setWebViewURL:(NSURL *)arg1;

@end
