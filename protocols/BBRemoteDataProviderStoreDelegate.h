/* made by EzioChiu.
 */

@protocol BBRemoteDataProviderStoreDelegate <BBDataProviderStoreDelegate>

@required

- (void)remoteDataProviderNeedsToWakeClient:(BBRemoteDataProvider *)arg1;

@end
