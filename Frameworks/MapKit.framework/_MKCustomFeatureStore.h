/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKCustomFeatureStore : NSObject <VKCustomFeatureDataSource> {
    NSString * _annotationLocale;
    NSString * _annotationText;
    MKQuadTrie * _annotationsTrie;
    GEOFeatureStyleAttributes * _clusterStyleAttributes;
    <MKCustomFeatureStoreDelegate> * _delegate;
    bool  _isClusteringEnabled;
    NSHashTable * _observers;
    unsigned char  _sceneID;
    unsigned char  _sceneState;
}

@property (nonatomic, copy) GEOFeatureStyleAttributes *clusterStyleAttributes;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MKCustomFeatureStoreDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isClusteringEnabled;
@property (nonatomic) unsigned char sceneID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_clearAnnotations;
- (void)_invalidateRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setSceneState:(unsigned char)arg1;
- (void)addAnnotations:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)allAnnotations;
- (unsigned long long)annotationCount;
- (id)annotationsInMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)clusterStyleAttributes;
- (id)delegate;
- (void)getClusterAnnotationTextForClusterFeatureCount:(unsigned long long)arg1 text:(id*)arg2 locale:(id*)arg3;
- (void)getClusterImageTextForClusterFeatureCount:(unsigned long long)arg1 text:(id*)arg2 locale:(id*)arg3;
- (void)hideScene;
- (id)init;
- (id)initWithClustering:(bool)arg1;
- (bool)isClusteringEnabled;
- (void)removeAnnotations:(id)arg1;
- (void)removeObserver:(id)arg1;
- (unsigned char)sceneID;
- (unsigned char)sceneState;
- (void)setAnnotations:(id)arg1;
- (void)setClusterAnnotationText:(id)arg1 locale:(id)arg2;
- (void)setClusterStyleAttributes:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSceneID:(unsigned char)arg1;
- (void)showScene;

@end
