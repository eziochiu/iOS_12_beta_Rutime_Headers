/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMomentShareParticipantRecipient : PXRecipient {
    PHMomentShareParticipant * _momentShareParticipant;
}

@property (nonatomic, readonly) PHMomentShareParticipant *momentShareParticipant;

- (void).cxx_destruct;
- (id)initWithContact:(id)arg1 selectedAddress:(id)arg2 recipientKind:(long long)arg3;
- (id)initWithMomentShareParticipant:(id)arg1;
- (id)momentShareParticipant;

@end
