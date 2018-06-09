/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKMapItemPhotosAttribution : _MKMapItemAttribution {
    GEOMapItemPhotosAttribution * _geoPhotosAttribution;
}

@property (nonatomic, readonly) NSArray *addPhotoURLs;

- (void).cxx_destruct;
- (id)addPhotoURLs;
- (id)initWithGEOMapItemAttribution:(id)arg1;
- (id)urlsForPhotoWithIdentifier:(id)arg1;

@end
