/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCALayerPromise : PXObservable <CALayerDelegate, PXMutableCALayerPromise> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    double  _contentsScale;
    CALayer * _layer;
    bool  _rendersAsynchronously;
    bool  _shouldCancel;
    bool  _startedLayerRealization;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic, readonly) double contentsScale;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (setter=_setLayer:, nonatomic, retain) CALayer *layer;
@property (nonatomic, readonly) bool rendersAsynchronously;
@property (nonatomic, readonly) bool shouldCancel;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handlePreparedLayer:(id)arg1;
- (void)_realizeLayer;
- (void)_setLayer:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (void)cancelLayerRealization;
- (double)contentsScale;
- (id)createCustomLayer;
- (void)dealloc;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)drawLayerContentInContext:(struct CGContext { }*)arg1;
- (id)init;
- (void)invalidateLayer;
- (id)layer;
- (id)mutableChangeObject;
- (void)performChanges:(id /* block */)arg1;
- (bool)rendersAsynchronously;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentsScale:(double)arg1;
- (void)setRendersAsynchronously:(bool)arg1;
- (bool)shouldCancel;
- (void)startLayerRealization;

@end
