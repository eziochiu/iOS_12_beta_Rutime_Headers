/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TILanguageModelOfflineLearningHandle : NSObject {
    TILanguageModelAdaptationContext * _currentAdaptationContext;
    TIInputMode * _inputMode;
    NSDate * _lastAdaptationDate;
    bool  _valid;
}

@property (nonatomic, copy) TILanguageModelAdaptationContext *currentAdaptationContext;
@property (nonatomic, readonly) TIInputMode *inputMode;
@property (nonatomic, copy) NSDate *lastAdaptationDate;
@property (getter=isValid, nonatomic) bool valid;

+ (id)handleForInputMode:(id)arg1;
+ (id)handleForLanguageLikelihood;

- (void).cxx_destruct;
- (void)adaptToParagraph:(id)arg1 timeStamp:(double)arg2 adaptationType:(int)arg3;
- (id)currentAdaptationContext;
- (void)didFinishLearning;
- (id)initWithInputMode:(id)arg1;
- (id)inputMode;
- (bool)isValid;
- (id)lastAdaptationDate;
- (void)load;
- (void)setCurrentAdaptationContext:(id)arg1;
- (void)setLastAdaptationDate:(id)arg1;
- (void)setValid:(bool)arg1;
- (void)updateAdaptationContext:(id)arg1;

@end
