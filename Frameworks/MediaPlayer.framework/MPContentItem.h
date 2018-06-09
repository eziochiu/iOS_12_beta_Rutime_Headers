/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPContentItem : NSObject {
    MPMediaItemArtwork * _artwork;
    void * _mediaRemoteContentItem;
}

@property (nonatomic, readonly) void*_mediaRemoteContentItem;
@property (nonatomic, retain) MPMediaItemArtwork *artwork;
@property (getter=isContainer, nonatomic) bool container;
@property (getter=isExplicitContent, nonatomic) bool explicitContent;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (getter=isPlayable, nonatomic) bool playable;
@property (nonatomic) float playbackProgress;
@property (getter=isStreamingContent, nonatomic) bool streamingContent;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *title;

+ (bool)isSuppressingChangeNotifications;
+ (void)performSuppressingChangeNotifications:(id /* block */)arg1;
+ (bool)shouldPushArtworkData;

- (void).cxx_destruct;
- (id)_initWithMediaRemoteContentItem:(void*)arg1;
- (void)_loadArtwork:(id)arg1 completion:(id /* block */)arg2;
- (void*)_mediaRemoteContentItem;
- (void)_postItemChangedNotificationWithDeltaBlock:(id /* block */)arg1;
- (id)artwork;
- (id)createExternalRepresentation;
- (void)dealloc;
- (id)description;
- (id)identifier;
- (id)init;
- (id)initWithExternalRepresentation:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (bool)isContainer;
- (bool)isEqual:(id)arg1;
- (bool)isExplicitContent;
- (bool)isPlayable;
- (bool)isStreamingContent;
- (float)playbackProgress;
- (void)setArtwork:(id)arg1;
- (void)setContainer:(bool)arg1;
- (void)setExplicitContent:(bool)arg1;
- (void)setPlayable:(bool)arg1;
- (void)setPlaybackProgress:(float)arg1;
- (void)setStreamingContent:(bool)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;

@end
