/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DDocumentDataCache : NSObject {
    TSKDocumentRoot * mDocumentRoot;
}

+ (id)dataCacheWithDocumentRoot:(id)arg1;
+ (id)dataFromCache:(id)arg1 forFile:(id)arg2 group:(id)arg3 generateBlock:(id /* block */)arg4;

- (id)dataForFile:(id)arg1 group:(id)arg2 generateBlock:(id /* block */)arg3;
- (void)dealloc;
- (bool)debug_nukeDocumentCachePathForGroup:(id)arg1;
- (id)init;
- (id)initWithDocumentRoot:(id)arg1;

@end
