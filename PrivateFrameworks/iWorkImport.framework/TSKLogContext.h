/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKLogContext : NSObject <TSULogContext> {
    <TSKDocumentRootDelegate> * _document;
    <TSKDocumentInfo> * _documentInfo;
    TSKDocumentRoot * _documentRoot;
    NSURL * _url;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <TSKDocumentRootDelegate> *document;
@property (nonatomic, readonly) <TSKDocumentInfo> *documentInfo;
@property (nonatomic, readonly) TSKDocumentRoot *documentRoot;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *privateString;
@property (readonly) NSString *publicString;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSURL *url;

+ (id)logContextWithDocumentInfo:(id)arg1 documentRoot:(id)arg2 document:(id)arg3;
+ (id)logContextWithURL:(id)arg1;

- (void).cxx_destruct;
- (id)document;
- (id)documentInfo;
- (id)documentRoot;
- (id)initWithDocumentInfo:(id)arg1 documentRoot:(id)arg2 document:(id)arg3 url:(id)arg4 logContext:(id)arg5;
- (id)p_documentRootDelegate;
- (id)privateString;
- (id)publicString;
- (id)url;

@end
