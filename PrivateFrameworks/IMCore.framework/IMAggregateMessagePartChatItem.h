/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMAggregateMessagePartChatItem : IMTextMessagePartChatItem {
    NSArray * _subparts;
}

@property (nonatomic, readonly, copy) NSArray *subparts;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (void).cxx_destruct;
- (id)_initWithItem:(id)arg1 messagePartRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 subparts:(id)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)subparts;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (Class)__ck_chatItemClass;

@end
