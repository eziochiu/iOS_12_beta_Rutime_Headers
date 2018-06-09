/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKStructuredLocation : EKObject <NSCopying> {
    bool  _imprecise;
    EKPredictedLocationOfInterest * _predictedLOI;
}

@property (nonatomic, retain) NSString *address;
@property (nonatomic, copy) NSString *addressBookEntityID;
@property (nonatomic, copy) NSString *derivedFrom;
@property (nonatomic, retain) CLLocation *geoLocation;
@property (nonatomic, readonly) bool hasKnownSpatialData;
@property (getter=isImprecise, nonatomic) bool imprecise;
@property (nonatomic, readonly) bool isStructured;
@property (nonatomic, copy) NSData *mapKitHandle;
@property (nonatomic, retain) EKPredictedLocationOfInterest *predictedLOI;
@property (getter=isPrediction, nonatomic, readonly) bool prediction;
@property (nonatomic) double radius;
@property (nonatomic, retain) NSString *routing;
@property (nonatomic, retain) NSString *title;

// Image: /System/Library/Frameworks/EventKit.framework/EventKit

+ (id)_stringByStrippingControlCharactersFromString:(id)arg1;
+ (Class)frozenClass;
+ (id)locationWithMapItem:(id)arg1;
+ (id)locationWithTitle:(id)arg1;

- (void).cxx_destruct;
- (void)_clearGeoLocationCache;
- (id)address;
- (id)addressBookEntityID;
- (id)cacheKey;
- (id)calLocation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)derivedFrom;
- (id)description;
- (id)geoLocation;
- (id)geoURLString;
- (bool)hasKnownSpatialData;
- (bool)isEqualToLocation:(id)arg1;
- (bool)isImprecise;
- (bool)isPrediction;
- (bool)isStructured;
- (id)latitude;
- (id)longitude;
- (id)mapKitHandle;
- (id)predictedLOI;
- (double)radius;
- (id)referenceFrame;
- (id)routing;
- (void)setAddress:(id)arg1;
- (void)setAddressBookEntityID:(id)arg1;
- (void)setDerivedFrom:(id)arg1;
- (void)setGeoLocation:(id)arg1;
- (void)setImprecise:(bool)arg1;
- (void)setLatitude:(id)arg1;
- (void)setLongitude:(id)arg1;
- (void)setMapKitHandle:(id)arg1;
- (void)setPredictedLOI:(id)arg1;
- (void)setRadius:(double)arg1;
- (void)setReferenceFrame:(id)arg1;
- (void)setRouting:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)updateFromMapItem:(id)arg1;

// Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI

- (id)humanReadableContactString;

@end
