/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKChallengeInternal : GKInternalRepresentation {
    NSString * _bundleID;
    NSString * _challengeID;
    NSOrderedSet * _compatibleBundleIDs;
    NSDate * _completionDate;
    GKGameInternal * _game;
    NSDate * _issueDate;
    GKPlayerInternal * _issuingPlayer;
    NSString * _message;
    GKPlayerInternal * _receivingPlayer;
    long long  _state;
}

@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, retain) NSString *challengeID;
@property (nonatomic, retain) NSOrderedSet *compatibleBundleIDs;
@property (nonatomic, retain) NSDate *completionDate;
@property (nonatomic, retain) GKGameInternal *game;
@property (nonatomic, retain) NSDate *issueDate;
@property (nonatomic, retain) GKPlayerInternal *issuingPlayer;
@property (nonatomic, retain) NSString *message;
@property (nonatomic, retain) GKPlayerInternal *receivingPlayer;
@property (nonatomic) long long state;
@property (nonatomic, readonly) NSString *subtitleText;
@property (nonatomic, readonly) NSString *titleText;
@property (nonatomic, readonly) unsigned long long type;

+ (id)internalRepresentation;
+ (id)secureCodedPropertyKeys;

- (id)bundleID;
- (id)challengeID;
- (id)compatibleBundleIDs;
- (id)completionDate;
- (void)dealloc;
- (id)descriptionSubstitutionMap;
- (void)encodeWithCoder:(id)arg1;
- (id)findLocalGameBundleID;
- (id)game;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)issueDate;
- (id)issuingPlayer;
- (id)message;
- (id)receivingPlayer;
- (id)serverRepresentation;
- (id)serverRepresentationForReceivingPlayer:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setChallengeID:(id)arg1;
- (void)setCompatibleBundleIDs:(id)arg1;
- (void)setCompletionDate:(id)arg1;
- (void)setGame:(id)arg1;
- (void)setIssueDate:(id)arg1;
- (void)setIssuingPlayer:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setReceivingPlayer:(id)arg1;
- (void)setState:(long long)arg1;
- (long long)state;
- (id)subtitleText;
- (id)titleText;
- (unsigned long long)type;

@end
