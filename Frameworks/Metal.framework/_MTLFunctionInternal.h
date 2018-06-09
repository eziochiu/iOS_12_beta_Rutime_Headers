/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface _MTLFunctionInternal : _MTLFunction {
    NSString * _filePath;
    struct MTLFunctionData { 
        unsigned long long bitCodeOffset; 
        unsigned long long bitCodeFileSize; 
        unsigned long long publicArgumentsOffset; 
        unsigned long long privateArgumentsOffset; 
        unsigned long long sourceArchiveOffset; 
        unsigned short airMajorVersion; 
        unsigned short airMinorVersion; 
        unsigned short languageMajorVersion; 
        unsigned short languageMinorVersion; 
        struct { 
            unsigned char key[32]; 
        } bitcodeHash; 
        unsigned char bitcodeType; 
        unsigned int patchType : 2; 
        unsigned int controlPointCount : 6; 
        NSObject<OS_dispatch_data> *functionInputs; 
    }  _functionData;
    long long  _lineNumber;
    unsigned char  _privateMetadataInitialized;
    struct MTLProgramObject { struct VariantList<4> { struct Chunk { struct VariantEntry { char *x_1_3_1; unsigned long long x_1_3_2; unsigned long long x_1_3_3; unsigned long long x_1_3_4; id x_1_3_5; unsigned long long x_1_3_6; id x_1_3_7; /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_3_8; struct Chunk {} *x_1_3_9; } x_1_2_1[4]; } x_1_1_1; } x1; } * _programObject;
    unsigned char  _publicMetadataInitialized;
    unsigned char  _sourceArchiveMetadataInitialized;
}

- (id).cxx_construct;
- (id)arguments;
- (unsigned long long)bitCodeFileSize;
- (const struct { unsigned char x1[32]; }*)bitCodeHash;
- (unsigned long long)bitCodeOffset;
- (unsigned char)bitcodeType;
- (void)dealloc;
- (id)filePath;
- (id)functionConstants;
- (id)functionConstantsDictionary;
- (const /* Warning: unhandled struct encoding: '{MTLFunctionData=QQQQQSSSS{?=[32C]}Cb2b6@}' */ struct MTLFunctionData { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; struct { unsigned char x_10_1_1[32]; } x10; unsigned char x11; unsigned int x12 : 2; unsigned int x13 : 6; id x14; }*)functionData;
- (id)functionInputs;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 libraryData:(struct MTLLibraryData { int (**x1)(); int x2; id x3; }*)arg3 functionData:(/* Warning: unhandled struct encoding: '{MTLFunctionData=QQQQQSSSS{?=[32C]}Cb2b6@}' */ struct MTLFunctionData { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; struct { unsigned char x_10_1_1[32]; } x10; unsigned char x11; unsigned int x12 : 2; unsigned int x13 : 6; id x14; }*)arg4 device:(id)arg5;
- (void)initializePrivateMetadata;
- (void)initializePublicMetadata;
- (void)initializeSourceArchive;
- (long long)lineNumber;
- (bool)needsFunctionConstantValues;
- (id)newSpecializedFunctionWithRequestType:(int)arg1 llvmTargetVersion:(unsigned int)arg2 constants:(id)arg3 functionCache:(id)arg4 error:(id*)arg5;
- (void)newSpecializedFunctionWithRequestType:(int)arg1 llvmTargetVersion:(unsigned int)arg2 constants:(id)arg3 functionCache:(id)arg4 sync:(bool)arg5 completionHandler:(id /* block */)arg6;
- (long long)patchControlPointCount;
- (unsigned long long)patchType;
- (struct MTLProgramObject { struct VariantList<4> { struct Chunk { struct VariantEntry { char *x_1_3_1; unsigned long long x_1_3_2; unsigned long long x_1_3_3; unsigned long long x_1_3_4; id x_1_3_5; unsigned long long x_1_3_6; id x_1_3_7; /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_3_8; struct Chunk {} *x_1_3_9; } x_1_2_1[4]; } x_1_1_1; } x1; }*)programObject;
- (id)returnType;
- (void)setArguments:(id)arg1;
- (void)setFilePath:(id)arg1;
- (void)setFunctionConstants:(id)arg1;
- (void)setLineNumber:(long long)arg1;
- (void)setReturnType:(id)arg1;
- (void)setSourceArchiveOffset:(unsigned long long)arg1;
- (void)setStageInputAttributes:(id)arg1;
- (void)setUnpackedFilePath:(id)arg1;
- (void)setVertexAttributes:(id)arg1;
- (unsigned long long)sourceArchiveOffset;
- (id)stageInputAttributes;
- (id)unpackedFilePath;
- (id)vertexAttributes;

@end
