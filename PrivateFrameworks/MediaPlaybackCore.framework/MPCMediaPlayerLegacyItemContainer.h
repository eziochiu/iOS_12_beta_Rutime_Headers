/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCMediaPlayerLegacyItemContainer : MPCPlayerItemContainer {
    MPQueueFeeder * _queueFeeder;
}

@property (nonatomic, readonly) MPQueueFeeder *queueFeeder;

- (void).cxx_destruct;
- (id)initWithQueueFeeder:(id)arg1;
- (id)modelPlayEventRepresentation;
- (id)queueFeeder;

@end
