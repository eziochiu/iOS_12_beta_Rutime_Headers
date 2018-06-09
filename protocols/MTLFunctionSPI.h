/* made by EzioChiu.
 */

@protocol MTLFunctionSPI <MTLFunction>

@required

- (NSArray *)arguments;
- (const struct { unsigned char x1[32]; }*)bitCodeHash;
- (NSData *)bitcodeData;
- (NSString *)filePath;
- (long long)lineNumber;
- (<MTLIndirectArgumentEncoder> *)newIndirectArgumentEncoderWithBufferIndex:(unsigned long long)arg1;
- (<MTLIndirectArgumentEncoder> *)newIndirectArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id*)arg2;
- (MTLFunctionReflection *)reflectionWithOptions:(unsigned long long)arg1;
- (void)reflectionWithOptions:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MTLFunctionReflection *, void*
- (MTLType *)returnType;
- (NSString *)unpackedFilePath;

@end
