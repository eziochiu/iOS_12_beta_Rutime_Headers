/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

@interface PBMutableData : NSMutableData {
    char * buffer;
    char * end;
    char * p;
}

- (void)_pb_growCapacityBy:(unsigned long long)arg1;
- (const void*)bytes;
- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)arg1;
- (unsigned long long)length;
- (void*)mutableBytes;
- (void)setLength:(unsigned long long)arg1;

@end
