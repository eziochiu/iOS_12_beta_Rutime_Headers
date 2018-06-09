/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableTimestampedKeyValuePair : PBCodable <NSCopying> {
    NSData * _bytesValue;
    struct { 
        unsigned int numberDoubleValue : 1; 
        unsigned int numberIntValue : 1; 
        unsigned int timestamp : 1; 
    }  _has;
    NSString * _key;
    double  _numberDoubleValue;
    long long  _numberIntValue;
    NSString * _stringValue;
    double  _timestamp;
}

@property (nonatomic, retain) NSData *bytesValue;
@property (nonatomic, readonly) bool hasBytesValue;
@property (nonatomic, readonly) bool hasKey;
@property (nonatomic) bool hasNumberDoubleValue;
@property (nonatomic) bool hasNumberIntValue;
@property (nonatomic, readonly) bool hasStringValue;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) NSString *key;
@property (nonatomic) double numberDoubleValue;
@property (nonatomic) long long numberIntValue;
@property (nonatomic, retain) NSString *stringValue;
@property (nonatomic) double timestamp;

- (void).cxx_destruct;
- (id)bytesValue;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)decodedTimestamp;
- (id)decodedValue;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBytesValue;
- (bool)hasKey;
- (bool)hasNumberDoubleValue;
- (bool)hasNumberIntValue;
- (bool)hasStringValue;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (id)initWithKey:(id)arg1 value:(id)arg2 timestamp:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (double)numberDoubleValue;
- (long long)numberIntValue;
- (bool)readFrom:(id)arg1;
- (void)setBytesValue:(id)arg1;
- (void)setHasNumberDoubleValue:(bool)arg1;
- (void)setHasNumberIntValue:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setKey:(id)arg1;
- (void)setNumberDoubleValue:(double)arg1;
- (void)setNumberIntValue:(long long)arg1;
- (void)setStringValue:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setTimestampWithDate:(id)arg1;
- (void)setValue:(id)arg1;
- (id)stringValue;
- (double)timestamp;
- (void)writeTo:(id)arg1;

@end
