/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Swift/libswiftCore.dylib
 */

@interface _SwiftNativeNSIndexSetBase : NSIndexSet {
    struct RefCounts<swift::RefCountBitsT<swift::RefCountIsInline> > { 
        struct atomic<swift::RefCountBitsT<swift::RefCountIsInline> > { 
            /* Warning: Unrecognized filer type: '{' using 'void*' */ void*__a_; 
        } refCounts; 
    }  refCounts;
}

- (bool)_isDeallocating;
- (bool)_tryRetain;
- (bool)allowsWeakReference;
- (id)autorelease;
- (void)dealloc;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (bool)retainWeakReference;

@end
