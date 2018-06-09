/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TILanguageModelOfflineLearningHandleFavonius : TILanguageModelOfflineLearningHandle {
    struct shared_ptr<KB::LanguageModel> { 
        struct LanguageModel {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _currentModel;
    struct RefPtr<KB::DictionaryContainer> { 
        struct DictionaryContainer {} *m_ptr; 
    }  _dictionaries;
}

@property (nonatomic) struct shared_ptr<KB::LanguageModel> { struct LanguageModel {} *x1; struct __shared_weak_count {} *x2; } currentModel;
@property (nonatomic, readonly) struct RefPtr<KB::DictionaryContainer> { struct DictionaryContainer {} *x1; } dictionaries;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)adaptToParagraph:(id)arg1 timeStamp:(double)arg2 adaptationType:(int)arg3;
- (struct shared_ptr<KB::LanguageModel> { struct LanguageModel {} *x1; struct __shared_weak_count {} *x2; })currentModel;
- (struct RefPtr<KB::DictionaryContainer> { struct DictionaryContainer {} *x1; })dictionaries;
- (void)didFinishLearning;
- (id)initWithInputMode:(id)arg1;
- (void)load;
- (void)setCurrentModel:(struct shared_ptr<KB::LanguageModel> { struct LanguageModel {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)updateAdaptationContext:(id)arg1;

@end
