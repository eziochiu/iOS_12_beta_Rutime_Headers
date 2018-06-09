/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Jet.framework/Jet
 */

@interface JetView : UIView {
    double  _beginTime;
    unsigned int  _colorRenderBuffer;
    /* Warning: unhandled struct encoding: '{jet_context=^^?^{jet_render_mode}^{jet_framebuffer}IIII{shared_ptr<jet_fence>=^{jet_fence}^{__shared_weak_count}}{unordered_set<jet_buffer *, std::__1::hash<jet_buffer *>, std::__1::equal_to<jet_buffer *>, std::__1::allocator<jet_buffer *> >={__hash_table<jet_buffer *, std::__1::hash<jet_buffer *>, std::__1::equal_to<jet_buffer *>, std::__1::allocator<jet_buffer *> >={unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<jet_buffer *, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<jet_buffer *, void *> *> *> > >={__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<jet_buffer *, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<jet_buffer *, void *> *> *> > >=^^{__hash_node_base<std::__1::__hash_node<jet_buffer *, void *> *>}{__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<jet_buffer *, void *> *> *> >={__compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<jet_buffer *, void *> *> *> >=Q}}}}{__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<jet_buffer *, void *> *>, std::__1::allocator<std::__1::__hash_node<jet_buffer *, void *> > >={__hash_node_base<std::__1::__hash_node<jet_buffer *, void *> *>=^{__hash_node_base<std::__1::__hash_node<jet_buffer *, void *> *>}}}{__compressed_pair<unsigned long, std::__1::hash<jet_buffer *> >=Q}{__compressed_pair<float, std::__1::equal_to<jet_buffer *> >=f}}}@}' */ struct jet_context { int (**x1)(); struct jet_render_mode {} *x2; struct jet_framebuffer {} *x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; struct shared_ptr<jet_fence> { struct jet_fence {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; struct unordered_set<jet_buffer *, std::__1::hash<jet_buffer *>, std::__1::equal_to<jet_buffer *>, std::__1::allocator<jet_buffer *> > { struct __hash_table<jet_buffer *, std::__1::hash<jet_buffer *>, std::__1::equal_to<jet_buffer *>, std::__1::allocator<jet_buffer *> > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<jet_buffer *, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<jet_buffer *, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<jet_buffer *, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<jet_buffer *, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<jet_buffer *, void *> *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<jet_buffer *, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<jet_buffer *, void *> *> *> > { unsigned long long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<jet_buffer *, void *> *>, std::__1::allocator<std::__1::__hash_node<jet_buffer *, void *> > > { struct __hash_node_base<std::__1::__hash_node<jet_buffer *, void *> *> { struct __hash_node_base<std::__1::__hash_node<jet_buffer *, void *> *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; } x_9_1_1; } x9; } * _ctx;
    <MTLDevice> * _device;
    bool  _didRunOnce;
    NSTimer * _drawTimer;
    CAEAGLLayer * _eaglLayer;
    struct jet_texture { int (**x1)(); } * _frameBufferColorTexture;
    struct jet_texture { int (**x1)(); } * _frameBufferDepthStencilTexture;
    struct jet_framebuffer { int (**x1)(); struct { struct jet_texture {} *x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; } x2[4]; struct { struct jet_texture {} *x_3_1_1; float x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; } x3; struct { struct jet_texture {} *x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; unsigned int x_4_1_4; } x4; } * _framebuffer;
    EAGLContext * _glContext;
    CAMetalLayer * _metalLayer;
    struct shared_ptr<jet_fence> { 
        struct jet_fence {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _renderFence;
}

@property (readonly) struct jet_context { int (**x1)(); struct jet_render_mode {} *x2; struct jet_framebuffer {} *x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; struct shared_ptr<jet_fence> { struct jet_fence {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; /* Warning: unhandled struct encoding: '{unordered_set<jet_buffer *' */ struct x9; }*context; /* unknown property attribute:  std::__1::equal_to<jet_buffer *> >=f}}}@} */

+ (bool)canRenderToContextType:(unsigned int)arg1;
+ (Class)layerClass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_bindGLContext;
- (void)_commonInit;
- (void)_createContext;
- (void)_renderCallback;
- (void)_reshape;
- (/* Warning: unhandled struct encoding: '{jet_context=^^?^{jet_render_mode}^{jet_framebuffer}IIII{shared_ptr<jet_fence>=^{jet_fence}^{__shared_weak_count}}{unordered_set<jet_buffer *, std::__1::hash<jet_buffer *>, std::__1::equal_to<jet_buffer *>, std::__1::allocator<jet_buffer *> >={__hash_table<jet_buffer *, std::__1::hash<jet_buffer *>, std::__1::equal_to<jet_buffer *>, std::__1::allocator<jet_buffer *> >={unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<jet_buffer *, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<jet_buffer *, void *> *> *> > >={__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<jet_buffer *, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<jet_buffer *, void *> *> *> > >=^^{__hash_node_base<std::__1::__hash_node<jet_buffer *, void *> *>}{__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<jet_buffer *, void *> *> *> >={__compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<jet_buffer *, void *> *> *> >=Q}}}}{__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<jet_buffer *, void *> *>, std::__1::allocator<std::__1::__hash_node<jet_buffer *, void *> > >={__hash_node_base<std::__1::__hash_node<jet_buffer *, void *> *>=^{__hash_node_base<std::__1::__hash_node<jet_buffer *, void *> *>}}}{__compressed_pair<unsigned long, std::__1::hash<jet_buffer *> >=Q}{__compressed_pair<float, std::__1::equal_to<jet_buffer *> >=f}}}@}' */ struct jet_context { int (**x1)(); struct jet_render_mode {} *x2; struct jet_framebuffer {} *x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; struct shared_ptr<jet_fence> { struct jet_fence {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; struct unordered_set<jet_buffer *, std::__1::hash<jet_buffer *>, std::__1::equal_to<jet_buffer *>, std::__1::allocator<jet_buffer *> > { struct __hash_table<jet_buffer *, std::__1::hash<jet_buffer *>, std::__1::equal_to<jet_buffer *>, std::__1::allocator<jet_buffer *> > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<jet_buffer *, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<jet_buffer *, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<jet_buffer *, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<jet_buffer *, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<jet_buffer *, void *> *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<jet_buffer *, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<jet_buffer *, void *> *> *> > { unsigned long long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<jet_buffer *, void *> *>, std::__1::allocator<std::__1::__hash_node<jet_buffer *, void *> > > { struct __hash_node_base<std::__1::__hash_node<jet_buffer *, void *> *> { struct __hash_node_base<std::__1::__hash_node<jet_buffer *, void *> *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; } x_9_1_1; } x9; }*)context;
- (unsigned int)contextType;
- (struct jet_texture { int (**x1)(); }*)createTextureFromImageNamed:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isOpaque;
- (void)layoutSubviews;
- (void)onInit;
- (void)remakeFramebuffer;
- (void)renderInFramebuffer:(struct jet_framebuffer { int (**x1)(); struct { struct jet_texture {} *x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; } x2[4]; struct { struct jet_texture {} *x_3_1_1; float x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; } x3; struct { struct jet_texture {} *x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; unsigned int x_4_1_4; } x4; }*)arg1 forTime:(double)arg2;
- (void)runOnce;

@end
