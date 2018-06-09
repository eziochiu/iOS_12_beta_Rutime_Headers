/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFMapRegion : NSObject <NSCopying, NSSecureCoding, SFMapRegion> {
    double  _eastLng;
    struct { 
        unsigned int southLat : 1; 
        unsigned int westLng : 1; 
        unsigned int northLat : 1; 
        unsigned int eastLng : 1; 
    }  _has;
    double  _northLat;
    double  _southLat;
    double  _westLng;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic) double eastLng;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) double northLat;
@property (nonatomic) double southLat;
@property (readonly) Class superclass;
@property (nonatomic) double westLng;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (double)eastLng;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasEastLng;
- (bool)hasNorthLat;
- (bool)hasSouthLat;
- (bool)hasWestLng;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (id)jsonData;
- (double)northLat;
- (void)setEastLng:(double)arg1;
- (void)setNorthLat:(double)arg1;
- (void)setSouthLat:(double)arg1;
- (void)setWestLng:(double)arg1;
- (double)southLat;
- (double)westLng;

@end
