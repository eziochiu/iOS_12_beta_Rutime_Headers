/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@interface _NMRProxiedOriginsProtobuf : PBCodable <NSCopying> {
    NSMutableArray * _origins;
}

@property (nonatomic, retain) NSMutableArray *origins;

+ (Class)originsType;

- (void).cxx_destruct;
- (void)addOrigins:(id)arg1;
- (void)clearOrigins;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)origins;
- (id)originsAtIndex:(unsigned long long)arg1;
- (unsigned long long)originsCount;
- (bool)readFrom:(id)arg1;
- (void)setOrigins:(id)arg1;
- (void)writeTo:(id)arg1;

@end
