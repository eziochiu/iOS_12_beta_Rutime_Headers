/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKMapItemPhoto : NSObject {
    <GEOMapItemPhoto> * _geoMapItemPhoto;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, readonly) bool displayFullPhotoInline;
@property (nonatomic, readonly) long long format;
@property (nonatomic, retain) <GEOMapItemPhoto> *geoMapItemPhoto;
@property (nonatomic, readonly) NSURL *largestPhotoURL;
@property (nonatomic, readonly) NSString *license;
@property (nonatomic, readonly) NSString *photoID;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) bool useGallery;

- (void).cxx_destruct;
- (bool)displayFullPhotoInline;
- (long long)format;
- (id)geoMapItemPhoto;
- (id)initWithGeoMapItemPhoto:(id)arg1;
- (id)initWithGeoMapItemPhoto:(id)arg1 title:(id)arg2 subtitle:(id)arg3;
- (id)initWithPictureItem:(id)arg1;
- (id)largestPhotoURL;
- (id)license;
- (id)photoID;
- (void)setGeoMapItemPhoto:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;
- (id)urlForBestPhotoForSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)useGallery;

@end
