/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWRingBuffer : NSObject <NSFastEnumeration> {
    int  _inputIndex;
    int  _length;
    int  _outputIndex;
    void * _ringBuffer;
    unsigned long long  _typeSize;
}

- (void)appendElement:(void*)arg1;
- (int)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (void*)elementAtIndex:(int)arg1;
- (void*)firstElement;
- (int)firstElementIndex;
- (void)incrementRingIndex:(int*)arg1;
- (void)incrementRingIndex:(int*)arg1 withCount:(int)arg2;
- (id)initWithLength:(int)arg1 dataTypeSize:(unsigned long long)arg2;
- (void*)lastElement;
- (int)lastElementIndex;
- (int)lastElementIndexPlusOne;
- (void)removeFirstElements:(int)arg1;

@end
