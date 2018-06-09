/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXQuickLookComponentFileProvider : NSObject <SXQuickLookComponentFileProvider> {
    SXDocumentController * _documentController;
    <SXResourceDataSource> * _resourceDataSource;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) SXDocumentController *documentController;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXResourceDataSource> *resourceDataSource;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyFileIfNeeded:(id)arg1 to:(id)arg2 error:(id*)arg3;
- (id)documentController;
- (void)fileForComponent:(id)arg1 onCompletion:(id /* block */)arg2 onError:(id /* block */)arg3;
- (id)initWithDocumentController:(id)arg1 resourceDataSource:(id)arg2;
- (id)resourceDataSource;

@end
