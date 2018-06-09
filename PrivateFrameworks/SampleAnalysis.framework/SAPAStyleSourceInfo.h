/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

@interface SAPAStyleSourceInfo : NSObject {
    unsigned int  _columnNum;
    NSString * _filePath;
    unsigned long long  _length;
    unsigned int  _lineNum;
    unsigned long long  _offsetIntoTextSegment;
}

@property unsigned int columnNum;
@property (retain) NSString *filePath;
@property unsigned long long length;
@property unsigned int lineNum;
@property unsigned long long offsetIntoTextSegment;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned int x5; unsigned int x6; }*)arg1 bufferLength:(unsigned long long)arg2;

- (void).cxx_destruct;
- (bool)addSelfToBuffer:(void*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg3;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (unsigned int)columnNum;
- (id)filePath;
- (unsigned long long)length;
- (unsigned int)lineNum;
- (unsigned long long)offsetIntoTextSegment;
- (void)populateReferencesUsingBuffer:(const struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned int x5; unsigned int x6; }*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4;
- (void)setColumnNum:(unsigned int)arg1;
- (void)setFilePath:(id)arg1;
- (void)setLength:(unsigned long long)arg1;
- (void)setLineNum:(unsigned int)arg1;
- (void)setOffsetIntoTextSegment:(unsigned long long)arg1;
- (unsigned long long)sizeInBytesForSerializedVersion;

@end
