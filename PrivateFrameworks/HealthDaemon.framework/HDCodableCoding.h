/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableCoding : PBCodable <NSCopying> {
    NSString * _code;
    NSString * _system;
    NSString * _version;
}

@property (nonatomic, retain) NSString *code;
@property (nonatomic, readonly) bool hasCode;
@property (nonatomic, readonly) bool hasSystem;
@property (nonatomic, readonly) bool hasVersion;
@property (nonatomic, retain) NSString *system;
@property (nonatomic, retain) NSString *version;

- (void).cxx_destruct;
- (id)code;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCode;
- (bool)hasSystem;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCode:(id)arg1;
- (void)setSystem:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)system;
- (id)version;
- (void)writeTo:(id)arg1;

@end
