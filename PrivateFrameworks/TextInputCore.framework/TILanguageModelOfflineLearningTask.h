/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TILanguageModelOfflineLearningTask : NSObject {
    bool  _cancelled;
    NSString * _clientIdentifier;
    TILanguageModelOfflineLearningHandle * _handleForLanguageLikelihood;
    NSMutableDictionary * _handles;
    bool  _oneTimeTask;
}

@property (getter=isCancelled, nonatomic) bool cancelled;
@property (nonatomic, readonly) NSString *clientIdentifier;
@property (nonatomic, readonly) <TILinguisticDataSource> *dataSource;
@property (nonatomic, readonly) NSSet *forwardedMessageSeparators;
@property (nonatomic, readonly) TILanguageModelOfflineLearningHandle *handleForLanguageLikelihood;
@property (nonatomic, readonly) NSMutableDictionary *handles;
@property (nonatomic, readonly) NSCharacterSet *linePaddingCharacters;
@property (nonatomic, readonly) bool oneTimeTask;

+ (id)dataSourceForTask;
+ (id)taskWithClientIdentifier:(id)arg1 oneTimeTask:(bool)arg2;

- (void).cxx_destruct;
- (id)clientIdentifier;
- (id)dataSource;
- (void)didFinishLearning;
- (void)enumerateHandlesForLanguage:(id)arg1 withBlock:(id /* block */)arg2;
- (id)forwardedMessageSeparators;
- (id)handleForLanguage:(id)arg1;
- (id)handleForLanguageLikelihood;
- (id)handles;
- (bool)incrementUsageCountsForMessages:(id)arg1 forLanguage:(id)arg2 adaptationContext:(id)arg3;
- (bool)incrementUsageCountsForMessages:(id)arg1 withHandle:(id)arg2;
- (id)initWithClientIdentifier:(id)arg1 oneTimeTask:(bool)arg2;
- (bool)isCancelled;
- (id)linePaddingCharacters;
- (bool)oneTimeTask;
- (void)setAdaptationContext:(id)arg1 onHandle:(id)arg2;
- (void)setCancelled:(bool)arg1;

@end