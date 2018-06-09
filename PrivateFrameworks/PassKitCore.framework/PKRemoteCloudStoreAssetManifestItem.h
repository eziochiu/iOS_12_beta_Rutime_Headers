/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKRemoteCloudStoreAssetManifestItem : PKRemoteAssetManifestItem <NSSecureCoding>

@property (nonatomic, readonly) NSString *recordName;

+ (bool)supportsSecureCoding;

- (void)downloadAssetWithCloudStoreCoordinatorDelegate:(id)arg1 completion:(id /* block */)arg2;
- (void)downloadAssetWithCompletion:(id /* block */)arg1;
- (unsigned long long)itemType;
- (id)recordName;

@end
