/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TILanguageModelLoader : NSObject {
    TILanguageModelAdaptationContext * _adaptationContext;
    NSString * _clientIdentifier;
    <_ICContactFetchingDelegate> * _contactFetchingDelegate;
    NSString * _dynamicResourcePath;
    TIInputMode * _inputMode;
    NSArray * _mobileAssets;
    struct shared_ptr<KB::LanguageModel> { 
        struct LanguageModel {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _model;
    NSString * _recipientIdentifier;
    NSArray * _staticResourcePaths;
    bool  _usesLinguisticContext;
}

@property (nonatomic, retain) TILanguageModelAdaptationContext *adaptationContext;
@property (nonatomic, retain) NSString *clientIdentifier;
@property (nonatomic) <_ICContactFetchingDelegate> *contactFetchingDelegate;
@property (nonatomic, readonly) NSString *dynamicResourcePath;
@property (nonatomic, readonly) TIInputMode *inputMode;
@property (nonatomic, readonly) NSArray *mobileAssets;
@property (nonatomic) struct shared_ptr<KB::LanguageModel> { struct LanguageModel {} *x1; struct __shared_weak_count {} *x2; } model;
@property (nonatomic, retain) NSString *recipientIdentifier;
@property (nonatomic, readonly) NSArray *staticResourcePaths;
@property (nonatomic, readonly) bool usesLinguisticContext;

+ (void)clearDynamicLearningCaches;
+ (void)clearDynamicResourcesAtPath:(id)arg1;
+ (void)contactStoreDidChange:(id)arg1;
+ (void)dropResourcesExcludingInputModes:(id)arg1 flushCache:(bool)arg2;
+ (void)flushDynamicLearningCaches;
+ (id)knownClients;
+ (struct shared_ptr<KB::LanguageModel> { struct LanguageModel {} *x1; struct __shared_weak_count {} *x2; })modelForLocale:(id)arg1 adaptationContext:(id)arg2 staticResourcePaths:(id)arg3 dynamicResourcePath:(id)arg4;
+ (void)performMaintenance;
+ (id)recipientRecords;
+ (void)resetClientAndRecipientCache;
+ (void)setAsynchronousLoad:(bool)arg1;
+ (void)setOfflineTrainingEnabled:(bool)arg1;
+ (id)sharedLanguageModelLoaderForInputMode:(id)arg1 dynamicResourcePath:(id)arg2 mobileAssets:(id)arg3 usesLinguisticContext:(bool)arg4;
+ (void)startObservingContactStore;
+ (struct shared_ptr<KB::LanguageModel> { struct LanguageModel {} *x1; struct __shared_weak_count {} *x2; })stubForLocale:(id)arg1 adaptationContext:(id)arg2 staticResourcePaths:(id)arg3 dynamicResourcePath:(id)arg4;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)adaptationContext;
- (void)clearDynamicLearningCaches;
- (id)clientIdentifier;
- (id)contactFetchingDelegate;
- (id)dynamicResourcePath;
- (void)findRecordsMatchingRecipient:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)flushDynamicLearningCaches;
- (id)initWithInputMode:(id)arg1 dynamicResourcePath:(id)arg2 mobileAssets:(id)arg3 usesLinguisticContext:(bool)arg4;
- (id)inputMode;
- (struct shared_ptr<KB::LanguageModel> { struct LanguageModel {} *x1; struct __shared_weak_count {} *x2; })languageModelForAdaptationContext:(id)arg1;
- (struct shared_ptr<KB::LanguageModel> { struct LanguageModel {} *x1; struct __shared_weak_count {} *x2; })lightweightLanguageModel;
- (void)lookupRecordForRecipientIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)mobileAssets;
- (struct shared_ptr<KB::LanguageModel> { struct LanguageModel {} *x1; struct __shared_weak_count {} *x2; })model;
- (struct shared_ptr<KB::LanguageModel> { struct LanguageModel {} *x1; struct __shared_weak_count {} *x2; })newLanguageModel;
- (void)performLearningIfNecessaryForClient:(id)arg1 withModel:(struct shared_ptr<KB::LanguageModel> { struct LanguageModel {} *x1; struct __shared_weak_count {} *x2; })arg2;
- (id)recipientIdentifier;
- (void)setAdaptationContext:(id)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setContactFetchingDelegate:(id)arg1;
- (void)setLanguageModelClientIdentifier:(id)arg1;
- (void)setLanguageModelRecipientIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)setModel:(struct shared_ptr<KB::LanguageModel> { struct LanguageModel {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setRecipientIdentifier:(id)arg1;
- (struct shared_ptr<KB::LanguageModel> { struct LanguageModel {} *x1; struct __shared_weak_count {} *x2; })sharedLanguageModelForClient:(id)arg1 withRecipient:(id)arg2;
- (struct shared_ptr<KB::LanguageModel> { struct LanguageModel {} *x1; struct __shared_weak_count {} *x2; })sharedLanguageModelForClient:(id)arg1 withRecipient:(id)arg2 completion:(id /* block */)arg3;
- (id)staticResourcePaths;
- (bool)usesLinguisticContext;

@end
