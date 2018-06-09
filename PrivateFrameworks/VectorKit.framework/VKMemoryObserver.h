/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKMemoryObserver : NSObject {
    NSObject<OS_dispatch_source> * _memoryNotificationEventSource;
    SEL  _selector;
    /* Warning: unhandled struct encoding: '{_geo_weak_ptr<id>="_p"@}' */ struct _geo_weak_ptr<id> { 
        id _p; 
    }  _target;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_receivedMemoryNotification;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 taskContext:(const struct TaskContext { id x1; struct unique_ptr<geo::TaskQueue, std::__1::default_delete<geo::TaskQueue> > { struct __compressed_pair<geo::TaskQueue *, std::__1::default_delete<geo::TaskQueue> > { struct TaskQueue {} *x_1_2_1; } x_2_1_1; } x2; id x3; /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x4; in int x5; long long x6; void*x7; void*x8; void*x9; void*x10; void*x11; const void*x12; void*x13; void*x14; out SEL x15; SEL x16; void*x17; void*x18; short x19; void*x20; unsigned long long x21; void*x22; void*x23; void*x24; void*x25; void*x26; void*x27; short x28; void*x29; double x30; SEL x31; SEL x32; void*x33; void*x34; void*x35; SEL x36; SEL x37; double x38; void*x39; float x40; void*x41; void*x42; long x43; void*x44; void*x45; double x46; void*x47; long x48; void*x49; void*x50; void*x51; void*x52; void*x53; void*x54; out SEL x55; SEL x56; void*x57; void*x58; short x59; void*x60; unsigned long long x61; void*x62; void*x63; void*x64; void*x65; void*x66; void*x67; void*x68; void*x69; struct __compressed_pair<geo::TaskQueue *, std::__1::default_delete<geo::TaskQueue> > { struct TaskQueue {} *x_70_1_1; } x70; }*)arg3;
- (void)triggerMemoryNotification:(bool)arg1;

@end
