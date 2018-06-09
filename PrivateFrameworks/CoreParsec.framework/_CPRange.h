/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface _CPRange : PBCodable <NSSecureCoding, _CPRange> {
    unsigned long long  _length;
    unsigned long long  _location;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned long long length;
@property (nonatomic) unsigned long long location;
@property (readonly) Class superclass;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned long long)length;
- (unsigned long long)location;
- (bool)readFrom:(id)arg1;
- (bool)requiresQueryId;
- (void)setLength:(unsigned long long)arg1;
- (void)setLocation:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end
