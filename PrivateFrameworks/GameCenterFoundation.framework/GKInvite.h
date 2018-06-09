/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKInvite : NSObject {
    bool  _cancelled;
    GKInviteInternal * _internal;
    GKPlayer * _sender;
}

@property (getter=isCancelled, nonatomic) bool cancelled;
@property (getter=isHosted, nonatomic, readonly) bool hosted;
@property (retain) GKInviteInternal *internal;
@property (nonatomic, readonly) NSString *inviteID;
@property (nonatomic, readonly, retain) NSString *inviter;
@property (nonatomic, readonly) bool isNearby;
@property (nonatomic, readonly) NSString *message;
@property (nonatomic, readonly) unsigned int playerAttributes;
@property (nonatomic, readonly) unsigned long long playerGroup;
@property (nonatomic, readonly, retain) GKPlayer *sender;
@property (nonatomic, readonly) NSData *sessionToken;

+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (bool)instancesRespondToSelector:(SEL)arg1;

- (void)dealloc;
- (id)description;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)internal;
- (id)inviter;
- (bool)isCancelled;
- (bool)isEqual:(id)arg1;
- (bool)isHosted;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (id)sender;
- (void)setCancelled:(bool)arg1;
- (void)setInternal:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;

@end
