/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _PFEvanescentData : NSData {
    const void * _activeMap;
    NSURL * _fileURL;
    unsigned long long  _length;
    int  _mapRefCount;
    int  _openfd;
}

@property (readonly) const void*mapping;
@property (readonly, copy) NSURL *url;

- (void)_closeMapping;
- (void)_destroyMapping;
- (const void*)_openMapping;
- (const void*)bytes;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)enumerateByteRangesUsingBlock:(id /* block */)arg1;
- (void)getBytes:(void*)arg1;
- (void)getBytes:(void*)arg1 length:(unsigned long long)arg2;
- (void)getBytes:(void*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)hash;
- (id)initWithPath:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void)invalidate;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToData:(id)arg1;
- (unsigned long long)length;
- (const void*)mapping;
- (id)subdataWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)url;

@end
