/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLocationShiftFunctionResponse : NSObject <NSSecureCoding> {
    struct { 
        double latitude; 
        double longitude; 
    }  _originalCoordinate;
    double  _params;
    double  _radius;
    bool  _shouldUsePolyShiftFunction;
    unsigned int  _version;
}

@property (nonatomic, readonly) struct { double x1; double x2; } originalCoordinate;
@property (nonatomic, readonly) double radius;
@property (nonatomic, readonly) unsigned int version;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPolyLocationShiftResponse:(id)arg1 originalCoordinate:(struct { double x1; double x2; })arg2 version:(unsigned int)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isValidForCoordinate:(struct { double x1; double x2; })arg1;
- (struct { double x1; double x2; })originalCoordinate;
- (double)radius;
- (struct { double x1; double x2; })shiftedCoordinateForCoordinate:(struct { double x1; double x2; })arg1 accuracy:(double*)arg2;
- (unsigned int)version;

@end
