/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DrawingKit.framework/DrawingKit
 */

@interface DKOpenGLRenderer : NSObject {
    void U_COLOR;
    bool  _allowWetComposite;
    double  _backingScale;
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
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    <DKOpenGLRendererDelegate> * _delegate;
    bool  _didNotifyRendererDelegate;
    bool  _drawingEnabled;
    bool  _ignoreFirstUndoItem;
    UIColor * _inkColor;
    double  _lineWidthScale;
    long long  _numPages;
    bool  _undoEnabled;
    unsigned int  mAttributes;
    int  mBufferSize;
    void mCanvasOffset;
    void mCanvasSize;
    unsigned int  mColorProg;
    int  mColorProgColorUniformLocation;
    int  mColorProgModelViewProjectionUniformLocation;
    unsigned int  mCompositeProg;
    int  mCompositeProgViewportUniformLocation;
    struct vector<Vertex, std::__1::allocator<Vertex> > { 
        struct Vertex {} *__begin_; 
        struct Vertex {} *__end_; 
        struct __compressed_pair<Vertex *, std::__1::allocator<Vertex> > { 
            struct Vertex {} *__value_; 
        } __end_cap_; 
    }  mContiguousVertexStorage;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mDirtyCanvasRegion;
    unsigned int  mDryPaintProg;
    int  mDryPaintProgXCoordOffsetUniformLocation;
    struct vector<std::__1::pair<float __attribute__((ext_vector_type(2))), float __attribute__((ext_vector_type(2)))>, std::__1::allocator<std::__1::pair<float __attribute__((ext_vector_type(2))), float __attribute__((ext_vector_type(2)))> > >="__begin_"^{pair<float __attribute__((ext_vector_type(2))), float __attribute__((ext_vector_type(2)))> {}  mNonCollisionSegments;
    struct vector<Page, std::__1::allocator<Page> > { 
        struct Page {} *__begin_; 
        struct Page {} *__end_; 
        struct __compressed_pair<Page *, std::__1::allocator<Page> > { 
            struct Page {} *__value_; 
        } __end_cap_; 
    }  mPages;
    unsigned int  mPaperTex;
    float  mParticleLifespan;
    unsigned int  mTextureProg;
    int  mTextureProgModelViewProjectionUniformLocation;
    float  mTime;
    float  mTimeWetBecameDirty;
    unsigned int  mVbo;
    struct vector<VertexGroup, std::__1::allocator<VertexGroup> > { 
        struct VertexGroup {} *__begin_; 
        struct VertexGroup {} *__end_; 
        struct __compressed_pair<VertexGroup *, std::__1::allocator<VertexGroup> > { 
            struct VertexGroup {} *__value_; 
        } __end_cap_; 
    }  mVertexHistory;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  mVertexRange;
    unsigned int  mWetPaintBufferFBO;
    void mWetPaintBufferSize;
    unsigned int  mWetPaintBufferT;
    unsigned int  mWetPaintProg;
    int  mWetPaintProgLifespanUniformLocation;
    int  mWetPaintProgSubtractEndPointsOnlyUniformLocation;
    int  mWetPaintProgTimeUniformLocation;
    void mWinSize;
}

@property (nonatomic) bool allowWetComposite;
@property (nonatomic) double backingScale;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic) <DKOpenGLRendererDelegate> *delegate;
@property (nonatomic) bool drawingEnabled;
@property (nonatomic) bool ignoreFirstUndoItem;
@property (nonatomic, retain) UIColor *inkColor;
@property (nonatomic) double lineWidthScale;
@property (nonatomic) long long numPages;
@property (getter=isUndoEnabled, nonatomic) bool undoEnabled;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addPoints:(id)arg1 withSegmentLength:(unsigned long long)arg2;
- (bool)allowWetComposite;
- (void)appendVertexHistoryElement;
- (double)backingScale;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (bool)canvasIsEmpty;
- (void)clear;
- (void)clearComposite;
- (void)clearDryPaintBuffer;
- (void)clearWetPaintBuffer;
- (struct CGSize { double x1; double x2; })contentSize;
- (void)dealloc;
- (id)delegate;
- (void)destroyFrameBuffers;
- (bool)detectCollision;
- (void)didBeginNewStroke;
- (void)didCompleteStroke;
- (void)didResize;
- (void)draw;
- (void)drawComposite;
- (void)drawContiguousVertexStorageImmediatelyWithLayeredBlending:(bool)arg1;
- (bool)drawingEnabled;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })getVertexBounds;
- (bool)ignoreFirstUndoItem;
- (id)init;
- (bool)initGL;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 scale:(double)arg2;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 scale:(double)arg2 bufferSize:(int)arg3;
- (void)initializeFrameBuffers;
- (id)inkColor;
- (bool)isUndoEnabled;
- (double)lineWidthScale;
- (long long)numPages;
- (void)redrawEntireDrawingImmediatelyWithLayeredBlending:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })regionWithVertices:(struct vector<Vertex, std::__1::allocator<Vertex> > { struct Vertex {} *x1; struct Vertex {} *x2; struct __compressed_pair<Vertex *, std::__1::allocator<Vertex> > { struct Vertex {} *x_3_1_1; } x3; })arg1 withInflationAmount:(float)arg2;
- (void)removeVertexHistoryElement;
- (void)renderToComposite:(bool)arg1;
- (void)renderToDryPaintBuffer;
- (void)renderToWetPaintBufferWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)resetRendererState;
- (void)setAllowWetComposite:(bool)arg1;
- (void)setBackingScale:(double)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setDrawingEnabled:(bool)arg1;
- (void)setIgnoreFirstUndoItem:(bool)arg1;
- (void)setInkColor:(id)arg1;
- (void)setLineWidthScale:(double)arg1;
- (void)setNumPages:(long long)arg1;
- (void)setUndoEnabled:(bool)arg1;
- (id)snapshot;
- (void)teardown;
- (void)undo;
- (void)update;
- (void)updateDryCycleIncludingComposite:(bool)arg1;
- (void)updateDryForcefully;
- (void)updateVertexControllerWithData:(struct vector<Vertex, std::__1::allocator<Vertex> > { struct Vertex {} *x1; struct Vertex {} *x2; struct __compressed_pair<Vertex *, std::__1::allocator<Vertex> > { struct Vertex {} *x_3_1_1; } x3; })arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 allowWet:(bool)arg3;
- (void)updateVertexControllerWithDataRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 allowWet:(bool)arg2;
- (void)updateWet;

@end
