/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFSiriWordTimingPlayer : NSObject {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    unsigned int  _flags;
    double  _startTime;
    NSString * _text;
    NSObject<OS_dispatch_source> * _timer;
    id /* block */  _wordHandler;
    unsigned long long  _wordIndex;
    SFSiriWordTimingInfo * _wordInfo;
    NSArray * _wordTimings;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) unsigned int flags;
@property (nonatomic) double startTime;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) id /* block */ wordHandler;
@property (nonatomic, copy) NSArray *wordTimings;

- (void).cxx_destruct;
- (void)_processNextWord;
- (void)_processWord;
- (void)activate;
- (id)dispatchQueue;
- (unsigned int)flags;
- (id)init;
- (void)invalidate;
- (void)setDispatchQueue:(id)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setStartTime:(double)arg1;
- (void)setText:(id)arg1;
- (void)setWordHandler:(id /* block */)arg1;
- (void)setWordTimings:(id)arg1;
- (double)startTime;
- (id)text;
- (id /* block */)wordHandler;
- (id)wordTimings;

@end
