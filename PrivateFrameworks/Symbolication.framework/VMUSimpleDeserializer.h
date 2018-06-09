/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUSimpleDeserializer : VMUAbstractSerializer {
    void * _cache;
    NSData * _data;
}

- (void).cxx_destruct;
- (unsigned int*)_deserializeValues:(unsigned int)arg1;
- (const char *)copyDeserializedNullTerminatedBytes;
- (id)copyDeserializedString;
- (id)copyDeserializedStringWithID:(unsigned int)arg1;
- (void)dealloc;
- (unsigned int)deserialize32;
- (unsigned long long)deserialize64;
- (id)initWithData:(id)arg1;
- (void)skipFields:(unsigned int)arg1;

@end
