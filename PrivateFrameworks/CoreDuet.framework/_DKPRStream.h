/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKPRStream : PBCodable <NSCopying> {
    NSString * _name;
    _DKPRValueType * _type;
}

@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) _DKPRValueType *type;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setName:(id)arg1;
- (void)setType:(id)arg1;
- (id)type;
- (void)writeTo:(id)arg1;

@end
