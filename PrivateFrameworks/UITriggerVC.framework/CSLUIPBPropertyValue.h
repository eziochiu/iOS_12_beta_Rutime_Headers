/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UITriggerVC.framework/UITriggerVC
 */

@interface CSLUIPBPropertyValue : PBCodable <NSCopying> {
    NSMutableArray * _arrayValues;
    NSData * _dataValue;
    CSLUIPBPropertyValue * _dictionaryKey;
    CSLUIPBNumber * _numberValue;
    CSLUIPBSize * _sizeValue;
    NSString * _stringValue;
    NSData * _uUIDValue;
}

@property (nonatomic, retain) NSMutableArray *arrayValues;
@property (nonatomic, retain) NSData *dataValue;
@property (nonatomic, retain) CSLUIPBPropertyValue *dictionaryKey;
@property (nonatomic, readonly) bool hasDataValue;
@property (nonatomic, readonly) bool hasDictionaryKey;
@property (nonatomic, readonly) bool hasNumberValue;
@property (nonatomic, readonly) bool hasSizeValue;
@property (nonatomic, readonly) bool hasStringValue;
@property (nonatomic, readonly) bool hasUUIDValue;
@property (nonatomic, retain) CSLUIPBNumber *numberValue;
@property (nonatomic, retain) CSLUIPBSize *sizeValue;
@property (nonatomic, retain) NSString *stringValue;
@property (nonatomic, retain) NSData *uUIDValue;

- (void).cxx_destruct;
- (void)addArrayValues:(id)arg1;
- (id)arrayValues;
- (id)arrayValuesAtIndex:(unsigned long long)arg1;
- (unsigned long long)arrayValuesCount;
- (void)clearArrayValues;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataValue;
- (id)description;
- (id)dictionaryKey;
- (id)dictionaryRepresentation;
- (bool)hasDataValue;
- (bool)hasDictionaryKey;
- (bool)hasNumberValue;
- (bool)hasSizeValue;
- (bool)hasStringValue;
- (bool)hasUUIDValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)numberValue;
- (bool)readFrom:(id)arg1;
- (void)setArrayValues:(id)arg1;
- (void)setDataValue:(id)arg1;
- (void)setDictionaryKey:(id)arg1;
- (void)setNumberValue:(id)arg1;
- (void)setSizeValue:(id)arg1;
- (void)setStringValue:(id)arg1;
- (void)setUUIDValue:(id)arg1;
- (id)sizeValue;
- (id)stringValue;
- (id)uUIDValue;
- (void)writeTo:(id)arg1;

@end
