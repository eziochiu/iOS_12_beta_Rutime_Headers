/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDIDSRegistrationRenewCredentialsCompleted : PBCodable <NSCopying> {
    long long  _errorCode;
    NSString * _errorDomain;
    struct { 
        unsigned int errorCode : 1; 
        unsigned int timestamp : 1; 
        unsigned int renewResult : 1; 
    }  _has;
    int  _renewResult;
    unsigned long long  _timestamp;
}

@property (nonatomic) long long errorCode;
@property (nonatomic, retain) NSString *errorDomain;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic, readonly) bool hasErrorDomain;
@property (nonatomic) bool hasRenewResult;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) int renewResult;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)errorCode;
- (id)errorDomain;
- (bool)hasErrorCode;
- (bool)hasErrorDomain;
- (bool)hasRenewResult;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)renewResult;
- (void)setErrorCode:(long long)arg1;
- (void)setErrorDomain:(id)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasRenewResult:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setRenewResult:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
