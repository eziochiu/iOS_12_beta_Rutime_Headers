/* made by EzioChiu.
 */

@protocol AVReencodedVideoSettingsForFig

@required

- (unsigned int)videoCodecType;
- (NSDictionary *)videoCompressionProperties;
- (NSDictionary *)videoEncoderSpecification;

@end
