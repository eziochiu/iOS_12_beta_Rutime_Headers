/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKAutomatchPlayerInternal : GKSpecialPlayerInternal {
    long long  _automatchPosition;
}

@property (nonatomic) long long automatchPosition;

+ (bool)supportsSecureCoding;

- (id)alias;
- (long long)automatchPosition;
- (bool)isAutomatchPlayer;
- (id)playerID;
- (void)setAutomatchPosition:(long long)arg1;

@end
