/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

@interface TSUCFSetEnumerator : NSObject <NSFastEnumeration> {
    long long  mCount;
    long long  mIndex;
    void * mInlineObjects;
    const void ** mObjects;
}

- (id)allObjects;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (id)initWithCFSet:(struct __CFSet { }*)arg1;
- (id)nextObject;

@end
