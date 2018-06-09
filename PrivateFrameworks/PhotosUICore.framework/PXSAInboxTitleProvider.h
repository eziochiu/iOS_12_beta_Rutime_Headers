/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXSAInboxTitleProvider : NSObject <PXInboxModelTitleProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_defaultSubtitleAttributes;
- (id)_defaultTitleAttributes;
- (id)_emphasizedSubtitleAttributes;
- (id)_emphasizedTitleAttributes;
- (unsigned long long)_largeNumberOfSubjects;
- (id)_titleForCoalescedWithSectionInfo:(id)arg1;
- (id)_titleForCommentWithSectionInfo:(id)arg1;
- (id)_titleForInvitationResponseWithSectionInfo:(id)arg1 accepted:(bool)arg2;
- (id)_titleForInvitationWithSectionInfo:(id)arg1;
- (id)_titleForLikeWithSectionInfo:(id)arg1;
- (id)_titleForPostWithSectionInfo:(id)arg1;
- (id)subtitleForModel:(id)arg1 withTraitCollection:(id)arg2;
- (id)titleForModel:(id)arg1 withTraitCollection:(id)arg2;

@end
