/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKTurnBasedExchange : NSObject {
    GKTurnBasedExchangeInternal * _internal;
    GKTurnBasedMatch * _matchWeak;
    NSArray * _recipients;
    NSArray * _replies;
    GKTurnBasedParticipant * _sender;
}

@property (nonatomic, retain) NSDate *completionDate;
@property (nonatomic, retain) NSData *data;
@property (nonatomic, retain) NSString *exchangeID;
@property (retain) GKTurnBasedExchangeInternal *internal;
@property (nonatomic) GKTurnBasedMatch *match;
@property (nonatomic, readonly) NSString *message;
@property (nonatomic, retain) NSArray *recipients;
@property (nonatomic, retain) NSArray *replies;
@property (nonatomic, readonly) NSDate *sendDate;
@property (nonatomic, retain) GKTurnBasedParticipant *sender;
@property (nonatomic, readonly) BOOL status;
@property (nonatomic, retain) NSDate *timeoutDate;

+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (bool)instancesRespondToSelector:(SEL)arg1;

- (void)_updateInternalFromMatchInternal:(id)arg1;
- (void)cancelWithLocalizableMessageKey:(id)arg1 arguments:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)dealloc;
- (id)description;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)internal;
- (bool)isEqual:(id)arg1;
- (id)match;
- (id)message;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)recipients;
- (id)replies;
- (void)replyWithLocalizableMessageKey:(id)arg1 arguments:(id)arg2 data:(id)arg3 completionHandler:(id /* block */)arg4;
- (bool)respondsToSelector:(SEL)arg1;
- (id)sender;
- (void)setInternal:(id)arg1;
- (void)setMatch:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setReplies:(id)arg1;
- (void)setSender:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (BOOL)status;
- (id)valueForUndefinedKey:(id)arg1;

@end