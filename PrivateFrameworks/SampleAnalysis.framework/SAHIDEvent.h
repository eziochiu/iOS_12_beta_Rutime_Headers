/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

@interface SAHIDEvent : NSObject <SASerializable> {
    SATimestamp * _hidEventTimestamp;
    unsigned int  _hidEventType;
    NSMutableArray * _steps;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) SATimestamp *hidEventTimestamp;
@property (readonly) unsigned int hidEventType;
@property (readonly) NSArray *steps;
@property (readonly) Class superclass;

+ (id)classDictionaryKey;
+ (id)hidEventWithHIDEventType:(unsigned int)arg1 atTimestamp:(id)arg2;
+ (id)hidEventWithoutReferencesFromPAStyleSerializedHIDEvent:(const struct { unsigned long long x1; double x2; unsigned long long x3; unsigned int x4; unsigned int x5; }*)arg1;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const struct { unsigned char x1; unsigned char x2; unsigned short x3; unsigned int x4; unsigned long long x5; }*)arg1 bufferLength:(unsigned long long)arg2;
+ (void)parseKTrace:(struct ktrace_session { }*)arg1 findingHIDEvents:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)addKTraceEvent:(struct trace_point { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned int x7; unsigned int x8; struct timeval { long long x_9_1_1; int x_9_1_2; } x9; char *x10; char *x11; int x12; }*)arg1 fromSession:(struct ktrace_session { }*)arg2;
- (bool)addSelfToBuffer:(struct { unsigned char x1; unsigned char x2; unsigned short x3; unsigned int x4; unsigned long long x5; }*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg3;
- (void)addSelfToSerializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg1;
- (id)debugDescription;
- (id)hidEventTimestamp;
- (unsigned int)hidEventType;
- (id)initWithHIDEventType:(unsigned int)arg1 atTimestamp:(id)arg2;
- (void)populateReferencesUsingBuffer:(const struct { unsigned char x1; unsigned char x2; unsigned short x3; unsigned int x4; unsigned long long x5; }*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg3 andDataBufferDictionary:(struct NSMutableDictionary { Class x1; }*)arg4;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (id)steps;

@end
