/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HealthUIAWDHealthUIRecordsNumberOfAccountsQuery : PBCodable <NSCopying> {
    struct { 
        unsigned int numAccounts : 1; 
        unsigned int timestamp : 1; 
    }  _has;
    unsigned long long  _numAccounts;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasNumAccounts;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long numAccounts;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasNumAccounts;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)numAccounts;
- (bool)readFrom:(id)arg1;
- (void)setHasNumAccounts:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setNumAccounts:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
