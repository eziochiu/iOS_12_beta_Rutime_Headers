/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXBannerAdComponentSizerFactory : NSObject <SXComponentSizerFactory> {
    <SXAdControllerProvider> * _adControllerProvider;
    <SXDocumentControllerProvider> * _documentControllerProvider;
}

@property (nonatomic, readonly) <SXAdControllerProvider> *adControllerProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SXDocumentControllerProvider> *documentControllerProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int role;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *type;

- (void).cxx_destruct;
- (id)adControllerProvider;
- (id)documentControllerProvider;
- (id)initWithDocumentControllerProvider:(id)arg1 adControllerProvider:(id)arg2;
- (int)role;
- (id)sizerForComponent:(id)arg1 componentLayout:(id)arg2 layoutAttributes:(id)arg3;
- (id)type;

@end
