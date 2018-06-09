/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXWebContentConfigurationProvider : NSObject <SXPresentationAttributesObserver, SXWebContentConfigurationProvider> {
    id /* block */  _changeBlock;
    NSLocale * _locale;
    <SXPresentationAttributesProvider> * _presentationAttributesProvider;
    <SXStoreFrontProvider> * _storeFrontProvider;
}

@property (nonatomic, copy) id /* block */ changeBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic, readonly) <SXPresentationAttributesProvider> *presentationAttributesProvider;
@property (nonatomic, readonly) <SXStoreFrontProvider> *storeFrontProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)changeBlock;
- (id)configurationForWidth:(double)arg1;
- (id)initWithPresentationAttributesProvider:(id)arg1 storeFrontProvider:(id)arg2 locale:(id)arg3;
- (void)invokeChangeListener;
- (id)locale;
- (void)onChange:(id /* block */)arg1;
- (void)presentationAttributesChangeFrom:(id)arg1 toAttributes:(id)arg2;
- (id)presentationAttributesProvider;
- (void)setChangeBlock:(id /* block */)arg1;
- (id)storeFrontProvider;

@end
