/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

@interface AWDCoreCDPStateMachineCircleJoin : PBCodable <NSCopying> {
    long long  _circleStatus;
    long long  _errorCode;
    NSString * _errorDomain;
    struct { 
        unsigned int circleStatus : 1; 
        unsigned int errorCode : 1; 
        unsigned int timestamp : 1; 
        unsigned int hasPeersForRemoteApproval : 1; 
        unsigned int needsBackupRecovery : 1; 
    }  _has;
    bool  _hasPeersForRemoteApproval;
    bool  _needsBackupRecovery;
    unsigned long long  _timestamp;
}

@property (nonatomic) long long circleStatus;
@property (nonatomic) long long errorCode;
@property (nonatomic, retain) NSString *errorDomain;
@property (nonatomic) bool hasCircleStatus;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic, readonly) bool hasErrorDomain;
@property (nonatomic) bool hasHasPeersForRemoteApproval;
@property (nonatomic) bool hasNeedsBackupRecovery;
@property (nonatomic) bool hasPeersForRemoteApproval;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool needsBackupRecovery;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (long long)circleStatus;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)errorCode;
- (id)errorDomain;
- (bool)hasCircleStatus;
- (bool)hasErrorCode;
- (bool)hasErrorDomain;
- (bool)hasHasPeersForRemoteApproval;
- (bool)hasNeedsBackupRecovery;
- (bool)hasPeersForRemoteApproval;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)needsBackupRecovery;
- (bool)readFrom:(id)arg1;
- (void)setCircleStatus:(long long)arg1;
- (void)setErrorCode:(long long)arg1;
- (void)setErrorDomain:(id)arg1;
- (void)setHasCircleStatus:(bool)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasHasPeersForRemoteApproval:(bool)arg1;
- (void)setHasNeedsBackupRecovery:(bool)arg1;
- (void)setHasPeersForRemoteApproval:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setNeedsBackupRecovery:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
