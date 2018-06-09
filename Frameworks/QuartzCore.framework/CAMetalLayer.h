/* made by EzioChiu
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAMetalLayer : CALayer {
    struct _CAMetalLayerPrivate { struct Atomic { struct { int x_1_2_1; } x_1_1_1; } x1; struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; struct SpinLock { struct { int x_1_2_1; } x_3_1_1; } x3; struct _CAImageQueue {} *x4; id x5; struct List<_CAMetalDrawablePrivate *> {} *x6; unsigned int x7; struct _CAMetalDrawablePrivate {} *x8; id x9; struct CGSize { double x_10_1_1; double x_10_1_2; } x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; struct Atomic { struct { int x_1_2_1; } x_15_1_1; } x15; id x16; /* Warning: Unrecognized filer type: 't' using 'void*' */ void*x17; out void*x18; int x19; BOOL x20; void*x21; struct { int x_22_1_1; } x22; } * _priv;
}

@property bool allowsNextDrawableTimeout;
@property (retain) <MTLDevice> *device;
@property (readonly) unsigned long long displayCompositingInternalStatus;
@property struct CGSize { double x1; double x2; } drawableSize;
@property bool fenceEnabled;
@property bool framebufferOnly;
@property double inputTime;
@property bool lowLatency;
@property unsigned long long maximumDrawableCount;
@property bool nonDefaultColorspace;
@property unsigned long long pixelFormat;
@property bool presentsWithTransaction;
@property bool serverSyncEnabled;
@property bool wantsExtendedDynamicRangeContent;

+ (bool)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (id)defaultValueForKey:(id)arg1;

- (void)_didCommitLayer:(struct Transaction { struct Shared {} *x1; int x2; struct HashTable<CA::Layer *, unsigned int *> {} *x3; struct SpinLock {} *x4; unsigned int x5; struct Level {} *x6; struct List<void (^)()> {} *x7; struct Command {} *x8; struct Deleted {} *x9; struct List<const void *> {} *x10; struct Context {} *x11; struct HashTable<CA::Layer *, CA::Layer *> {} *x12; struct __CFRunLoop {} *x13; struct __CFRunLoopObserver {} *x14; struct LayoutList {} *x15; struct List<CA::Layer *> {} *x16; struct Atomic { struct { int x_1_2_1; } x_17_1_1; } x17; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; }*)arg1;
- (void)_display;
- (bool)allowsNextDrawableTimeout;
- (struct CGColorSpace { }*)colorspace;
- (void)dealloc;
- (id)device;
- (void)didChangeValueForKey:(id)arg1;
- (void)discardContents;
- (unsigned long long)displayCompositingInternalStatus;
- (bool)displaySyncEnabled;
- (struct CGSize { double x1; double x2; })drawableSize;
- (bool)fenceEnabled;
- (bool)framebufferOnly;
- (id)init;
- (double)inputTime;
- (bool)isDrawableAvailable;
- (void)layerDidBecomeVisible:(bool)arg1;
- (bool)lowLatency;
- (unsigned long long)maximumDrawableCount;
- (id)newDrawable;
- (id)nextDrawable;
- (bool)nonDefaultColorspace;
- (unsigned long long)pixelFormat;
- (bool)presentsWithTransaction;
- (bool)serverSyncEnabled;
- (void)setAllowsNextDrawableTimeout:(bool)arg1;
- (void)setColorspace:(struct CGColorSpace { }*)arg1;
- (void)setColorspace:(struct CGColorSpace { }*)arg1 nonDefault:(bool)arg2;
- (void)setDevice:(id)arg1;
- (void)setDisplaySyncEnabled:(bool)arg1;
- (void)setDrawableSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setFenceEnabled:(bool)arg1;
- (void)setFramebufferOnly:(bool)arg1;
- (void)setInputTime:(double)arg1;
- (void)setLowLatency:(bool)arg1;
- (void)setMaximumDrawableCount:(unsigned long long)arg1;
- (void)setNonDefaultColorspace:(bool)arg1;
- (void)setPixelFormat:(unsigned long long)arg1;
- (void)setPresentsWithTransaction:(bool)arg1;
- (void)setServerSyncEnabled:(bool)arg1;
- (bool)shouldArchiveValueForKey:(id)arg1;

@end
