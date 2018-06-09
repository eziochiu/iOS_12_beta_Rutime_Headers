/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHMemoryFeature : NSObject <NSSecureCoding> {
    id  _subtypeSpecificAttribute;
    unsigned long long  _type;
}

@property (nonatomic, readonly) unsigned long long type;

+ (id)locationMemoryFeatureWithAreaForName:(id)arg1;
+ (id)locationMemoryFeatureWithLocation:(id)arg1;
+ (id)memoryFeatureWithData:(id)arg1 photoLibrary:(id)arg2;
+ (id)peopleMemoryFeatureWithPersonLocalIdentifier:(id)arg1;
+ (id)personLocalIdentifierForPersonUniversalIdentifier:(id)arg1 photoLibrary:(id)arg2;
+ (id)personUniversalIdentifierForPersonLocalIdentifier:(id)arg1 photoLibrary:(id)arg2;
+ (id)stringForType:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;
+ (id)timeMemoryFeatureWithDate:(id)arg1;
+ (id)timeMemoryFeatureWithHolidayForName:(id)arg1;

- (void).cxx_destruct;
- (id)areaName;
- (bool)collidesWithAreaWithName:(id)arg1;
- (bool)collidesWithDate:(id)arg1;
- (bool)collidesWithFeature:(id)arg1;
- (bool)collidesWithHolidayWithName:(id)arg1;
- (bool)collidesWithLocationAtCoordinates:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (bool)collidesWithPersonWithLocalIdentifier:(id)arg1;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)encodedDataWithPhotoLibrary:(id)arg1;
- (unsigned long long)hash;
- (id)holidayName;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)location;
- (id)personLocalIdentifier;
- (unsigned long long)type;

@end
