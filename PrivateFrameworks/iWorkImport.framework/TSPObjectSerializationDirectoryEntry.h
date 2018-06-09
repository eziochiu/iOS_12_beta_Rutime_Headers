/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPObjectSerializationDirectoryEntry : NSObject {
    unsigned long long  _offset;
    unsigned long long  _size;
}

@property (nonatomic, readonly) unsigned long long offset;
@property (nonatomic, readonly) unsigned long long size;

- (id)init;
- (id)initWithOffset:(unsigned long long)arg1 size:(unsigned long long)arg2;
- (unsigned long long)offset;
- (unsigned long long)size;

@end
