/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPTopicTransform : NSObject {
    const float * _bias;
    NSData * _data;
    struct header_s { 
        unsigned int qidCount; 
        unsigned int topicCount; 
        unsigned int nonzeroCount; 
        unsigned int payloadLen; 
    }  _header;
    const float * _matrixElts;
    const unsigned int * _matrixIdxes;
    const char * _payloads;
    const unsigned int * _qids;
}

@property (nonatomic, readonly) unsigned long long outputTopicCount;

- (void).cxx_destruct;
- (void)addBias:(float*)arg1;
- (void)addTopicToBuffer:(float*)arg1 qid:(unsigned int)arg2 weight:(float)arg3;
- (void)halfSigmoid:(float*)arg1;
- (id)init;
- (id)initWithPath:(id)arg1;
- (unsigned long long)outputTopicCount;
- (id)payloadForTopic:(unsigned int)arg1;
- (void)scaleBuffer:(float*)arg1 withFactor:(float)arg2;
- (void)sigmoid:(float*)arg1;

@end
