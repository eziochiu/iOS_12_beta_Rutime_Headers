/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
 */

@interface FUAirport : NSObject <NSCopying, NSSecureCoding> {
    NSString * _IATACode;
    NSString * _city;
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _location;
    NSString * _name;
    CLPlacemark * _placemark;
    NSTimeZone * _timeZone;
}

@property (retain) NSString *IATACode;
@property (retain) NSString *city;
@property struct CLLocationCoordinate2D { double x1; double x2; } location;
@property (retain) NSString *name;
@property (retain) CLPlacemark *placemark;
@property (nonatomic, retain) NSTimeZone *timeZone;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)IATACode;
- (id)city;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)fetchPlacemarkWithCompletionHandler:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (struct CLLocationCoordinate2D { double x1; double x2; })location;
- (id)name;
- (id)placemark;
- (void)setCity:(id)arg1;
- (void)setIATACode:(id)arg1;
- (void)setLocation:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (void)setName:(id)arg1;
- (void)setPlacemark:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (id)timeZone;

@end
