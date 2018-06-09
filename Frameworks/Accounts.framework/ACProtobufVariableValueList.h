/* made by EzioChiu
   Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

@interface ACProtobufVariableValueList : PBCodable <NSCopying> {
    NSMutableArray * _values;
}

@property (nonatomic, copy) NSArray *array;
@property (nonatomic, copy) NSSet *set;
@property (nonatomic, retain) NSMutableArray *values;

+ (Class)valueType;

- (void).cxx_destruct;
- (id)_convertArray:(id)arg1;
- (void)addValue:(id)arg1;
- (id)array;
- (void)clearValues;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithArray:(id)arg1;
- (id)initWithSet:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)set;
- (void)setArray:(id)arg1;
- (void)setSet:(id)arg1;
- (void)setValues:(id)arg1;
- (id)valueAtIndex:(unsigned long long)arg1;
- (id)values;
- (unsigned long long)valuesCount;
- (void)writeTo:(id)arg1;

@end
