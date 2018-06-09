/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKFriendPlayerInternal : GKFamiliarPlayerInternal {
    NSDate * _lastPlayedDate;
    GKGameInternal * _lastPlayedGame;
    NSString * _status;
}

+ (id)secureCodedPropertyKeys;
+ (bool)supportsSecureCoding;

- (void)dealloc;
- (int)defaultFamiliarity;
- (bool)isFriend;
- (id)lastPlayedDate;
- (id)lastPlayedGame;
- (void)setLastPlayedDate:(id)arg1;
- (void)setLastPlayedGame:(id)arg1;
- (void)setStatus:(id)arg1;
- (id)status;

@end
