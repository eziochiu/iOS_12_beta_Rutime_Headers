/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIWordSearchOperationGetCandidates : TIWordSearchOperation {
    SEL  _action;
    unsigned long long  _autocapitalizationType;
    NSArray * _geometryModelData;
    bool  _hardwareKeyboardMode;
    NSString * _inputString;
    TIMecabraIMLogger * _logger;
    bool  _predictionEnabled;
    bool  _reanalysisMode;
    TIWordSearchCandidateResultSet * _results;
    id  _target;
    TIWordSearch * _wordSearch;
}

@property (nonatomic, readonly) SEL action;
@property (nonatomic, readonly) unsigned long long autocapitalizationType;
@property (nonatomic, readonly) NSArray *geometryModelData;
@property (nonatomic, readonly) bool hardwareKeyboardMode;
@property (nonatomic, readonly) NSString *inputString;
@property (nonatomic, readonly) TIMecabraIMLogger *logger;
@property (nonatomic, readonly) bool predictionEnabled;
@property (nonatomic, readonly) bool reanalysisMode;
@property (nonatomic, retain) TIWordSearchCandidateResultSet *results;
@property (nonatomic, readonly) id target;
@property (retain) TIWordSearch *wordSearch;

- (void).cxx_destruct;
- (SEL)action;
- (unsigned long long)autocapitalizationType;
- (void)checkForCachedResults;
- (void)completeSearchOnMainThreadWithResults:(id)arg1;
- (void)dealloc;
- (id)geometryModelData;
- (bool)hardwareKeyboardMode;
- (id)initWithWordSearch:(id)arg1 inputString:(id)arg2 predictionEnabled:(bool)arg3 reanalysisMode:(bool)arg4 autocapitalizationType:(unsigned long long)arg5 target:(id)arg6 action:(SEL)arg7 geometryModelData:(id)arg8 hardwareKeyboardMode:(bool)arg9 logger:(id)arg10;
- (id)inputString;
- (id)logger;
- (void)perform;
- (bool)predictionEnabled;
- (bool)reanalysisMode;
- (id)results;
- (void)setResults:(id)arg1;
- (void)setWordSearch:(id)arg1;
- (id)target;
- (id)wordSearch;

@end
