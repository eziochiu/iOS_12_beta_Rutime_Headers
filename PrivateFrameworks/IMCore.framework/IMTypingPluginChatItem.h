/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMTypingPluginChatItem : IMTypingChatItem <IMPluginChatItemProtocol> {
    IMBalloonPluginDataSource * _dataSource;
    NSData * _typingIndicatorIcon;
}

@property (nonatomic, retain) IMBalloonPluginDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isFromMe;
@property (readonly) Class superclass;
@property (nonatomic, readonly, retain) NSString *type;
@property (nonatomic, readonly) NSData *typingIndicatorIcon;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (void).cxx_destruct;
- (id)_initWithItem:(id)arg1 dataSource:(id)arg2;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)type;
- (id)typingIndicatorIcon;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (Class)__ck_chatItemClass;

@end
