/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFLatLng : NSObject <NSCopying, NSSecureCoding, SFLatLng> {
    struct { 
        unsigned int lat : 1; 
        unsigned int lng : 1; 
    }  _has;
    double  _lat;
    double  _lng;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) double lat;
@property (nonatomic) double lng;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasLat;
- (bool)hasLng;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (id)jsonData;
- (double)lat;
- (double)lng;
- (void)setLat:(double)arg1;
- (void)setLng:(double)arg1;

@end
