/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

@interface PXPlacesSnapshotOptions : NSObject {
    NSString * _cacheDirectoryPath;
    PKExtendedTraitCollection * _extendedTraitCollection;
    <PXPlacesMapGeotaggableInfoDelegate> * _geotaggableInformationDelegate;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _shouldSkipPlaceholder;
    unsigned long long  _snapshotMapType;
    struct CGSize { 
        double width; 
        double height; 
    }  _viewSize;
    double  _visibleDistance;
}

@property (nonatomic, retain) NSString *cacheDirectoryPath;
@property (nonatomic, retain) PKExtendedTraitCollection *extendedTraitCollection;
@property (nonatomic, retain) <PXPlacesMapGeotaggableInfoDelegate> *geotaggableInformationDelegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) bool shouldSkipPlaceholder;
@property (nonatomic) unsigned long long snapshotMapType;
@property (nonatomic) struct CGSize { double x1; double x2; } viewSize;
@property (nonatomic) double visibleDistance;

- (void).cxx_destruct;
- (id)cacheDirectoryPath;
- (id)extendedTraitCollection;
- (id)geotaggableInformationDelegate;
- (id)init;
- (id)queue;
- (void)setCacheDirectoryPath:(id)arg1;
- (void)setExtendedTraitCollection:(id)arg1;
- (void)setGeotaggableInformationDelegate:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setShouldSkipPlaceholder:(bool)arg1;
- (void)setSnapshotMapType:(unsigned long long)arg1;
- (void)setViewSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setVisibleDistance:(double)arg1;
- (bool)shouldSkipPlaceholder;
- (unsigned long long)snapshotMapType;
- (struct CGSize { double x1; double x2; })viewSize;
- (double)visibleDistance;

@end
