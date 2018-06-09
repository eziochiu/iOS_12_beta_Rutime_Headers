/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPictureItem : NSObject <GEOPictureItem> {
    <GEOMapItemPhoto> * _photo;
    int  _pictureItemPhotoType;
    NSString * _primaryText;
    NSString * _secondaryText;
}

@property (nonatomic, readonly) <GEOMapItemPhoto> *photo;
@property (nonatomic, readonly) int pictureItemPhotoType;
@property (nonatomic, readonly) NSString *primaryText;
@property (nonatomic, readonly) NSString *secondaryText;

- (void).cxx_destruct;
- (id)initWithPhoto:(id)arg1 pictureItemPhotoType:(int)arg2 primaryText:(id)arg3 secondaryText:(id)arg4;
- (id)initWithPictureItem:(id)arg1;
- (id)photo;
- (int)pictureItemPhotoType;
- (id)primaryText;
- (id)secondaryText;

@end
