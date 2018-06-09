/* made by EzioChiu
   Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

@interface SPProtoSockPuppetPlist : PBCodable <NSCopying> {
    NSMutableArray * _objects;
}

@property (nonatomic, retain) NSMutableArray *objects;

+ (Class)objectType;

- (void).cxx_destruct;
- (void)addObject:(id)arg1;
- (void)clearObjects;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)objects;
- (unsigned long long)objectsCount;
- (bool)readFrom:(id)arg1;
- (void)setObjects:(id)arg1;
- (void)writeTo:(id)arg1;

@end
