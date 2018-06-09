/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface AWDAccountsLandmarkEventAccountTypeCounts : PBCodable <NSCopying> {
    unsigned int  _accountCount;
    NSString * _accountType;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int accountCount : 1; 
    }  _has;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned int accountCount;
@property (nonatomic, retain) NSString *accountType;
@property (nonatomic) bool hasAccountCount;
@property (nonatomic, readonly) bool hasAccountType;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (unsigned int)accountCount;
- (id)accountType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAccountCount;
- (bool)hasAccountType;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAccountCount:(unsigned int)arg1;
- (void)setAccountType:(id)arg1;
- (void)setHasAccountCount:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
