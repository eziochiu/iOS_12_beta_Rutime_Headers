/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQPProcessorFactory : NSObject

+ (int)applicationForDocumentUti:(struct __CFString { }*)arg1;
+ (struct __CFString { }*)createUtiForDocument:(struct __CFString { }*)arg1;
+ (bool)isTangierTEFDocumentUti:(struct __CFString { }*)arg1;
+ (bool)isTemplateUti:(struct __CFString { }*)arg1;
+ (struct __CFURL { }*)newEmbeddedSageUrlForTangierDocumentUrl:(struct __CFURL { }*)arg1 uti:(struct __CFString { }*)arg2 isBundle:(bool*)arg3;
+ (id)retainedProcessorForDocument:(struct __CFURL { }*)arg1 zipArchive:(id)arg2 uti:(struct __CFString { }*)arg3 outputType:(int)arg4 outputPath:(struct __CFString { }*)arg5 previewRequest:(struct __QLPreviewRequest { }*)arg6 progressiveHelper:(id)arg7;
+ (id)retainedProcessorForDocument:(struct __CFURL { }*)arg1 zipArchive:(id)arg2 uti:(struct __CFString { }*)arg3 outputType:(int)arg4 outputPath:(struct __CFString { }*)arg5 previewRequest:(struct __QLPreviewRequest { }*)arg6 progressiveHelper:(id)arg7 cryptoKey:(id)arg8;

@end
