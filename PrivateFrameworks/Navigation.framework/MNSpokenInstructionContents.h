/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNSpokenInstructionContents : MNListInstructionContents <MNInstructionContents> {
    <GEOServerFormattedString> * _continueInstructionFormat;
    NSArray * _executionInstructionFormats;
    <GEOServerFormattedString> * _initialInstructionFormat;
    bool  _isSecondary;
    struct { 
        long long context; 
        double distance; 
        bool usePrimaryName; 
        bool useSecondaryName; 
        bool useDistanceForSecondary; 
        bool useContinueForSecondary; 
        int numPrimarySigns; 
        int numSecondarySigns; 
    }  _options;
    <GEOServerFormattedString> * _prepareInstructionFormat;
    <GEOServerFormattedString> * _proceedInstructionFormat;
}

@property (nonatomic) long long context;
@property (nonatomic, retain) <GEOServerFormattedString> *continueInstructionFormat;
@property (nonatomic, retain) NSArray *executionInstructionFormats;
@property (nonatomic, readonly) bool hasServerContent;
@property (nonatomic, retain) <GEOServerFormattedString> *initialInstructionFormat;
@property (nonatomic, readonly) int numSignsWanted;
@property (nonatomic, retain) <GEOServerFormattedString> *prepareInstructionFormat;
@property (nonatomic, retain) <GEOServerFormattedString> *proceedInstructionFormat;
@property (nonatomic, retain) NSString *roadName;
@property (nonatomic) bool suppressFallback;
@property (nonatomic) bool suppressNames;

+ (id)contentsWithStep:(id)arg1 transportType:(int)arg2 destination:(id)arg3 options:(struct { long long x1; double x2; bool x3; bool x4; bool x5; bool x6; int x7; int x8; }*)arg4 isSecondary:(bool)arg5;

- (void).cxx_destruct;
- (id)_instructionsForFormats:(id)arg1 distance:(double)arg2;
- (void)_populateFromStep:(id)arg1;
- (long long)context;
- (id)continueInstructionFormat;
- (id)description;
- (id)executionInstructionFormats;
- (bool)hasServerContent;
- (id)init;
- (id)initialInstructionFormat;
- (id)instructionForStage:(unsigned long long)arg1 distance:(double)arg2;
- (id)instructionWithShorterAlternatives:(id*)arg1;
- (int)numSignsWanted;
- (id)prepareInstructionFormat;
- (id)proceedInstructionFormat;
- (void)setContext:(long long)arg1;
- (void)setContinueInstructionFormat:(id)arg1;
- (void)setExecutionInstructionFormats:(id)arg1;
- (void)setInitialInstructionFormat:(id)arg1;
- (void)setPrepareInstructionFormat:(id)arg1;
- (void)setProceedInstructionFormat:(id)arg1;

@end
