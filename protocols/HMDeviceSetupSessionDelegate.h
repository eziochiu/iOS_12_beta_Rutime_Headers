/* made by EzioChiu.
 */

@protocol HMDeviceSetupSessionDelegate <NSObject>

@required

- (void)setupSession:(HMDeviceSetupSession *)arg1 didCloseWithError:(NSError *)arg2;
- (void)setupSession:(void *)arg1 didReceiveExchangeData:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: HMDeviceSetupSession *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*

@optional

- (void)setupSessionDidOpen:(HMDeviceSetupSession *)arg1;

@end
