/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UISiriStreamingManager : NSObject <CABehaviorDelegate> {
    unsigned long long  _firstIndexToRemoveAfterLineChangeClearingAnimation;
    UIView * _siriItemView;
    struct { 
        unsigned int isPerformingLineChangeClearingAnimation : 1; 
        unsigned int commitResultsAfterDynamicsFinish : 1; 
        unsigned int waitingForDynamicsBehaviorToStop : 1; 
        unsigned int didFinalize : 1; 
        unsigned int didCleanUp : 1; 
    }  _ssmFlags;
    NSLayoutManager * _streamingLayoutManager;
    NSTextContainer * _streamingTextContainer;
    NSTextStorage * _streamingTextStorage;
    UITextView * _textView;
    NSMutableArray * _wordTokens;
    NSMutableArray * _words;
    NSArray * _wordsToSetAfterAnimations;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSLayoutManager *streamingLayoutManager;
@property (nonatomic, readonly) NSTextContainer *streamingTextContainer;
@property (nonatomic, readonly) NSTextStorage *streamingTextStorage;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *words;

- (void).cxx_destruct;
- (void)_commitFinalResults;
- (void)animateText;
- (void)behaviorDidStop:(id)arg1;
- (void)commitFinalResults;
- (void)ensureCleanedUp;
- (id)initWithTextView:(id)arg1;
- (void)setWords:(id)arg1;
- (id)streamingLayoutManager;
- (id)streamingTextContainer;
- (id)streamingTextStorage;
- (id)words;

@end
