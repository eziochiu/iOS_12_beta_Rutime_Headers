/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQPSLProcessor : GQPProcessor {
    Class  mGenerator;
}

- (Class)generator;
- (bool)go;
- (id)initWithURL:(struct __CFURL { }*)arg1 indexFileName:(id)arg2 outputType:(int)arg3 outputPath:(struct __CFString { }*)arg4 previewRequest:(struct __QLPreviewRequest { }*)arg5 progressiveHelper:(id)arg6 generator:(Class)arg7 zipArchive:(id)arg8 cryptoKey:(id)arg9;
- (id)initWithURL:(struct __CFURL { }*)arg1 zipArchive:(id)arg2 indexFileName:(id)arg3 outputType:(int)arg4 outputPath:(struct __CFString { }*)arg5 previewRequest:(struct __QLPreviewRequest { }*)arg6 progressiveHelper:(id)arg7 generator:(Class)arg8 cryptoKey:(id)arg9;
- (void)pushInitialState;

@end