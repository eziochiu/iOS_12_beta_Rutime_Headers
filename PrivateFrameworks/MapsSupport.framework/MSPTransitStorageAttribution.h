/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPTransitStorageAttribution : PBCodable <GEOTransitAttribution, NSCopying> {
    NSMutableArray * _providerNames;
    PBUnknownFields * _unknownFields;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *providerNames;
@property (getter=_providerNames, nonatomic, readonly) NSArray *providerNames;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)providerNamesType;

- (void).cxx_destruct;
- (id)_providerNames;
- (void)addProviderNames:(id)arg1;
- (void)clearProviderNames;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithAttribution:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)providerNames;
- (id)providerNamesAtIndex:(unsigned long long)arg1;
- (unsigned long long)providerNamesCount;
- (bool)readFrom:(id)arg1;
- (void)setProviderNames:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
