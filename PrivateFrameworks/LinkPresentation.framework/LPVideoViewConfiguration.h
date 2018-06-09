/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPVideoViewConfiguration : NSObject <NSCopying> {
    bool  _disableAutoPlay;
    bool  _disablePlayback;
    bool  _disablePlaybackControls;
}

@property (nonatomic) bool disableAutoPlay;
@property (nonatomic) bool disablePlayback;
@property (nonatomic) bool disablePlaybackControls;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)disableAutoPlay;
- (bool)disablePlayback;
- (bool)disablePlaybackControls;
- (void)setDisableAutoPlay:(bool)arg1;
- (void)setDisablePlayback:(bool)arg1;
- (void)setDisablePlaybackControls:(bool)arg1;

@end