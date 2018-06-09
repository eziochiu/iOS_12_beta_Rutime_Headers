/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYStartSyncSession : PBCodable <NSCopying> {
    bool  _expectsRestartSupport;
    bool  _expectsRollbackSupport;
    SYMessageHeader * _header;
    bool  _isResetSync;
    NSData * _metadata;
    NSString * _reason;
    NSString * _sessionID;
    double  _sessionTimeout;
}

@property (nonatomic) bool expectsRestartSupport;
@property (nonatomic) bool expectsRollbackSupport;
@property (nonatomic, readonly) bool hasMetadata;
@property (nonatomic, readonly) bool hasReason;
@property (nonatomic, retain) SYMessageHeader *header;
@property (nonatomic) bool isResetSync;
@property (nonatomic, retain) NSData *metadata;
@property (nonatomic, retain) NSString *reason;
@property (nonatomic, retain) NSString *sessionID;
@property (nonatomic) double sessionTimeout;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)expectsRestartSupport;
- (bool)expectsRollbackSupport;
- (bool)hasMetadata;
- (bool)hasReason;
- (unsigned long long)hash;
- (id)header;
- (bool)isEqual:(id)arg1;
- (bool)isResetSync;
- (void)mergeFrom:(id)arg1;
- (id)metadata;
- (bool)readFrom:(id)arg1;
- (id)reason;
- (id)sessionID;
- (double)sessionTimeout;
- (void)setExpectsRestartSupport:(bool)arg1;
- (void)setExpectsRollbackSupport:(bool)arg1;
- (void)setHeader:(id)arg1;
- (void)setIsResetSync:(bool)arg1;
- (void)setMetadata:(id)arg1;
- (void)setReason:(id)arg1;
- (void)setSessionID:(id)arg1;
- (void)setSessionTimeout:(double)arg1;
- (void)writeTo:(id)arg1;

@end
