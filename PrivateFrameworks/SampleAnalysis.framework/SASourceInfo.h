/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

@interface SASourceInfo : NSObject {
    unsigned int  _columnNum;
    NSString * _filePath;
    unsigned long long  _length;
    unsigned int  _lineNum;
    unsigned long long  _offsetIntoTextSegment;
}

@property (readonly) unsigned int columnNum;
@property (readonly) NSString *fileName;
@property (readonly) NSString *filePath;
@property (readonly) unsigned long long length;
@property (readonly) unsigned int lineNum;
@property (readonly) unsigned long long offsetIntoTextSegment;

+ (id)sourceInfoWithCSSourceInfo:(struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })arg1 textSegmentLoadAddress:(unsigned long long)arg2;
+ (id)sourceInfoWithOffsetIntoTextSegment:(unsigned long long)arg1 length:(unsigned long long)arg2 lineNum:(unsigned int)arg3 columnNum:(unsigned int)arg4 filePath:(id)arg5;

- (void).cxx_destruct;
- (unsigned int)columnNum;
- (id)debugDescription;
- (id)fileName;
- (id)filePath;
- (unsigned long long)length;
- (unsigned int)lineNum;
- (unsigned long long)offsetIntoTextSegment;

@end
