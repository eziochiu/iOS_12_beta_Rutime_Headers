/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLVehicleHeading : NSObject <NSCopying, NSSecureCoding> {
    id  _internal;
}

@property (nonatomic, readonly) NSDate *timestamp;
@property (nonatomic, readonly) double trueHeading;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithClientVehicleHeading:(struct { double x1; double x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (id)shortDescription;
- (id)timestamp;
- (double)trueHeading;

@end
