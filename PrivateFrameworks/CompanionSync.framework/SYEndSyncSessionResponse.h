/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYEndSyncSessionResponse : PBCodable <NSCopying> {
    bool  _didRollback;
    SYErrorInfo * _error;
    struct { 
        unsigned int didRollback : 1; 
    }  _has;
    SYMessageHeader * _header;
    NSString * _sessionID;
}

@property (nonatomic) bool didRollback;
@property (nonatomic, retain) SYErrorInfo *error;
@property (nonatomic) bool hasDidRollback;
@property (nonatomic, readonly) bool hasError;
@property (nonatomic, retain) SYMessageHeader *header;
@property (nonatomic, retain) NSString *sessionID;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)didRollback;
- (id)error;
- (bool)hasDidRollback;
- (bool)hasError;
- (unsigned long long)hash;
- (id)header;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sessionID;
- (void)setDidRollback:(bool)arg1;
- (void)setError:(id)arg1;
- (void)setHasDidRollback:(bool)arg1;
- (void)setHeader:(id)arg1;
- (void)setSessionID:(id)arg1;
- (void)writeTo:(id)arg1;

@end
