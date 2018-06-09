/* made by EzioChiu
   Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

@interface ACProtobufDataclassAction : PBCodable <NSCopying> {
    NSMutableArray * _affectedContainers;
    bool  _destructive;
    int  _type;
}

@property (nonatomic, retain) NSMutableArray *affectedContainers;
@property (nonatomic) bool destructive;
@property (nonatomic) int type;

+ (Class)affectedContainersType;

- (void).cxx_destruct;
- (void)addAffectedContainers:(id)arg1;
- (id)affectedContainers;
- (id)affectedContainersAtIndex:(unsigned long long)arg1;
- (unsigned long long)affectedContainersCount;
- (void)clearAffectedContainers;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)destructive;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAffectedContainers:(id)arg1;
- (void)setDestructive:(bool)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (void)writeTo:(id)arg1;

@end
