/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDSpringBoardSOSAlertResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
    }  _has;
    NSString * _response;
    unsigned long long  _timestamp;
    NSString * _uUID;
}

@property (nonatomic, readonly) bool hasResponse;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, readonly) bool hasUUID;
@property (nonatomic, retain) NSString *response;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) NSString *uUID;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasResponse;
- (bool)hasTimestamp;
- (bool)hasUUID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)response;
- (void)setHasTimestamp:(bool)arg1;
- (void)setResponse:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUUID:(id)arg1;
- (unsigned long long)timestamp;
- (id)uUID;
- (void)writeTo:(id)arg1;

@end
