/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDSafariCKBookmarksMigrationFinishedEvent : PBCodable <NSCopying> {
    unsigned long long  _duration;
    NSString * _errorCode;
    NSString * _errorDomain;
    struct { 
        unsigned int duration : 1; 
        unsigned int timestamp : 1; 
        unsigned int migratorType : 1; 
        unsigned int result : 1; 
    }  _has;
    int  _migratorType;
    int  _result;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned long long duration;
@property (nonatomic, retain) NSString *errorCode;
@property (nonatomic, retain) NSString *errorDomain;
@property (nonatomic) bool hasDuration;
@property (nonatomic, readonly) bool hasErrorCode;
@property (nonatomic, readonly) bool hasErrorDomain;
@property (nonatomic) bool hasMigratorType;
@property (nonatomic) bool hasResult;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) int migratorType;
@property (nonatomic) int result;
@property (nonatomic) unsigned long long timestamp;

- (int)StringAsMigratorType:(id)arg1;
- (int)StringAsResult:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)duration;
- (id)errorCode;
- (id)errorDomain;
- (bool)hasDuration;
- (bool)hasErrorCode;
- (bool)hasErrorDomain;
- (bool)hasMigratorType;
- (bool)hasResult;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)migratorType;
- (id)migratorTypeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (int)result;
- (id)resultAsString:(int)arg1;
- (void)setDuration:(unsigned long long)arg1;
- (void)setErrorCode:(id)arg1;
- (void)setErrorDomain:(id)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasMigratorType:(bool)arg1;
- (void)setHasResult:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setMigratorType:(int)arg1;
- (void)setResult:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
