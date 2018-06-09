/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXSAInboxDetailViewControllerProvider : NSObject <PXInboxModelDetailViewControllerProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_sharedAlbumViewControllerForSectionInfo:(id)arg1 fromViewController:(id)arg2;
- (void)popViewControllerForModel:(id)arg1 fromViewController:(id)arg2 toNavigableForYouViewController:(id)arg3;
- (long long)presentationTypeForInboxModel:(id)arg1;
- (id)viewControllerForInboxModel:(id)arg1 fromViewController:(id)arg2;

@end
