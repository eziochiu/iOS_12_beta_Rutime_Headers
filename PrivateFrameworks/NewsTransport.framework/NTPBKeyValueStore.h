/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBKeyValueStore : PBCodable <NSCopying> {
    long long  _clientVersion;
    struct { 
        unsigned int clientVersion : 1; 
        unsigned int version : 1; 
    }  _has;
    NSMutableArray * _keyValuePairs;
    NSData * _plistSidecar;
    long long  _version;
}

@property (nonatomic) long long clientVersion;
@property (nonatomic) bool hasClientVersion;
@property (nonatomic, readonly) bool hasPlistSidecar;
@property (nonatomic) bool hasVersion;
@property (nonatomic, retain) NSMutableArray *keyValuePairs;
@property (nonatomic, retain) NSData *plistSidecar;
@property (nonatomic) long long version;

+ (Class)keyValuePairsType;

- (void)addKeyValuePairs:(id)arg1;
- (void)clearKeyValuePairs;
- (long long)clientVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasClientVersion;
- (bool)hasPlistSidecar;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)keyValuePairs;
- (id)keyValuePairsAtIndex:(unsigned long long)arg1;
- (unsigned long long)keyValuePairsCount;
- (void)mergeFrom:(id)arg1;
- (id)plistSidecar;
- (bool)readFrom:(id)arg1;
- (void)setClientVersion:(long long)arg1;
- (void)setHasClientVersion:(bool)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setKeyValuePairs:(id)arg1;
- (void)setPlistSidecar:(id)arg1;
- (void)setVersion:(long long)arg1;
- (long long)version;
- (void)writeTo:(id)arg1;

@end
