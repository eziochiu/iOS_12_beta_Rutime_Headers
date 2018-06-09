/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PVPanAndZoomManager : NSObject {
    int  _clipTransformInitialStartOffset;
    struct CGSize { 
        double width; 
        double height; 
    }  _destSize;
    bool  _keyframeTransforms;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastTransformAnimationTime;
    double  _maxScale;
    struct CGSize { 
        double width; 
        double height; 
    }  _mediaSize;
    int  _mediaStartOffset;
    double  _minScale;
    int  _pendingTransformCount;
    double  _scaleWhileSnapped;
    bool  _skipFirstSnapToEdge;
    NSTimer * _snapToEdgeTimer;
    int  _timeScale;
    NSMutableArray * _transforms;
    bool  _verticalMedia;
    struct PVTransformAnimationInfo { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } time; 
        struct CGPoint { 
            double x; 
            double y; 
        } translation; 
        double scale; 
        double rotation; 
    }  _workingTransformPan;
    struct PVTransformAnimationInfo { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } time; 
        struct CGPoint { 
            double x; 
            double y; 
        } translation; 
        double scale; 
        double rotation; 
    }  _workingTransformRotate;
    struct PVTransformAnimationInfo { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } time; 
        struct CGPoint { 
            double x; 
            double y; 
        } translation; 
        double scale; 
        double rotation; 
    }  _workingTransformScale;
}

@property (nonatomic) int clipTransformInitialStartOffset;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)applyTransform:(struct PVTransformAnimationInfo { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; }*)arg1 shouldCommit:(bool)arg2 outTransform:(id*)arg3;
- (void)beginEditingTransform:(id)arg1 mediaSize:(struct CGSize { double x1; double x2; })arg2 viewSize:(struct CGSize { double x1; double x2; })arg3 atTime:(int)arg4 keyframeTransforms:(bool)arg5 mediaStartOffset:(int)arg6 timeScale:(int)arg7 transformType:(int)arg8;
- (int)clipTransformInitialStartOffset;
- (void)endEditingTransform:(id)arg1 transformType:(int)arg2 outTransform:(id*)arg3;
- (id)init;
- (bool)isEditingTransform;
- (double)maximumX:(double)arg1 scale:(double)arg2;
- (double)maximumY:(double)arg1 scale:(double)arg2;
- (void)panWithDelta:(struct CGPoint { double x1; double x2; })arg1 time:(int)arg2 outTransform:(id*)arg3;
- (void)prepareClipForScale:(struct CGSize { double x1; double x2; })arg1 destSize:(struct CGSize { double x1; double x2; })arg2;
- (void)rotateWithDelta:(double)arg1 location:(struct CGPoint { double x1; double x2; })arg2 time:(int)arg3 outTransform:(id*)arg4;
- (id)scaleClip:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 time:(int)arg3 atLocation:(struct CGPoint { double x1; double x2; })arg4;
- (void)scaleWithDelta:(double)arg1 location:(struct CGPoint { double x1; double x2; })arg2 time:(int)arg3 outTransform:(id*)arg4;
- (void)setClipTransformInitialStartOffset:(int)arg1;
- (void)snapToEdgeEnd:(id)arg1;
- (bool)tooMuchX:(double)arg1 scale:(double)arg2;
- (bool)tooMuchY:(double)arg1 scale:(double)arg2;
- (void)updateTransform:(id)arg1 location:(struct CGPoint { double x1; double x2; })arg2 atTime:(int)arg3 delta:(struct CGPoint { double x1; double x2; })arg4 transformType:(int)arg5 outTransform:(id*)arg6;
- (void)updateTransformScale:(id)arg1 mediaSize:(struct CGSize { double x1; double x2; })arg2 viewSize:(struct CGSize { double x1; double x2; })arg3 location:(struct CGPoint { double x1; double x2; })arg4 outTransform:(id*)arg5;

@end
