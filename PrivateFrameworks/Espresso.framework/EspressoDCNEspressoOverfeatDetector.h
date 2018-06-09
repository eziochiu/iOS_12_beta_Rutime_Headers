/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

@interface EspressoDCNEspressoOverfeatDetector : NSObject {
    double  _confidenceThreshold;
    EspressoFDOverfeatNetwork * _enet;
    double  _minBoundingBoxThreshold;
    struct FaceList { struct list<vision::DCN::boundingbox, std::__1::allocator<vision::DCN::boundingbox> > { struct __list_node_base<vision::DCN::boundingbox, void *> { struct __list_node_base<vision::DCN::boundingbox, void *> {} *x_1_2_1; struct __list_node_base<vision::DCN::boundingbox, void *> {} *x_1_2_2; } x_1_1_1; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<vision::DCN::boundingbox, void *> > > { unsigned long long x_2_2_1; } x_1_1_2; } x1; } * face_list;
    int  localFaceMerging;
    int  tileDimension;
    int  tileSizeScaleFactor;
}

@property (nonatomic) double confidenceThreshold;
@property (nonatomic, retain) EspressoFDOverfeatNetwork *enet;
@property (nonatomic) double minBoundingBoxThreshold;

- (void).cxx_destruct;
- (void)commonInit;
- (double)compareObject:(id)arg1 withObject:(id)arg2 error:(id*)arg3;
- (void)computeBBoxUsingProb:(struct shared_ptr<Espresso::blob<float, 3> > { struct blob<float, 3> {} *x1; struct __shared_weak_count {} *x2; })arg1 box:(struct shared_ptr<Espresso::blob<float, 3> > { struct blob<float, 3> {} *x1; struct __shared_weak_count {} *x2; })arg2 andScalefactor:(float)arg3 padX:(float)arg4 padY:(float)arg5;
- (double)confidenceThreshold;
- (void)dealloc;
- (id)enet;
- (void)fillFaceList;
- (id)getDescription;
- (id)getFacesFromNetworkResultOriginalWidth:(float)arg1 originalHeight:(float)arg2;
- (id)init;
- (id)initWithNetwork:(id)arg1;
- (id)initWithOptions:(id)arg1;
- (void)mergeFaceList;
- (double)minBoundingBoxThreshold;
- (void)setConfidenceThreshold:(double)arg1;
- (void)setEnet:(id)arg1;
- (void)setMinBoundingBoxThreshold:(double)arg1;

@end
