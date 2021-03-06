/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXEmbedComponentSizerFactory : NSObject <SXComponentSizerFactory> {
    <SXDocumentControllerProvider> * _documentControllerProvider;
    <SXEmbedService> * _embedService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SXDocumentControllerProvider> *documentControllerProvider;
@property (nonatomic, readonly) <SXEmbedService> *embedService;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int role;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *type;

- (void).cxx_destruct;
- (id)documentControllerProvider;
- (id)embedService;
- (id)initWithDocumentControllerProvider:(id)arg1 embedService:(id)arg2;
- (int)role;
- (id)sizerForComponent:(id)arg1 componentLayout:(id)arg2 layoutAttributes:(id)arg3;
- (id)type;

@end
