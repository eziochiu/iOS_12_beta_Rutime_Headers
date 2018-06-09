/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIWordSearchCandidateResultSet : NSObject <NSCopying> {
    NSString * _autoconvertedCandidateString;
    NSArray * _autoconvertedCandidates;
    NSString * _autoconvertedInputString;
    bool  _empty;
    NSArray * _initiallyHiddenCandidates;
    NSMutableDictionary * _mutableCandidateRefsDictionary;
    NSMutableArray * _mutableCandidates;
    NSMutableArray * _mutableProactiveTriggers;
    NSArray * _proactiveCandidates;
    unsigned long long  _selectedHiddenCandidateIndex;
}

@property (nonatomic, retain) NSString *autoconvertedCandidateString;
@property (nonatomic, copy) NSArray *autoconvertedCandidates;
@property (nonatomic, retain) NSString *autoconvertedInputString;
@property (nonatomic, readonly) NSDictionary *candidateRefsDictionary;
@property (nonatomic, readonly) NSArray *candidates;
@property (getter=isEmpty, nonatomic) bool empty;
@property (nonatomic, copy) NSArray *initiallyHiddenCandidates;
@property (nonatomic, retain) NSMutableDictionary *mutableCandidateRefsDictionary;
@property (nonatomic, retain) NSMutableArray *mutableCandidates;
@property (nonatomic, readonly) NSMutableArray *mutableProactiveTriggers;
@property (nonatomic, retain) NSArray *proactiveCandidates;
@property (nonatomic, readonly) NSArray *proactiveTriggers;
@property (nonatomic) unsigned long long selectedHiddenCandidateIndex;

+ (id)emptySet;

- (void).cxx_destruct;
- (void)addCandidates:(id)arg1 candidateRefsDictionary:(id)arg2;
- (void)addMecabraCandidate:(id)arg1 mecabraCandidateRef:(void*)arg2;
- (void)addMecabraFacemarkCandidate:(void*)arg1 forInput:(id)arg2;
- (void)addMecabraProactiveCandidate:(void*)arg1 triggerSourceType:(unsigned char)arg2;
- (void)addSyntheticMecabraCandidateWithSurface:(id)arg1 input:(id)arg2;
- (void)addSyntheticMecabraCandidateWithSurface:(id)arg1 input:(id)arg2 isExtension:(bool)arg3;
- (void)addSyntheticMecabraCandidateWithSurface:(id)arg1 input:(id)arg2 isExtension:(bool)arg3 deleteCount:(unsigned long long)arg4;
- (void)addSyntheticMecabraCandidateWithSurface:(id)arg1 input:(id)arg2 isExtension:(bool)arg3 deleteCount:(unsigned long long)arg4 cursorMovement:(long long)arg5;
- (void)addSyntheticMecabraCandidateWithSurface:(id)arg1 input:(id)arg2 isExtension:(bool)arg3 deleteCount:(unsigned long long)arg4 cursorMovement:(long long)arg5 annotation:(id)arg6;
- (void)addSyntheticMecabraProactiveCandidate:(id)arg1 triggerSourceType:(unsigned char)arg2;
- (id)autoconvertedCandidateString;
- (id)autoconvertedCandidates;
- (id)autoconvertedInputString;
- (id)candidateRefsDictionary;
- (id)candidates;
- (void)clearProactiveTriggers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithCandidates:(id)arg1 candidateRefsDictionary:(id)arg2;
- (id)initWithCandidates:(id)arg1 candidateRefsDictionary:(id)arg2 initiallyHiddenCandidates:(id)arg3 selectedHiddenCandidateIndex:(unsigned long long)arg4;
- (id)initiallyHiddenCandidates;
- (void)insertMecabraCandidate:(id)arg1 mecabraCandidateRef:(void*)arg2 atIndex:(unsigned long long)arg3;
- (void)insertSyntheticMecabraCandidateWithSurface:(id)arg1 input:(id)arg2 atIndex:(unsigned long long)arg3;
- (bool)isEmpty;
- (void)moveCandidate:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (id)mutableCandidateRefsDictionary;
- (id)mutableCandidates;
- (id)mutableProactiveTriggers;
- (id)proactiveCandidates;
- (id)proactiveTriggers;
- (unsigned long long)selectedHiddenCandidateIndex;
- (void)setAutoconvertedCandidateString:(id)arg1;
- (void)setAutoconvertedCandidates:(id)arg1;
- (void)setAutoconvertedInputString:(id)arg1;
- (void)setAutoconvertedMecabraCandidates:(id)arg1 candidateRefsDictionary:(id)arg2;
- (void)setEmpty:(bool)arg1;
- (void)setInitiallyHiddenCandidates:(id)arg1;
- (void)setMutableCandidateRefsDictionary:(id)arg1;
- (void)setMutableCandidates:(id)arg1;
- (void)setProactiveCandidates:(id)arg1;
- (void)setSelectedHiddenCandidateIndex:(unsigned long long)arg1;

@end
