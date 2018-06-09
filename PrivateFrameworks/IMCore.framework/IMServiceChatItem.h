/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMServiceChatItem : IMTranscriptChatItem {
    IMHandle * _handle;
    IMServiceImpl * _service;
}

@property (nonatomic, readonly) IMHandle *handle;
@property (nonatomic, readonly) IMServiceImpl *service;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (void).cxx_destruct;
- (id)_initWithItem:(id)arg1 service:(id)arg2 handle:(id)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)handle;
- (id)service;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (Class)__ck_chatItemClass;

@end
