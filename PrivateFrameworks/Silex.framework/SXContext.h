/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXContext : NSObject {
    SXDocumentController * _documentController;
    <SXHost> * _host;
    <SXResourceDataSource> * _resourceDataSource;
    <SXTextContentProvider> * _textContentProvider;
}

@property (nonatomic, readonly) SXDocumentController *documentController;
@property (nonatomic, readonly) <SXHost> *host;
@property (nonatomic, readonly) <SXResourceDataSource> *resourceDataSource;
@property (nonatomic, readonly) <SXTextContentProvider> *textContentProvider;

+ (void)prewarm;

- (void).cxx_destruct;
- (id)documentController;
- (id)host;
- (id)initWithJSONData:(id)arg1 resourceDataSource:(id)arg2 host:(id)arg3 error:(id*)arg4;
- (id)resourceDataSource;
- (id)textContentProvider;

@end
