/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

@interface PAAggregatedInstruction : PACountedFrame {
    NSUUID * _binaryUuid;
    NSMutableSet * _children;
    unsigned long long  _offsetInBinary;
}

@property (readonly) NSUUID *binaryUuid;
@property (retain) NSMutableSet *children;
@property (readonly) bool isKernel;
@property (readonly) unsigned long long offsetInBinary;

- (void).cxx_destruct;
- (id)binaryUuid;
- (id)children;
- (long long)compare:(id)arg1;
- (unsigned long long)hash;
- (id)initWithUUID:(id)arg1 andOffset:(unsigned long long)arg2 isKernel:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isKernel;
- (unsigned long long)offsetInBinary;
- (void)setChildren:(id)arg1;

@end
