/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXFeedSubscriptionSectionInfo : PXFeedAssetsSectionInfo

- (bool)isMine;
- (long long)sectionType;
- (void)updateFromCloudFeedEntry;

@end
