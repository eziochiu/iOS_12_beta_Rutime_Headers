/* made by EzioChiu.
 */

@protocol SASerializable <NSObject>

@required

+ (NSString *)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2;

- (bool)addSelfToBuffer:(void*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg3;
- (void)addSelfToSerializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg1;
- (void)populateReferencesUsingBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg3 andDataBufferDictionary:(struct NSMutableDictionary { Class x1; }*)arg4;
- (unsigned long long)sizeInBytesForSerializedVersion;

@end
