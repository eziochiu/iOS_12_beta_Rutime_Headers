/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MapLocation : NSObject <NSCoding, NSCopying> {
    NSMutableArray * _completionHandlers;
    NSString * _countryName;
    NSString * _customName;
    double  _latitude;
    double  _longitude;
    NSString * _name;
    bool  _resolved;
    bool  _resolving;
    int  _state;
}

@property (nonatomic, retain) NSMutableArray *completionHandlers;
@property (nonatomic, retain) NSString *countryName;
@property (nonatomic, retain) NSString *customName;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic, retain) NSString *name;
@property (getter=isResolved, nonatomic) bool resolved;
@property (getter=isResolving, nonatomic) bool resolving;
@property (nonatomic) int state;

+ (id)defaultLocation;
+ (id)mapLocationWithLatitude:(double)arg1 longitude:(double)arg2;
+ (id)mapLocationWithLocation:(id)arg1;
+ (id)mapLocationWithLocationCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
+ (id)mapLocationWithMapItem:(id)arg1;
+ (id)objectFromPlist:(id)arg1 inProject:(id)arg2;

- (void).cxx_destruct;
- (void)_resolveWithCompletionHandler:(id /* block */)arg1;
- (long long)compare:(id)arg1;
- (id)completionHandlers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryName;
- (id)customName;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasSameCoordinateAsLocation:(id)arg1 tolerance:(float)arg2;
- (bool)hasValidCoordinate;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqualToLocation:(id)arg1;
- (bool)isResolved;
- (bool)isResolving;
- (double)latitude;
- (double)longitude;
- (id)name;
- (id)plistRepresentation;
- (void)resolveWithCompletionHandler:(id /* block */)arg1;
- (void)setCompletionHandlers:(id)arg1;
- (void)setCountryName:(id)arg1;
- (void)setCustomName:(id)arg1;
- (void)setLatitude:(double)arg1;
- (void)setLongitude:(double)arg1;
- (void)setName:(id)arg1;
- (void)setResolved:(bool)arg1;
- (void)setResolving:(bool)arg1;
- (void)setState:(int)arg1;
- (int)state;
- (id)stringRepresentation;

@end
