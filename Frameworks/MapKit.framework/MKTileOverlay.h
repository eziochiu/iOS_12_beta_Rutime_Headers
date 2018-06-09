/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKTileOverlay : NSObject <MKOverlay> {
    NSString * _URLTemplate;
    bool  _canReplaceMapContent;
    bool  _geometryFlipped;
    long long  _maximumZ;
    long long  _minimumZ;
    unsigned int  _providerID;
    GEOTileCache * _tileCache;
    struct CGSize { 
        double width; 
        double height; 
    }  _tileSize;
}

@property (readonly) NSString *URLTemplate;
@property (nonatomic, readonly) struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } boundingMapRect;
@property (nonatomic) bool canReplaceMapContent;
@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } coordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isGeometryFlipped) bool geometryFlipped;
@property (readonly) unsigned long long hash;
@property long long maximumZ;
@property long long minimumZ;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property struct CGSize { double x1; double x2; } tileSize;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (id)URLForTilePath:(struct { long long x1; long long x2; long long x3; double x4; })arg1;
- (id)URLTemplate;
- (void)_assignProviderID;
- (void)_flushCaches;
- (struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })_keyForPath:(struct { long long x1; long long x2; long long x3; double x4; })arg1;
- (void)_loadTile:(id)arg1 result:(id /* block */)arg2;
- (id)_tilesInMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomScale:(double)arg2 contentScale:(double)arg3;
- (int)_zoomLevelForScale:(double)arg1;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })boundingMapRect;
- (bool)canReplaceMapContent;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (void)dealloc;
- (id)init;
- (id)initWithURLTemplate:(id)arg1;
- (bool)isGeometryFlipped;
- (void)loadTileAtPath:(struct { long long x1; long long x2; long long x3; double x4; })arg1 result:(id /* block */)arg2;
- (long long)maximumZ;
- (long long)minimumZ;
- (void)setCanReplaceMapContent:(bool)arg1;
- (void)setGeometryFlipped:(bool)arg1;
- (void)setMaximumZ:(long long)arg1;
- (void)setMinimumZ:(long long)arg1;
- (void)setTileSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })tileSize;

@end
