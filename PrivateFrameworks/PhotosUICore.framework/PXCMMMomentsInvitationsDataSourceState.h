/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMMomentsInvitationsDataSourceState : NSObject <NSCopying> {
    PHFetchResult * _assetCollections;
    NSDictionary * _invitationsByAssetCollectionObjectID;
}

@property (nonatomic, readonly) PHFetchResult *assetCollections;
@property (nonatomic, readonly) NSDictionary *invitationsByAssetCollectionObjectID;

- (void).cxx_destruct;
- (id)assetCollections;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithAssetCollections:(id)arg1 invitationsByAssetCollectionObjectID:(id)arg2;
- (id)invitationsByAssetCollectionObjectID;
- (id)stateUpdatedWithChange:(id)arg1 changeDetails:(id*)arg2;

@end
