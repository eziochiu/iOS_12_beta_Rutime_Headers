/* made by EzioChiu.
 */

@protocol PUMutableImportController <NSObject>

@required

- (bool)isDeletingAssets;
- (bool)isImportingAssets;
- (bool)isLoadingContent;
- (bool)isUserRequiredToTrustHostOnSourceDevice;
- (void)setDeletingAssets:(bool)arg1;
- (void)setImportingAssets:(bool)arg1;
- (void)setLoadingContent:(bool)arg1;
- (void)setUserRequiredToTrustHostOnSourceDevice:(bool)arg1;

@end
