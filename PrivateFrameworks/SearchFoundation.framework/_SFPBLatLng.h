/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface _SFPBLatLng : PBCodable <NSSecureCoding, _SFPBLatLng> {
    double  _lat;
    double  _lng;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) double lat;
@property (nonatomic) double lng;
@property (readonly) Class superclass;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (double)lat;
- (double)lng;
- (bool)readFrom:(id)arg1;
- (void)setLat:(double)arg1;
- (void)setLng:(double)arg1;
- (void)writeTo:(id)arg1;

@end
