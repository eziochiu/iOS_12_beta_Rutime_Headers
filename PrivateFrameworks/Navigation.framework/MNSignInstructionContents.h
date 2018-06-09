/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNSignInstructionContents : MNListInstructionContents <MNInstructionContents> {
    NSArray * _continueFormats;
    NSArray * _maneuverFormats;
    NSArray * _mergeFormats;
}

@property (nonatomic, readonly) long long context;
@property (nonatomic, retain) NSArray *continueFormats;
@property (nonatomic, readonly) bool hasServerContent;
@property (nonatomic, retain) NSArray *maneuverFormats;
@property (nonatomic, retain) NSArray *mergeFormats;
@property (nonatomic, retain) NSString *roadName;
@property (nonatomic) bool suppressFallback;
@property (nonatomic) bool suppressNames;

+ (id)contentsWithStep:(id)arg1 transportType:(int)arg2 destination:(id)arg3;

- (void).cxx_destruct;
- (id)_instructionsForFormats:(id)arg1;
- (void)_populateFromStep:(id)arg1;
- (long long)context;
- (id)continueFormats;
- (id)description;
- (bool)hasServerContent;
- (id)instructionForStage:(unsigned long long)arg1 distance:(double)arg2;
- (id)instructionWithShorterAlternatives;
- (id)maneuverFormats;
- (id)mergeFormats;
- (void)setContinueFormats:(id)arg1;
- (void)setManeuverFormats:(id)arg1;
- (void)setMergeFormats:(id)arg1;

@end
