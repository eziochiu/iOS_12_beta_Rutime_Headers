/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSConcreteMutableData : NSMutableData {
    void * _bytes;
    unsigned long long  _capacity;
    unsigned int  _hasVM;
    unsigned long long  _length;
    unsigned int  _needToZero;
    unsigned int  _reserved;
    unsigned int  _retainCount;
}

- (void)_freeBytes;
- (bool)_providesConcreteBacking;
- (void)appendBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (void)appendData:(id)arg1;
- (const void*)bytes;
- (void)dealloc;
- (void)increaseLengthBy:(unsigned long long)arg1;
- (id)init;
- (id)initWithBytes:(void*)arg1 length:(unsigned long long)arg2 copy:(bool)arg3 deallocator:(id /* block */)arg4;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithLength:(unsigned long long)arg1;
- (unsigned long long)length;
- (void*)mutableBytes;
- (void)replaceBytesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withBytes:(const void*)arg2;
- (void)resetBytesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setLength:(unsigned long long)arg1;

@end
