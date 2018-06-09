/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PSMain : NSObject

- (void)addEmitter:(id)arg1;
- (void)addReplicator:(id)arg1;
- (void)applicationDidFinishLaunching;
- (bool)canAddEmitterToDoc:(struct OZDocument { int (**x1)(); int (**x2)(); struct PCSafeHandle {} *x3; struct OZScene {} *x4; struct PCString { struct __CFString {} *x_5_1_1; } x5; struct list<OZObjectSelections *, std::__1::allocator<OZObjectSelections *> > { struct __list_node_base<OZObjectSelections *, void *> { struct __list_node_base<OZObjectSelections *, void *> {} *x_1_2_1; struct __list_node_base<OZObjectSelections *, void *> {} *x_1_2_2; } x_6_1_1; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<OZObjectSelections *, void *> > > { unsigned long long x_2_2_1; } x_6_1_2; } x6; struct vector<OZChannelRef, std::__1::allocator<OZChannelRef> > { struct OZChannelRef {} *x_7_1_1; struct OZChannelRef {} *x_7_1_2; struct __compressed_pair<OZChannelRef *, std::__1::allocator<OZChannelRef> > { struct OZChannelRef {} *x_3_2_1; } x_7_1_3; } x7; struct PCString { struct __CFString {} *x_8_1_1; } x8; unsigned int x9; bool x10; bool x11; unsigned int x12; bool x13; int x14; struct PCString { struct __CFString {} *x_15_1_1; } x15; }*)arg1;
- (id)init;
- (void)setupEmitter:(struct PSEmitter { int (**x1)(); struct PCRecursiveMutex { int (**x_2_1_1)(); struct _opaque_pthread_mutex_t { long long x_2_2_1; BOOL x_2_2_2[56]; } x_2_1_2; } x2; struct OZLockingGroupMutex { int (**x_3_1_1)(); struct _opaque_pthread_mutex_t { long long x_2_2_1; BOOL x_2_2_2[56]; } x_3_1_2; struct OZLocking {} *x_3_1_3; struct OZLockingGroup {} *x_3_1_4; bool x_3_1_5; } x3; int (**x4)(); struct OZFactory {} *x5; int (**x6)(); struct PCSafeHandle {} *x7; struct PCHash128 { unsigned int x_8_1_1[4]; } x8; int (**x9)(); struct OZChannelSceneNode { int (**x_10_1_1)(); struct OZFactory {} *x_10_1_2; int (**x_10_1_3)(); unsigned int x_10_1_4; struct PCString { struct __CFString {} *x_5_2_1; } x_10_1_5; struct PCString {} *x_10_1_6; struct OZChannelFolder {} *x_10_1_7; unsigned long long x_10_1_8; unsigned long long x_10_1_9; void *x_10_1_10; struct __CFString {} *x_10_1_11; struct __CFString {} *x_10_1_12; struct __CFString {} *x_10_1_13; struct OZChannelTimeConverter {} *x_10_1_14; struct vector<OZChannelBase *, std::__1::allocator<OZChannelBase *> > {} *x_10_1_15; unsigned int x_10_1_16; unsigned int x_10_1_17; struct FigTime { struct { long long x_1_3_1; int x_1_3_2; unsigned int x_1_3_3; long long x_1_3_4; } x_18_2_1; } x_10_1_18; struct PCTimeRange { struct FigTime { struct { long long x_1_4_1; int x_1_4_2; unsigned int x_1_4_3; long long x_1_4_4; } x_1_3_1; } x_19_2_1; struct FigTime { struct { long long x_1_4_1; int x_1_4_2; unsigned int x_1_4_3; long long x_1_4_4; } x_2_3_1; } x_19_2_2; } x_10_1_19; bool x_10_1_20; bool x_10_1_21; struct OZObjectManipulator {} *x_10_1_22; } x10; }*)arg1 inDoc:(struct OZDocument { int (**x1)(); int (**x2)(); struct PCSafeHandle {} *x3; struct OZScene {} *x4; struct PCString { struct __CFString {} *x_5_1_1; } x5; struct list<OZObjectSelections *, std::__1::allocator<OZObjectSelections *> > { struct __list_node_base<OZObjectSelections *, void *> { struct __list_node_base<OZObjectSelections *, void *> {} *x_1_2_1; struct __list_node_base<OZObjectSelections *, void *> {} *x_1_2_2; } x_6_1_1; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<OZObjectSelections *, void *> > > { unsigned long long x_2_2_1; } x_6_1_2; } x6; struct vector<OZChannelRef, std::__1::allocator<OZChannelRef> > { struct OZChannelRef {} *x_7_1_1; struct OZChannelRef {} *x_7_1_2; struct __compressed_pair<OZChannelRef *, std::__1::allocator<OZChannelRef> > { struct OZChannelRef {} *x_3_2_1; } x_7_1_3; } x7; struct PCString { struct __CFString {} *x_8_1_1; } x8; unsigned int x9; bool x10; bool x11; unsigned int x12; bool x13; int x14; struct PCString { struct __CFString {} *x_15_1_1; } x15; }*)arg2;
- (bool)validateAction:(SEL)arg1;

@end
