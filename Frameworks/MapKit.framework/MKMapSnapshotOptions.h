/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKMapSnapshotOptions : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _annotationViews;
    MKMapCamera * _camera;
    NSArray * _customFeatureAnnotations;
    struct { 
        struct { 
            double x; 
            double y; 
        } origin; 
        struct { 
            double width; 
            double height; 
        } size; 
    }  _mapRect;
    unsigned long long  _mapType;
    int  _mode;
    struct { 
        struct CLLocationCoordinate2D { 
            double latitude; 
            double longitude; 
        } center; 
        struct { 
            double latitudeDelta; 
            double longitudeDelta; 
        } span; 
    }  _region;
    bool  _rendersInBackground;
    double  _scale;
    unsigned char  _searchResultsType;
    bool  _showsBuildings;
    bool  _showsNightMode;
    bool  _showsPointLabels;
    bool  _showsPointsOfInterest;
    bool  _showsVenues;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    bool  _useSnapshotService;
    bool  _usingRect;
}

@property (nonatomic, copy) NSArray *annotationViews;
@property (nonatomic, copy) MKMapCamera *camera;
@property (getter=_customFeatureAnnotations, setter=_setCustomFeatureAnnotations:, nonatomic, copy) NSArray *customFeatureAnnotations;
@property (nonatomic) struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } mapRect;
@property (nonatomic) unsigned long long mapType;
@property (nonatomic) struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } region;
@property (getter=_rendersInBackground, setter=_setRendersInBackground:, nonatomic) bool rendersInBackground;
@property (nonatomic) double scale;
@property (getter=_searchResultsType, setter=_setSearchResultsType:, nonatomic) unsigned char searchResultsType;
@property (nonatomic) bool showsBuildings;
@property (getter=_showsNightMode, setter=_setShowsNightMode:, nonatomic) bool showsNightMode;
@property (getter=_showsPointLabels, setter=_setShowsPointLabels:, nonatomic) bool showsPointLabels;
@property (nonatomic) bool showsPointsOfInterest;
@property (getter=_showsVenues, setter=_setShowsVenues:, nonatomic) bool showsVenues;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (getter=_useSnapshotService, setter=_setUseSnapshotService:, nonatomic) bool useSnapshotService;
@property (nonatomic, readonly) bool usingRect;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_customFeatureAnnotations;
- (bool)_rendersInBackground;
- (unsigned char)_searchResultsType;
- (void)_setCustomFeatureAnnotations:(id)arg1;
- (void)_setRendersInBackground:(bool)arg1;
- (void)_setSearchResultsType:(unsigned char)arg1;
- (void)_setShowsNightMode:(bool)arg1;
- (void)_setShowsPointLabels:(bool)arg1;
- (void)_setShowsVenues:(bool)arg1;
- (void)_setUseSnapshotService:(bool)arg1;
- (bool)_showsNightMode;
- (bool)_showsPointLabels;
- (bool)_showsVenues;
- (bool)_useSnapshotService;
- (id)annotationViews;
- (id)camera;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })mapRect;
- (unsigned long long)mapType;
- (struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })region;
- (double)scale;
- (void)setAnnotationViews:(id)arg1;
- (void)setCamera:(id)arg1;
- (void)setMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMapType:(unsigned long long)arg1;
- (void)setRegion:(struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setScale:(double)arg1;
- (void)setShowsBuildings:(bool)arg1;
- (void)setShowsPointsOfInterest:(bool)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)showsBuildings;
- (bool)showsPointsOfInterest;
- (struct CGSize { double x1; double x2; })size;
- (bool)usingRect;

@end
