/* made by EzioChiu.
 */

@protocol ICUserIdentityStoreBackendDelegate <NSObject>

@required

- (void)userIdentityStoreBackendDidChange:(id <ICUserIdentityStoreBackend>)arg1;

@end
