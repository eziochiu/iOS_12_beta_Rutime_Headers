/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMAttachmentMessagePartChatItem : IMMessagePartChatItem {
    bool  _parentChatIsSpam;
    NSString * _transferGUID;
    unsigned int  _wantsAttachmentContiguous;
}

@property (nonatomic, readonly) bool parentChatIsSpam;
@property (nonatomic, readonly, copy) NSString *transferGUID;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (void).cxx_destruct;
- (id)_initWithItem:(id)arg1 text:(id)arg2 index:(long long)arg3 messagePartRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 transferGUID:(id)arg5 parentChatIsSpam:(bool)arg6;
- (id)_initWithItem:(id)arg1 text:(id)arg2 index:(long long)arg3 messagePartRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 transferGUID:(id)arg5 parentChatIsSpam:(bool)arg6 visibleAssociatedMessageChatItems:(id)arg7;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)isAttachmentContiguousWithChatItem:(id)arg1;
- (bool)parentChatIsSpam;
- (id)transferGUID;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (Class)__ck_chatItemClass;

@end
