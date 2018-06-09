/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLLocationOfInterest : NSObject {
    CLLocation * _location;
    double  _radius;
    long long  _type;
}

@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) double radius;
@property (nonatomic, readonly) long long type;

+ (id)locationOfInterestWithType:(long long)arg1 location:(id)arg2 radius:(double)arg3;

- (void).cxx_destruct;
- (id)_descriptionType;
- (id)description;
- (id)location;
- (double)radius;
- (long long)type;

@end
