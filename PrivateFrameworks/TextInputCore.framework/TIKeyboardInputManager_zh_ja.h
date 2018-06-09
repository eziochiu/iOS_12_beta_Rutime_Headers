/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIKeyboardInputManager_zh_ja : TIKeyboardInputManager {
    NSArray * _clearedGeometryDataArray;
    NSArray * _clearedTouchDataArray;
    NSString * _currentClientIdentifier;
    NSString * _currentRecipientIdentifier;
    NSMutableArray * _geometryDataArray;
    bool  _hasBackspacedIntoInputString;
    bool  _hasCommittedPartialCandidate;
    int  _lastCommittedCandidateType;
    NSMutableArray * _touchDataArray;
    NSMutableDictionary * _touchDownEvents;
    NSMutableDictionary * _touchUpEvents;
    TIWordSearch * _wordSearch;
    TIWordSearchCandidateResultSet * _wordSearchCandidateResultSet;
}

@property (nonatomic, retain) NSArray *clearedGeometryDataArray;
@property (nonatomic, retain) NSArray *clearedTouchDataArray;
@property (nonatomic, copy) NSString *currentClientIdentifier;
@property (nonatomic, copy) NSString *currentRecipientIdentifier;
@property (nonatomic, readonly) NSMutableArray *geometryDataArray;
@property (nonatomic) bool hasBackspacedIntoInputString;
@property (nonatomic) bool hasCommittedPartialCandidate;
@property (nonatomic) int lastCommittedCandidateType;
@property (nonatomic, readonly) struct __Mecabra { }*mecabra;
@property (nonatomic, readonly) bool supportsPerRecipientLearning;
@property (nonatomic, readonly) NSMutableArray *touchDataArray;
@property (nonatomic, readonly) NSMutableDictionary *touchDownEvents;
@property (nonatomic, readonly) NSMutableDictionary *touchUpEvents;
@property (nonatomic, readonly) NSCharacterSet *validCharacterSetForAutocorrection;
@property (nonatomic, readonly) TIWordSearch *wordSearch;
@property (nonatomic, retain) TIWordSearchCandidateResultSet *wordSearchCandidateResultSet;

+ (id)dummyGeometryData;
+ (id)dummyTouchData;
+ (id)initializedClients;
+ (id)offlineLearningHandleForInputMode:(id)arg1;
+ (Class)wordSearchClass;

- (void).cxx_destruct;
- (id)adaptationContextReadingForReanalysisString:(id)arg1 fromRecentlyCommittedCandidates:(id)arg2;
- (void)addProactiveTriggers:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })analysisStringRange;
- (unsigned long long)autoquoteType;
- (id)candidateResultSetFromWordSearchCandidateResultSet:(id)arg1;
- (void)clearInput;
- (id)clearedGeometryDataArray;
- (id)clearedTouchDataArray;
- (id)currentClientIdentifier;
- (id)currentRecipientIdentifier;
- (void)dealloc;
- (void)deleteFromInputWithContext:(id)arg1;
- (id)geometryDataArray;
- (id)geometryModelData;
- (id)handleAcceptedCandidate:(id)arg1 keyboardState:(id)arg2;
- (id)handleKeyboardInput:(id)arg1;
- (void)handlePerformBackgroundMaintenanceNotification;
- (bool)hasBackspacedIntoInputString;
- (bool)hasCommittedPartialCandidate;
- (void)incrementUsageTrackingKeysForDeleteFromInput;
- (id)initWithConfig:(id)arg1;
- (id)inputsToReject;
- (void)insertDummyGeometryDataAtIndex:(unsigned long long)arg1;
- (void)insertDummyTouchDataAtIndex:(unsigned long long)arg1;
- (long long)keyHitTest:(id)arg1;
- (int)lastCommittedCandidateType;
- (void)logAllCandidates;
- (void)logCommittedCandidate:(id)arg1 partial:(bool)arg2;
- (void)logDocumentContext;
- (void)logInputString;
- (struct __Mecabra { }*)mecabra;
- (void*)mecabraCandidateRefFromCandidate:(id)arg1;
- (int)mecabraTextContentTypeFromTITextContentType:(id)arg1;
- (bool)needsTouchEvents;
- (void)padGeometryForInput:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)restoreGeometryForInput:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)resume;
- (void)saveGeometryForInput:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)savePartialGeometryData;
- (void)saveTouchDataForEvent:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setClearedGeometryDataArray:(id)arg1;
- (void)setClearedTouchDataArray:(id)arg1;
- (void)setCurrentClientIdentifier:(id)arg1;
- (void)setCurrentRecipientIdentifier:(id)arg1;
- (void)setHasBackspacedIntoInputString:(bool)arg1;
- (void)setHasCommittedPartialCandidate:(bool)arg1;
- (void)setLanguageModelAdaptationContext;
- (void)setLastCommittedCandidateType:(int)arg1;
- (void)setWordSearchCandidateResultSet:(id)arg1;
- (bool)shouldUpdateLanguageModel;
- (void)storeLanguageModelDynamicDataIncludingCache;
- (bool)supportsPerRecipientLearning;
- (void)suspend;
- (void)syncToKeyboardState:(id)arg1 from:(id)arg2 afterContextChange:(bool)arg3;
- (id)touchDataArray;
- (id)touchDataForPathIndex:(long long)arg1;
- (id)touchDownEvents;
- (id)touchUpEvents;
- (void)updateDocumentContext;
- (bool)updateLanguageModelForKeyboardState;
- (void)updateProactiveCandidatesForCandidateResultSet:(id)arg1 withInput:(id)arg2;
- (void)updateUsageStatisticsForCandidate:(id)arg1 isPartial:(bool)arg2;
- (id)validCharacterSetForAutocorrection;
- (id)wordSearch;
- (id)wordSearchCandidateResultSet;
- (id)wordSeparator;

@end
