/* made by EzioChiu
   Image: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
 */

@interface ALAssetRepresentation : NSObject {
    bool  _ignoreRead;
    id  _internal;
}

@property bool ignoreRead;
@property (nonatomic, retain) ALAssetRepresentationPrivate *internal;

+ (void)_enableImageDataUsesMap;

- (struct CGImage { }*)CGImageWithOptions:(id)arg1;
- (struct CGImage { }*)CGImageWithOptions:(id)arg1 format:(int)arg2;
- (id)UTI;
- (int)_fileDescriptor;
- (id)_imageData;
- (struct CGImage { }*)_largeDisplayableImageForFormatID:(int)arg1;
- (void)dealloc;
- (id)description;
- (struct CGSize { double x1; double x2; })dimensions;
- (id)filename;
- (struct CGImage { }*)fullResolutionImage;
- (struct CGImage { }*)fullScreenImage;
- (unsigned long long)getBytes:(char *)arg1 fromOffset:(long long)arg2 length:(unsigned long long)arg3 error:(id*)arg4;
- (bool)ignoreRead;
- (id)initWithManagedAsset:(id)arg1 sidecar:(id)arg2 extension:(id)arg3 library:(id)arg4;
- (id)internal;
- (bool)isValid;
- (id)metadata;
- (long long)orientation;
- (float)scale;
- (void)setIgnoreRead:(bool)arg1;
- (void)setInternal:(id)arg1;
- (long long)size;
- (id)url;
- (struct CGImage { }*)zoomableDisplayImage;

@end
