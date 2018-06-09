/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

@interface PRSModelFeedbackContext : NSObject {
    NSString * _l2ShadowVersion;
    NSString * _l2Version;
    float * _scores;
}

@property (nonatomic, retain) NSString *l2ShadowVersion;
@property (nonatomic, retain) NSString *l2Version;
@property (nonatomic) float*scores;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithScores:(float*)arg1 models:(id)arg2 shadowModels:(id)arg3;
- (id)l2ShadowVersion;
- (id)l2Version;
- (float*)scores;
- (void)setL2ShadowVersion:(id)arg1;
- (void)setL2Version:(id)arg1;
- (void)setScores:(float*)arg1;

@end
