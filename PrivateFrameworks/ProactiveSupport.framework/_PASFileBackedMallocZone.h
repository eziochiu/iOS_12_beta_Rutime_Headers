/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

@interface _PASFileBackedMallocZone : NSObject

+ (bool)_allocatorForFileBackedMappingWithHeapSize:(unsigned long long)arg1 context:(struct { struct _PASBuddyAllocator {} *x1; void *x2; unsigned long long x3; void *x4; struct atomic_flag { bool x_5_1_1; } x5; }*)arg2 error:(id*)arg3;
+ (struct _malloc_zone_t { void *x1; void *x2; int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); int (*x8)(); int (*x9)(); char *x10; int (*x11)(); int (*x12)(); struct malloc_introspection_t {} *x13; unsigned int x14; int (*x15)(); int (*x16)(); int (*x17)(); int (*x18)(); }*)mallocZoneWithFixedSize:(unsigned long long)arg1 error:(id*)arg2;

@end
