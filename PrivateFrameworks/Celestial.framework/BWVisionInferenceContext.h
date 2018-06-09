/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWVisionInferenceContext : NSObject {
    VNSequenceRequestHandler * _sequenceRequestHandler;
}

@property (getter=isPrepared, nonatomic, readonly) bool prepared;
@property (nonatomic, readonly) VNSequenceRequestHandler *sequenceRequestHandler;

+ (void)initialize;

- (void)dealloc;
- (bool)isPrepared;
- (int)prepareForInference;
- (id)sequenceRequestHandler;

@end
