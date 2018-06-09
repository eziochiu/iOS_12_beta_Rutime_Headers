/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYEndSyncSession : PBCodable <NSCopying> {
    SYErrorInfo * _error;
    struct { 
        unsigned int rollback : 1; 
    }  _has;
    SYMessageHeader * _header;
    bool  _rollback;
    NSString * _sessionID;
}

@property (nonatomic, retain) SYErrorInfo *error;
@property (nonatomic, readonly) bool hasError;
@property (nonatomic) bool hasRollback;
@property (nonatomic, retain) SYMessageHeader *header;
@property (nonatomic) bool rollback;
@property (nonatomic, retain) NSString *sessionID;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)error;
- (bool)hasError;
- (bool)hasRollback;
- (unsigned long long)hash;
- (id)header;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (bool)rollback;
- (id)sessionID;
- (void)setError:(id)arg1;
- (void)setHasRollback:(bool)arg1;
- (void)setHeader:(id)arg1;
- (void)setRollback:(bool)arg1;
- (void)setSessionID:(id)arg1;
- (void)writeTo:(id)arg1;

@end
