/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBGroupFont : PBCodable <NSCopying> {
    NSString * _name;
    NSString * _url;
}

@property (nonatomic, readonly) bool hasName;
@property (nonatomic, readonly) bool hasUrl;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *url;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasName;
- (bool)hasUrl;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setName:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;
- (void)writeTo:(id)arg1;

@end
