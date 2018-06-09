/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLPlaceAnnotation : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _placeLevel;
    NSString * _placeName;
}

@property (nonatomic, copy) NSNumber *placeLevel;
@property (nonatomic, copy) NSString *placeName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)placeLevel;
- (id)placeName;
- (void)setPlaceLevel:(id)arg1;
- (void)setPlaceName:(id)arg1;

@end
