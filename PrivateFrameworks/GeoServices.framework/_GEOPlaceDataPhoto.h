/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOPlaceDataPhoto : NSObject <GEOMapItemPhoto> {
    GEOPDCaptionedPhoto * _captionedPhoto;
    GEOPDPhoto * _photo;
    NSArray * _sortedPhotoInfos;
}

@property (nonatomic, readonly) NSString *author;
@property (nonatomic, readonly) NSString *caption;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool displayFullPhotoInline;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *licenseDescription;
@property (nonatomic, readonly) NSURL *licenseURL;
@property (nonatomic, readonly) double sizeRatio;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uid;
@property (nonatomic, readonly) bool useGallery;

- (void).cxx_destruct;
- (id)author;
- (id)bestPhotoForSize:(struct CGSize { double x1; double x2; })arg1 allowSmaller:(bool)arg2;
- (id)caption;
- (bool)displayFullPhotoInline;
- (id)initWithCaptionedPhoto:(id)arg1;
- (id)initWithPhoto:(id)arg1;
- (id)largestPhoto;
- (id)licenseDescription;
- (id)licenseURL;
- (double)sizeRatio;
- (id)uid;
- (bool)useGallery;

@end
