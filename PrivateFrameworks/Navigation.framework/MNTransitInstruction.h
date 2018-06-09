/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNTransitInstruction : NSObject {
    long long  _context;
    <GEOServerFormattedString> * _countStopsFormattedString;
    <GEOServerFormattedString> * _departureBarInstruction;
    NSArray * _majorFormattedInstruction;
    NSArray * _minorFormattedInstruction;
    NSArray * _tertiaryFormattedInstruction;
}

@property (nonatomic, readonly) long long context;
@property (nonatomic, retain) <GEOServerFormattedString> *countStopsFormattedString;
@property (nonatomic, retain) <GEOServerFormattedString> *departureBarInstruction;
@property (copy) NSArray *majorFormattedInstruction;
@property (copy) NSArray *minorFormattedInstruction;
@property (copy) NSArray *tertiaryFormattedInstruction;

+ (id)instructionForUncertainArrivalToStationStep:(id)arg1 context:(long long)arg2;

- (void).cxx_destruct;
- (void)_fillInInstructions;
- (long long)context;
- (id)countStopsFormattedString;
- (id)departureBarInstruction;
- (id)formattedInstructionForType:(long long)arg1;
- (id)initWithContext:(long long)arg1;
- (id)instructionSet;
- (id)instructionSetsForInstructionType:(long long)arg1;
- (id)majorFormattedInstruction;
- (id)minorFormattedInstruction;
- (struct NSDictionary { Class x1; }*)overridenInstructionsMapping;
- (void)refreshInstructionStrings;
- (void)setCountStopsFormattedString:(id)arg1;
- (void)setDepartureBarInstruction:(id)arg1;
- (void)setMajorFormattedInstruction:(id)arg1;
- (void)setMinorFormattedInstruction:(id)arg1;
- (void)setTertiaryFormattedInstruction:(id)arg1;
- (id)tertiaryFormattedInstruction;

@end
