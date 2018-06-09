/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLManagedAssetID : NSObject <PLAssetID> {
    NSString * _cloudIdentifier;
    NSString * _uuid;
}

@property (nonatomic, copy) NSString *cloudIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *uuid;

- (void).cxx_destruct;
- (id)cloudIdentifier;
- (id)initWithManagedAsset:(id)arg1;
- (void)setCloudIdentifier:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)uuid;

@end
