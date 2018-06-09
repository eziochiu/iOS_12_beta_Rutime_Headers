/* made by EzioChiu.
 */

@protocol MDRenderTarget <NSObject>

@required

- (struct shared_ptr<ggl::BitmapDataBase> { struct BitmapDataBase {} *x1; struct __shared_weak_count {} *x2; })bitmapData:(struct Texture { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int (**x4)(); char *x5; int x6; int x7; int x8; int x9; }*)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (double)contentScale;
- (void)createRenderTarget;
- (void)destroyRenderTarget;
- (struct RenderTarget { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int (**x4)(); char *x5; struct RenderTargetFormat { int x_6_1_1[4]; unsigned long long x_6_1_2; unsigned int x_6_1_3; int x_6_1_4; } x6; struct Texture {} *x7[4]; struct Texture {} *x8[4]; struct Texture {} *x9; unsigned int x10; unsigned int x11; bool x12; bool x13; }*)finalRenderTarget;
- (const struct RenderTargetFormat { int x1[4]; unsigned long long x2; unsigned int x3; int x4; }*)format;
- (bool)hasRenderTarget;
- (bool)multiSample;
- (<GGLRenderQueueSource> *)renderSource;
- (void)renderWithTimestamp:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 4: double, struct function<void ()>={type=[24C] {}, struct __base<void ()> {}*, /* Warning: Unrecognized filer type: '}' using 'void*' */ void*
- (struct Renderer { int (**x1)(); struct Device {} *x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; bool x6; float x7; struct vector<std::__1::shared_ptr<ggl::DebugRenderer>, geo::StdAllocator<std::__1::shared_ptr<ggl::DebugRenderer>, ggl::Allocator> > { struct shared_ptr<ggl::DebugRenderer> {} *x_8_1_1; struct shared_ptr<ggl::DebugRenderer> {} *x_8_1_2; struct __compressed_pair<std::__1::shared_ptr<ggl::DebugRenderer> *, geo::StdAllocator<std::__1::shared_ptr<ggl::DebugRenderer>, ggl::Allocator> > { struct shared_ptr<ggl::DebugRenderer> {} *x_3_2_1; struct StdAllocator<std::__1::shared_ptr<ggl::DebugRenderer>, ggl::Allocator> { struct Allocator {} *x_2_3_1; } x_3_2_2; } x_8_1_3; } x8; struct unique_ptr<ggl::RenderQueue, std::__1::default_delete<ggl::RenderQueue> > { struct __compressed_pair<ggl::RenderQueue *, std::__1::default_delete<ggl::RenderQueue> > { struct RenderQueue {} *x_1_2_1; } x_9_1_1; } x9; struct shared_ptr<ggl::CommonLibrary> { struct CommonLibrary {} *x_10_1_1; struct __shared_weak_count {} *x_10_1_2; } x10; }*)renderer;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentScale:(double)arg1;
- (void)setRenderSource:(id <GGLRenderQueueSource>)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)shouldRasterize;
- (struct CGSize { double x1; double x2; })size;
- (struct CGSize { double x1; double x2; })sizeInPixels;

@optional

- (float)averageFPS;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 toLayer:(CALayer *)arg2;
- (struct DebugConsole { }*)debugConsoleForId:(int)arg1;
- (void)didDrawView;
- (void)willDrawView;

@end
