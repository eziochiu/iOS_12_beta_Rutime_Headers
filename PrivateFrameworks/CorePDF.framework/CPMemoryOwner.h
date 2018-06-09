/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPMemoryOwner : NSObject <CPDisposable> {
    void * memory;
}

- (void)dealloc;
- (void)dispose;
- (void)finalize;
- (id)initWithAllocatedMemory:(void*)arg1;

@end
