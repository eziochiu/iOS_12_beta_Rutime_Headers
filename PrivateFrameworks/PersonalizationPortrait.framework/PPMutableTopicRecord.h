/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

@interface PPMutableTopicRecord : PPTopicRecord

@property (nonatomic) unsigned long long algorithm;
@property (nonatomic) double decayRate;
@property (nonatomic) unsigned long long extractionAssetVersion;
@property (nonatomic, retain) NSString *extractionOsBuild;
@property (nonatomic) double initialScore;
@property (nonatomic) bool isLocal;
@property (nonatomic, retain) PPSource *source;
@property (nonatomic, retain) PPTopic *topic;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setAlgorithm:(unsigned long long)arg1;
- (void)setDecayRate:(double)arg1;
- (void)setExtractionAssetVersion:(unsigned long long)arg1;
- (void)setExtractionOsBuild:(id)arg1;
- (void)setInitialScore:(double)arg1;
- (void)setIsLocal:(bool)arg1;
- (void)setSource:(id)arg1;
- (void)setTopic:(id)arg1;

@end