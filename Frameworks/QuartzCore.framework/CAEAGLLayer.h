/* made by EzioChiu
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAEAGLLayer : CALayer <EAGLDrawable> {
    struct _CAEAGLNativeWindow { struct _EAGLNativeWindowObject { int x_1_1_1; unsigned int x_1_1_2; int (*x_1_1_3)(); int (*x_1_1_4)(); int (*x_1_1_5)(); int (*x_1_1_6)(); int (*x_1_1_7)(); int (*x_1_1_8)(); int (*x_1_1_9)(); } x1; void *x2; int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); struct x_list_struct {} *x7; unsigned int x8; unsigned long long x9; struct Atomic { struct { int x_1_2_1; } x_10_1_1; } x10; struct Atomic { struct { int x_1_2_1; } x_11_1_1; } x11; struct SpinLock { struct { int x_1_2_1; } x_12_1_1; } x12; struct _CAImageQueue {} *x13; id x14; struct x_list_struct {} *x15; unsigned int x16; struct CAEAGLBuffer {} *x17; struct CAEAGLBuffer {} *x18; unsigned int x19; unsigned int x20; unsigned int x21; struct CAEAGLBuffer {} *x22; id x23; /* Warning: Unrecognized filer type: 't' using 'void*' */ void*x24; out void*x25; int x26; BOOL x27; void*x28; struct { int x_29_1_1; } x29; } * _win;
}

@property (getter=isAsynchronous) bool asynchronous;
@property (copy) NSDictionary *drawableProperties;
@property double inputTime;
@property bool lowLatency;
@property unsigned long long maximumDrawableCount;
@property (readonly) struct _EAGLNativeWindowObject { int x1; unsigned int x2; int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); int (*x8)(); int (*x9)(); }*nativeWindow;
@property bool presentsWithTransaction;

+ (bool)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (id)defaultValueForKey:(id)arg1;

- (bool)_defersDidBecomeVisiblePostCommit;
- (void)_didCommitLayer:(struct Transaction { struct Shared {} *x1; int x2; struct HashTable<CA::Layer *, unsigned int *> {} *x3; struct SpinLock {} *x4; unsigned int x5; struct Level {} *x6; struct List<void (^)()> {} *x7; struct Command {} *x8; struct Deleted {} *x9; struct List<const void *> {} *x10; struct Context {} *x11; struct HashTable<CA::Layer *, CA::Layer *> {} *x12; struct __CFRunLoop {} *x13; struct __CFRunLoopObserver {} *x14; struct LayoutList {} *x15; struct List<CA::Layer *> {} *x16; struct Atomic { struct { int x_1_2_1; } x_17_1_1; } x17; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; }*)arg1;
- (void)_display;
- (void)dealloc;
- (void)didChangeValueForKey:(id)arg1;
- (void)discardContents;
- (id)drawableProperties;
- (double)inputTime;
- (bool)isAsynchronous;
- (bool)isDrawableAvailable;
- (bool)isDrawableAvailableInternal;
- (void)layerDidBecomeVisible:(bool)arg1;
- (bool)lowLatency;
- (unsigned long long)maximumDrawableCount;
- (struct _EAGLNativeWindowObject { int x1; unsigned int x2; int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); int (*x8)(); int (*x9)(); }*)nativeWindow;
- (bool)presentsWithTransaction;
- (void)setAsynchronous:(bool)arg1;
- (void)setDrawableProperties:(id)arg1;
- (void)setInputTime:(double)arg1;
- (void)setLowLatency:(bool)arg1;
- (void)setMaximumDrawableCount:(unsigned long long)arg1;
- (void)setPresentsWithTransaction:(bool)arg1;
- (bool)shouldArchiveValueForKey:(id)arg1;

@end
