/* made by EzioChiu.
 */

@protocol _PASAssetProtocol <NSObject>

@required

- (NSString *)assetType;
- (unsigned long long)assetVersion;
- (unsigned long long)bestAssetVersionObserved;
- (unsigned long long)compatibilityVersion;
- (bool)deregisterUpdateHandlerAsyncWithToken:(_PASNotificationToken *)arg1;
- (NSString *)pathForResourceWithName:(NSString *)arg1 extension:(NSString *)arg2;
- (_PASNotificationToken *)registerUpdateHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <_PASAssetProtocol> *, void*

@end
