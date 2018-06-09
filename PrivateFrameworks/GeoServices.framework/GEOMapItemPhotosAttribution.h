/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapItemPhotosAttribution : GEOMapItemAttribution

@property (nonatomic, readonly) NSArray *addPhotoURLs;

- (id)addPhotoURLs;
- (bool)canShowPhotosLocally;
- (id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2 poiID:(id)arg3;
- (id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2 yelpID:(id)arg3;
- (id)urlsForPhotoWithIdentifier:(id)arg1;

@end
