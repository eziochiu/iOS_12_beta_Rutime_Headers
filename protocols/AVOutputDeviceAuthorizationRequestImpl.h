/* made by EzioChiu.
 */

@protocol AVOutputDeviceAuthorizationRequestImpl <NSObject>

@required

- (NSString *)ID;
- (NSString *)authorizationTokenType;
- (void)cancel;
- (AVOutputDevice *)outputDevice;
- (void)respondWithAuthorizationToken:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSError *, void*

@end
