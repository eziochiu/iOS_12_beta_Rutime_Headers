/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUPlayerStatus : NSObject <NSCopying> {
    double  _currentTime;
    double  _duration;
    NSError * _error;
    long long  _state;
}

@property (nonatomic) double currentTime;
@property (nonatomic) double duration;
@property (nonatomic, retain) NSError *error;
@property (nonatomic) long long playerState;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)currentTime;
- (void)dealloc;
- (id)description;
- (double)duration;
- (id)error;
- (long long)playerState;
- (void)setCurrentTime:(double)arg1;
- (void)setDuration:(double)arg1;
- (void)setError:(id)arg1;
- (void)setPlayerState:(long long)arg1;

@end
