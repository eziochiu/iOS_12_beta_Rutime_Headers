/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

@interface SAFanSpeed : NSObject <SASerializable> {
    int  _fanSpeed;
    SATimestamp * _timestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) int fanSpeed;
@property (readonly) bool fanSpeedIsValid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) SATimestamp *timestamp;

+ (id)classDictionaryKey;
+ (id)fanSpeedWithPAStyleSerializedFanSpeed:(const struct { unsigned long long x1; double x2; int x3; }*)arg1;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const struct { unsigned char x1; unsigned char x2; int x3; unsigned long long x4; }*)arg1 bufferLength:(unsigned long long)arg2;
+ (int)numFans;

- (void).cxx_destruct;
- (bool)addSelfToBuffer:(struct { unsigned char x1; unsigned char x2; int x3; unsigned long long x4; }*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg3;
- (void)addSelfToSerializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg1;
- (int)fanSpeed;
- (bool)fanSpeedIsValid;
- (id)init;
- (id)initEmpty;
- (id)initWithTimestamp:(id)arg1;
- (void)populateReferencesUsingBuffer:(struct { unsigned char x1; unsigned char x2; int x3; unsigned long long x4; }*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg3 andDataBufferDictionary:(struct NSMutableDictionary { Class x1; }*)arg4;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (id)timestamp;

@end
