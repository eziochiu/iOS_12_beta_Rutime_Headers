/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKTUConversationChatItem : CKBalloonChatItem

@property (nonatomic, readonly) BOOL color;
@property (nonatomic, readonly) NSUUID *tuConversationUUID;

- (Class)balloonViewClass;
- (BOOL)color;
- (void)configureBalloonView:(id)arg1;
- (bool)isFromMe;
- (bool)shouldCacheSize;
- (id)tuConversationUUID;

@end
