/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKRecentMatchInternal : GKInternalRepresentation {
    NSDate * _date;
    GKGameRecordInternal * _game;
    GKPlayerInternal * _player;
}

@property (nonatomic, retain) NSDate *date;
@property (nonatomic, retain) GKGameRecordInternal *game;
@property (nonatomic, retain) GKPlayerInternal *player;

+ (id)secureCodedPropertyKeys;

- (id)date;
- (void)dealloc;
- (id)game;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)player;
- (void)setDate:(id)arg1;
- (void)setGame:(id)arg1;
- (void)setPlayer:(id)arg1;

@end
