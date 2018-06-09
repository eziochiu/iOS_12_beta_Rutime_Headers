/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PVInstructionGraphImageSourceNode : PVInstructionGraphSourceNode <NSCacheDelegate> {
    <PVImageDelegate> * _imageDelegate;
    NSString * _key;
    int  _renderingIntent;
    NSURL * _url;
    bool  _useAnimationInfo;
    struct CachedImageInfo { 
        bool cached; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
        bool imageExists; 
        PVInstructionGraphImageSourceNode *_source; 
        struct HGSynchronizable {} *_lock; 
    }  m_cachedImageInfo;
    struct HGRef<PVRenderManager> { 
        struct PVRenderManager {} *m_Obj; 
    }  m_renderManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <PVImageDelegate> *imageDelegate;
@property (nonatomic, retain) NSString *key;
@property (nonatomic) int renderingIntent;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSURL *url;
@property (nonatomic) bool useAnimationInfo;

+ (void)purgeBitmapCache:(bool)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (void)dealloc;
- (id)dotTreeLabel:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext {} *x1; })arg1;
- (id)imageDelegate;
- (id)initWithURL:(id)arg1 animation:(id)arg2 isExporting:(bool)arg3 imageDelegate:(id)arg4 renderingIntent:(int)arg5;
- (id)initWithURL:(id)arg1 key:(id)arg2 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 isExporting:(bool)arg4 imageDelegate:(id)arg5 renderingIntent:(int)arg6;
- (struct PCRect<double> { double x1; double x2; double x3; double x4; })inputSizeForPVEffect:(id)arg1 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext {} *x1; })arg2;
- (id)instructionGraphNodeDescription;
- (struct HGRef<HGNode> { struct HGNode {} *x1; })internalHGNodeForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 trackInputs:(const struct PVInputHGNodeMap<PVInstructionGraphSourceNode *> { }*)arg2 renderer:(const struct HGRef<HGRenderer> { }*)arg3 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext {} *x1; })arg4;
- (id)key;
- (void)loadIGNode:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext {} *x1; })arg1 returnLoadedEffects:(id)arg2;
- (id)newCVPixelBufferCacheItemForImage:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext {} *x1; })arg1;
- (struct PCMatrix44Tmpl<double> { double x1[4][4]; })pixelTransformForPVEffect:(id)arg1 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext {} *x1; })arg2;
- (int)renderingIntent;
- (void)setImageDelegate:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setRenderingIntent:(int)arg1;
- (void)setUrl:(id)arg1;
- (void)setUseAnimationInfo:(bool)arg1;
- (id)url;
- (bool)useAnimationInfo;

@end
