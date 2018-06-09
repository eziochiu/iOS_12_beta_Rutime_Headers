/* made by EzioChiu
   Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

@interface ACProtobufVariableValueDictionary : PBCodable <NSCopying> {
    NSMutableArray * _pairs;
}

@property (nonatomic, copy) NSDictionary *dictionary;
@property (nonatomic, retain) NSMutableArray *pairs;

+ (Class)pairType;

- (void).cxx_destruct;
- (void)addPair:(id)arg1;
- (void)clearPairs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionary;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)pairAtIndex:(unsigned long long)arg1;
- (id)pairs;
- (unsigned long long)pairsCount;
- (bool)readFrom:(id)arg1;
- (void)setDictionary:(id)arg1;
- (void)setPairs:(id)arg1;
- (void)writeTo:(id)arg1;

@end
