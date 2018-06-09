/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKPRValue : PBCodable <NSCopying> {
    NSData * _blobValue;
    double  _dateValue;
    double  _doubleValue;
    struct { 
        unsigned int dateValue : 1; 
        unsigned int doubleValue : 1; 
        unsigned int integerValue : 1; 
    }  _has;
    long long  _integerValue;
    NSString * _stringValue;
    _DKPRValueType * _type;
}

@property (nonatomic, retain) NSData *blobValue;
@property (nonatomic) double dateValue;
@property (nonatomic) double doubleValue;
@property (nonatomic, readonly) bool hasBlobValue;
@property (nonatomic) bool hasDateValue;
@property (nonatomic) bool hasDoubleValue;
@property (nonatomic) bool hasIntegerValue;
@property (nonatomic, readonly) bool hasStringValue;
@property (nonatomic) long long integerValue;
@property (nonatomic, retain) NSString *stringValue;
@property (nonatomic, retain) _DKPRValueType *type;

- (void).cxx_destruct;
- (id)blobValue;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)dateValue;
- (id)description;
- (id)dictionaryRepresentation;
- (double)doubleValue;
- (bool)hasBlobValue;
- (bool)hasDateValue;
- (bool)hasDoubleValue;
- (bool)hasIntegerValue;
- (bool)hasStringValue;
- (unsigned long long)hash;
- (long long)integerValue;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBlobValue:(id)arg1;
- (void)setDateValue:(double)arg1;
- (void)setDoubleValue:(double)arg1;
- (void)setHasDateValue:(bool)arg1;
- (void)setHasDoubleValue:(bool)arg1;
- (void)setHasIntegerValue:(bool)arg1;
- (void)setIntegerValue:(long long)arg1;
- (void)setStringValue:(id)arg1;
- (void)setType:(id)arg1;
- (id)stringValue;
- (id)type;
- (void)writeTo:(id)arg1;

@end
