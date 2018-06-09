/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGNamedEntityContainer : NSObject <SGExternalEnrichment> {
    bool  _cloudSync;
    double  _decayRate;
    NSMutableArray * _entities;
    unsigned long long  _entityAlgorithm;
    PPSource * _source;
    unsigned long long  _topicAlgorithm;
    NSMutableArray * _topics;
}

@property (nonatomic) bool cloudSync;
@property (nonatomic) double decayRate;
@property (nonatomic, retain) NSMutableArray *entities;
@property (nonatomic) unsigned long long entityAlgorithm;
@property (nonatomic, retain) PPSource *source;
@property (nonatomic) unsigned long long topicAlgorithm;
@property (nonatomic, retain) NSMutableArray *topics;

- (void).cxx_destruct;
- (id)asyncWriteQueue;
- (bool)cloudSync;
- (double)decayRate;
- (id)entities;
- (unsigned long long)entityAlgorithm;
- (void)flushWrites;
- (void)setCloudSync:(bool)arg1;
- (void)setDecayRate:(double)arg1;
- (void)setEntities:(id)arg1;
- (void)setEntityAlgorithm:(unsigned long long)arg1;
- (void)setSource:(id)arg1;
- (void)setTopicAlgorithm:(unsigned long long)arg1;
- (void)setTopics:(id)arg1;
- (id)source;
- (unsigned long long)topicAlgorithm;
- (id)topics;
- (void)write;
- (void)writeSynchronous;

@end