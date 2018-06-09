/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIAccumulatingCandidateHandler : NSObject <TICandidateHandler> {
    id /* block */  _candidateHandler;
    TIAutocorrectionList * _candidates;
    unsigned long long  _status;
}

@property (nonatomic, readonly) bool asynchronous;
@property (nonatomic, readonly, copy) id /* block */ candidateHandler;
@property (nonatomic, retain) TIAutocorrectionList *candidates;

- (void).cxx_destruct;
- (bool)asynchronous;
- (id /* block */)candidateHandler;
- (id)candidates;
- (void)close;
- (void)dealloc;
- (id)initWithHandlerBlock:(id /* block */)arg1;
- (void)open;
- (void)pushCandidates:(id)arg1;
- (void)setCandidates:(id)arg1;

@end
