/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMMomentShareInvitation : NSObject <NSCopying, PXCMMInvitation, PXMediaTypeAggregating> {
    PHMomentShare * _momentShare;
    <PXCMMInvitationParticipant> * _owner;
    PHFetchResult * _participantsFetchResult;
    <PXDisplayAsset> * _posterAsset;
    <PXUIImageProvider> * _posterMediaProvider;
    PHFetchResult * _previewAssetsFetchResult;
    long long  _shareType;
}

@property (nonatomic, readonly) long long aggregateMediaType;
@property (nonatomic, readonly) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSDate *expiryDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) PHMomentShare *momentShare;
@property (nonatomic, readonly) <PXCMMInvitationParticipant> *owner;
@property (nonatomic, readonly) PHFetchResult *participantsFetchResult;
@property (nonatomic, readonly) <PXDisplayAsset> *posterAsset;
@property (nonatomic, readonly) <PXUIImageProvider> *posterMediaProvider;
@property (nonatomic, readonly) PHFetchResult *previewAssetsFetchResult;
@property (nonatomic, readonly) long long shareType;
@property (nonatomic, readonly) NSDate *startDate;
@property (readonly) Class superclass;

+ (id)invitationWithMomentShare:(id)arg1;
+ (id)new;

- (void).cxx_destruct;
- (id)_init;
- (void)acceptWithCompletionHandler:(id /* block */)arg1;
- (long long)aggregateMediaType;
- (id)contextForActivityType:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)description;
- (id)endDate;
- (id)expiryDate;
- (id)identifier;
- (id)init;
- (id)invitationWithUpdatedParticipantsFetchResult:(id)arg1;
- (id)invitationWithUpdatedPreviewAssetsFetchResult:(id)arg1;
- (id)localizedTitle;
- (id)momentShare;
- (void)notifyUserWhenReadyToViewIfNeeded;
- (id)owner;
- (id)participantsFetchResult;
- (id)posterAsset;
- (id)posterMediaProvider;
- (id)previewAssetsFetchResult;
- (long long)shareType;
- (id)startDate;

@end
