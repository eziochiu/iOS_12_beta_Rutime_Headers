/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMFComposeRecipient : PXRecipient {
    MFComposeRecipient * _recipient;
}

@property (nonatomic, readonly) MFComposeRecipient *recipient;

- (void).cxx_destruct;
- (id)description;
- (id)initWithContact:(id)arg1 selectedAddress:(id)arg2 recipientKind:(long long)arg3;
- (id)initWithRecipient:(id)arg1;
- (id)recipient;

@end
