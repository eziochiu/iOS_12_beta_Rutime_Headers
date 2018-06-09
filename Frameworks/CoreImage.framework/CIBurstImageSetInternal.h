/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIBurstImageSetInternal : NSObject {
    int  _version;
    NSString * _versionString;
    CIBurstActionClassifier * actionClassifier;
    NSMutableArray * allImageIdentifiers;
    NSMutableArray * bestImageIdentifiersArray;
    NSString * burstCoverSelection;
    NSString * burstId;
    struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; } * burstLogFileHandle;
    NSString * burstLogFileName;
    NSMutableArray * clusterArray;
    NSMutableDictionary * clusterByImageIdentifier;
    int  curClusterIndexToProcess;
    NSObject<OS_dispatch_queue> * dq;
    NSObject<OS_dispatch_queue> * dq_yuvdump;
    int  dummyAnalysisCount;
    bool  enableAnalysis;
    bool  enableDumpYUV;
    bool  enableFaceCore;
    CIBurstImageFaceAnalysisContext * faceAnalysisContext;
    NSCountedSet * faceIDCounts;
    bool  isAction;
    bool  isPortrait;
    int  maxNumPendingFrames;
    CIBurstYUVImage * overrideImage;
    NSDictionary * overrideProps;
    NSObject<OS_dispatch_semaphore> * sem;
    NSMutableDictionary * statsByImageIdentifier;
    int  temporalOrder;
}

@property CIBurstActionClassifier *actionClassifier;
@property NSMutableArray *allImageIdentifiers;
@property NSArray *bestImageIdentifiersArray;
@property NSString *burstCoverSelection;
@property (nonatomic, retain) NSString *burstId;
@property NSString *burstLogFileName;
@property NSMutableArray *clusterArray;
@property NSMutableDictionary *clusterByImageIdentifier;
@property int dummyAnalysisCount;
@property bool enableAnalysis;
@property bool enableDumpYUV;
@property bool enableFaceCore;
@property NSCountedSet *faceIDCounts;
@property int maxNumPendingFrames;
@property NSMutableDictionary *statsByImageIdentifier;
@property int temporalOrder;
@property int version;
@property NSString *versionString;

+ (id)defaultVersionString;

- (id)actionClassifier;
- (void)addImageFromIOSurface:(struct __IOSurface { }*)arg1 properties:(id)arg2 identifier:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)addYUVImage:(id)arg1 properties:(id)arg2 identifier:(id)arg3 imageProps:(id)arg4 completionBlock:(id /* block */)arg5;
- (id)allImageIdentifiers;
- (id)bestImageIdentifiers;
- (id)bestImageIdentifiersArray;
- (id)burstCoverSelection;
- (id)burstDocumentDirectory;
- (id)burstId;
- (id)burstLogFileName;
- (id)clusterArray;
- (id)clusterByImageIdentifier;
- (float)computeActionSelectionThreshold;
- (void)computeAllImageScores;
- (float)computeBeginningVsEndAEMatrixDiffVsAverageAdjacent;
- (float)computeCameraTravelDistance;
- (int)computeEmotion:(id)arg1;
- (void)dealloc;
- (int)dummyAnalysisCount;
- (bool)enableAnalysis;
- (bool)enableDumpYUV;
- (bool)enableFaceCore;
- (id)faceIDCounts;
- (id)findBestImage:(id)arg1 useActionScores:(bool)arg2;
- (id)imageClusterForIdentifier:(id)arg1;
- (id)initWithOptions:(id)arg1;
- (bool)isAction;
- (bool)isFaceDetectionForced;
- (bool)isPortrait;
- (int)maxNumPendingFrames;
- (void)performEmotionalRejectionOnCluster:(id)arg1;
- (void)processClusters:(bool)arg1;
- (void)selectCoverPhotoFromMultiple:(id)arg1 burstSize:(int)arg2;
- (void)setActionClassifier:(id)arg1;
- (void)setAllImageIdentifiers:(id)arg1;
- (void)setBestImageIdentifiersArray:(id)arg1;
- (void)setBurstCoverSelection:(id)arg1;
- (void)setBurstId:(id)arg1;
- (void)setBurstLogFileName:(id)arg1;
- (void)setClusterArray:(id)arg1;
- (void)setClusterByImageIdentifier:(id)arg1;
- (void)setDummyAnalysisCount:(int)arg1;
- (void)setEnableAnalysis:(bool)arg1;
- (void)setEnableDumpYUV:(bool)arg1;
- (void)setEnableFaceCore:(bool)arg1;
- (void)setFaceIDCounts:(id)arg1;
- (void)setMaxNumPendingFrames:(int)arg1;
- (void)setStatsByImageIdentifier:(id)arg1;
- (void)setTemporalOrder:(int)arg1;
- (void)setVersion:(int)arg1;
- (void)setVersionString:(id)arg1;
- (id)statsByImageIdentifier;
- (int)temporalOrder;
- (int)version;
- (id)versionString;

@end
