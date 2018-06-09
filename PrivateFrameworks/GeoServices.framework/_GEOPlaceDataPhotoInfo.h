/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOPlaceDataPhotoInfo : NSObject <GEOMapItemPhotoInfo> {
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    NSURL * _url;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSURL *url;

+ (id)sortedPhotoInfoFromPhotoVersions:(id)arg1;

- (void).cxx_destruct;
- (id)initWithPhotoContent:(id)arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)url;

@end
