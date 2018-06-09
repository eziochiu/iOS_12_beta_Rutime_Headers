/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBCacheHint : PBCodable <NSCopying> {
    NTPBDate * _accessDate;
    struct { 
        unsigned int lifetime : 1; 
    }  _has;
    NSString * _key;
    int  _lifetime;
}

@property (nonatomic, retain) NTPBDate *accessDate;
@property (nonatomic, readonly) bool hasAccessDate;
@property (nonatomic, readonly) bool hasKey;
@property (nonatomic) bool hasLifetime;
@property (nonatomic, retain) NSString *key;
@property (nonatomic) int lifetime;

- (id)accessDate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAccessDate;
- (bool)hasKey;
- (bool)hasLifetime;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)key;
- (int)lifetime;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAccessDate:(id)arg1;
- (void)setHasLifetime:(bool)arg1;
- (void)setKey:(id)arg1;
- (void)setLifetime:(int)arg1;
- (void)writeTo:(id)arg1;

@end
