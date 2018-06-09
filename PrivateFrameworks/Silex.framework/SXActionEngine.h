/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXActionEngine : NSObject <SXActionProvider> {
    NSMutableDictionary * _additionFactories;
    NSMutableDictionary * _hostNameFactories;
}

@property (nonatomic, readonly) NSMutableDictionary *additionFactories;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *hostNameFactories;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)actionForAddition:(id)arg1;
- (id)actionForURL:(id)arg1;
- (id)additionFactories;
- (id)hostNameFactories;
- (id)init;
- (void)registerFactory:(id)arg1 URLHost:(id)arg2;
- (void)registerFactory:(id)arg1 additionType:(Class)arg2;

@end
