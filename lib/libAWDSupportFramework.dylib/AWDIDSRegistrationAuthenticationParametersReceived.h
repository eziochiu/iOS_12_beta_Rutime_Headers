/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDIDSRegistrationAuthenticationParametersReceived : PBCodable <NSCopying> {
    int  _error;
    struct { 
        unsigned int timeIntervalSinceRequest : 1; 
        unsigned int timestamp : 1; 
        unsigned int error : 1; 
    }  _has;
    unsigned long long  _timeIntervalSinceRequest;
    unsigned long long  _timestamp;
}

@property (nonatomic) int error;
@property (nonatomic) bool hasError;
@property (nonatomic) bool hasTimeIntervalSinceRequest;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long timeIntervalSinceRequest;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)error;
- (bool)hasError;
- (bool)hasTimeIntervalSinceRequest;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setError:(int)arg1;
- (void)setHasError:(bool)arg1;
- (void)setHasTimeIntervalSinceRequest:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimeIntervalSinceRequest:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timeIntervalSinceRequest;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
