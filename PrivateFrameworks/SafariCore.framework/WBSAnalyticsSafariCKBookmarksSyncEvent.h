/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

@interface WBSAnalyticsSafariCKBookmarksSyncEvent : PBCodable <NSCopying> {
    NSString * _errorCode;
    NSString * _errorDomain;
    struct { 
        unsigned int result : 1; 
        unsigned int timestamp : 1; 
    }  _has;
    long long  _result;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) NSString *errorCode;
@property (nonatomic, retain) NSString *errorDomain;
@property (nonatomic, readonly) bool hasErrorCode;
@property (nonatomic, readonly) bool hasErrorDomain;
@property (nonatomic) bool hasResult;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) long long result;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorCode;
- (id)errorDomain;
- (bool)hasErrorCode;
- (bool)hasErrorDomain;
- (bool)hasResult;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (long long)result;
- (void)setErrorCode:(id)arg1;
- (void)setErrorDomain:(id)arg1;
- (void)setHasResult:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setResult:(long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
