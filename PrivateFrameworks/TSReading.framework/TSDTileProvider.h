/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDTileProvider : NSObject <CALayerDelegate> {
    TSKAccessController * mAccessController;
    NSObject<OS_dispatch_queue> * mQueue;
    <NSObject> * mTarget;
    TSDTileStorage * mTileStorage;
    struct { 
        struct { 
            unsigned long long x; 
            unsigned long long y; 
        } topLeft; 
        struct { 
            unsigned long long x; 
            unsigned long long y; 
        } bottomRight; 
    }  mVisibleTileRect;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; } visibleTileRect;

- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (bool)canTargetDrawInParallel;
- (id)contentsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 contentsScale:(double)arg2 forTile:(id)arg3 atLocation:(struct { unsigned long long x1; unsigned long long x2; })arg4 takingReadLock:(bool)arg5;
- (void)dealloc;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)drawTargetInLayer:(id)arg1 context:(struct CGContext { }*)arg2;
- (void)flush;
- (id)initWithTarget:(id)arg1 queue:(id)arg2 storage:(id)arg3 accessController:(id)arg4;
- (bool)isTargetOpaque;
- (id)p_bucketKey;
- (void)provideContentsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 contentsScale:(double)arg2 forTile:(id)arg3 atLocation:(struct { unsigned long long x1; unsigned long long x2; })arg4 inGroup:(id)arg5 limitedBySemaphore:(id)arg6 takingReadLock:(bool)arg7 startBlock:(id /* block */)arg8 completionBlock:(id /* block */)arg9;
- (void)removeStoredImages;
- (void)setVisibleTileRect:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; })arg1;
- (struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; })visibleTileRect;

@end
