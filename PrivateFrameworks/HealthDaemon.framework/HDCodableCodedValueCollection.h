/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableCodedValueCollection : PBCodable <NSCopying> {
    NSMutableArray * _codedValues;
}

@property (nonatomic, retain) NSMutableArray *codedValues;

+ (Class)codedValuesType;

- (void).cxx_destruct;
- (void)addCodedValues:(id)arg1;
- (void)clearCodedValues;
- (id)codedValues;
- (id)codedValuesAtIndex:(unsigned long long)arg1;
- (unsigned long long)codedValuesCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCodedValues:(id)arg1;
- (void)writeTo:(id)arg1;

@end
