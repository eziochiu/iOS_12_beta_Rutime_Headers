/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMTranscriptPluginChatItem : IMMessagePartChatItem <IMPluginChatItemProtocol> {
    NSString * _bundleIdentifier;
    IMBalloonPluginDataSource * _dataSource;
    bool  _hasSetIsLastChatItemOfPluginType;
    IMPluginPayload * _initialPayload;
    bool  _isLastChatItemOfPluginType;
    bool  _parentChatHasKnownParticipants;
}

@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic, retain) IMBalloonPluginDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasSetIsLastChatItemOfPluginType;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) IMPluginPayload *initialPayload;
@property (nonatomic, readonly) bool isDataSourceInitialized;
@property (nonatomic, readonly) bool isFromMe;
@property (setter=setLastChatItemOfPluginType:, nonatomic) bool isLastChatItemOfPluginType;
@property (nonatomic, readonly) bool isPlayed;
@property (nonatomic, readonly) bool isSaved;
@property (nonatomic, readonly) bool parentChatHasKnownParticipants;
@property (nonatomic, readonly) unsigned long long playbackType;
@property (nonatomic, readonly) NSString *pluginSessionGUID;
@property (readonly) Class superclass;
@property (nonatomic, readonly, retain) NSString *type;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (void).cxx_destruct;
- (id)_initWithItem:(id)arg1 initialPayload:(id)arg2 messagePartRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 parentChatHasKnownParticipants:(bool)arg4;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataSource;
- (id)description;
- (bool)hasSetIsLastChatItemOfPluginType;
- (id)initialPayload;
- (bool)isDataSourceInitialized;
- (bool)isLastChatItemOfPluginType;
- (bool)isPlayed;
- (bool)isSaved;
- (bool)parentChatHasKnownParticipants;
- (unsigned long long)playbackType;
- (id)pluginSessionGUID;
- (void)setBundleIdentifier:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setHasSetIsLastChatItemOfPluginType:(bool)arg1;
- (void)setInitialPayload:(id)arg1;
- (void)setLastChatItemOfPluginType:(bool)arg1;
- (id)type;
- (bool)wantsAutoPlayback;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (Class)__ck_chatItemClass;

@end
