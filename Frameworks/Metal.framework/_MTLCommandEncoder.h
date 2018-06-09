/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface _MTLCommandEncoder : NSObject {
    _MTLCommandBuffer<MTLCommandBuffer> * _commandBuffer;
    <MTLDevice> * _device;
    unsigned long long  _globalTraceObjectID;
    NSString * _label;
    unsigned long long  _labelTraceID;
    unsigned long long  _numThisEncoder;
}

@property (nonatomic, readonly) <MTLDevice> *device;
@property (readonly) unsigned long long dispatchType;
@property (getter=globalTraceObjectID, nonatomic) unsigned long long globalTraceObjectID;
@property (copy) NSString *label;
@property (nonatomic) unsigned long long numThisEncoder;
@property (getter=getType, nonatomic, readonly) unsigned long long type;

- (id)commandBuffer;
- (void)dealloc;
- (id)description;
- (id)device;
- (unsigned long long)dispatchType;
- (void)endEncoding;
- (void)filterCounterRangeWithFirstBatch:(unsigned int)arg1 lastBatch:(unsigned int)arg2 filterIndex:(unsigned int)arg3;
- (id)formattedDescription:(unsigned long long)arg1;
- (unsigned long long)getType;
- (unsigned long long)globalTraceObjectID;
- (id)initWithCommandBuffer:(id)arg1;
- (void)insertDebugSignpost:(id)arg1;
- (id)label;
- (void)memoryBarrierNotificationWithResources:(const id*)arg1 count:(unsigned long long)arg2;
- (void)memoryBarrierNotificationWithScope:(unsigned long long)arg1;
- (unsigned long long)numThisEncoder;
- (void)popDebugGroup;
- (void)pushDebugGroup:(id)arg1;
- (void)setGlobalTraceObjectID:(unsigned long long)arg1;
- (void)setLabel:(id)arg1;
- (void)setNumThisEncoder:(unsigned long long)arg1;

@end
