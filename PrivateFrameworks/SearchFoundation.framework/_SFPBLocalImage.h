/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface _SFPBLocalImage : PBCodable <NSSecureCoding, _SFPBLocalImage> {
    int  _localImageType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int localImageType;
@property (readonly) Class superclass;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)localImageType;
- (bool)readFrom:(id)arg1;
- (void)setLocalImageType:(int)arg1;
- (void)writeTo:(id)arg1;

@end
