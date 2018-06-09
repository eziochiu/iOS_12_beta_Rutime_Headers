/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXDataTableComponentSizerFactory : NSObject <SXComponentSizerFactory> {
    <SXDocumentControllerProvider> * _documentControllerProvider;
    <SXTextComponentLayoutHosting> * _textComponentLayoutHosting;
    <SXDataTableTextSourceFactory> * _textSourceFactory;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SXDocumentControllerProvider> *documentControllerProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int role;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SXTextComponentLayoutHosting> *textComponentLayoutHosting;
@property (nonatomic, readonly) <SXDataTableTextSourceFactory> *textSourceFactory;
@property (nonatomic, readonly) NSString *type;

- (void).cxx_destruct;
- (id)documentControllerProvider;
- (id)initWithDocumentControllerProvider:(id)arg1 textComponentLayoutHosting:(id)arg2 textSourceFactory:(id)arg3;
- (int)role;
- (id)sizerForComponent:(id)arg1 componentLayout:(id)arg2 layoutAttributes:(id)arg3;
- (id)textComponentLayoutHosting;
- (id)textSourceFactory;
- (id)type;

@end
