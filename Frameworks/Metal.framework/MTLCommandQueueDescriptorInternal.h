/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLCommandQueueDescriptorInternal : MTLCommandQueueDescriptor {
    unsigned long long  _maxCommandBufferCount;
    bool  _openGLQueue;
    unsigned long long  _qosClass;
    long long  _qosRelativePriority;
}

@property bool isOpenGLQueue;

- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)init;
- (bool)isOpenGLQueue;
- (unsigned long long)maxCommandBufferCount;
- (unsigned long long)qosClass;
- (long long)qosRelativePriority;
- (void)setIsOpenGLQueue:(bool)arg1;
- (void)setMaxCommandBufferCount:(unsigned long long)arg1;
- (void)setQosClass:(unsigned long long)arg1;
- (void)setQosRelativePriority:(long long)arg1;

@end
