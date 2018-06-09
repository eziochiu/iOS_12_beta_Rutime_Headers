/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLRevGeoPlaceInfo : NSObject {
    NSMutableSet * _geoPlaceInfos;
    NSString * _placeName;
}

@property (nonatomic, readonly, retain) NSSet *geoPlaceInfos;
@property (nonatomic, readonly, retain) NSNumber *minimumArea;
@property (nonatomic, readonly, copy) NSString *placeName;

- (void)addPlaceInfo:(id)arg1;
- (void)dealloc;
- (id)geoPlaceInfos;
- (id)initWithPlaceName:(id)arg1;
- (id)minimumArea;
- (id)placeName;

@end
