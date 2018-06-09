/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

@interface _EARAudioAnalytics : NSObject <NSCopying> {
    NSDictionary * _acousticFeatures;
    NSDictionary * _speechRecognitionFeatures;
}

@property (nonatomic, readonly, copy) NSDictionary *acousticFeatures;
@property (nonatomic, readonly, copy) NSDictionary *speechRecognitionFeatures;

- (void).cxx_destruct;
- (id)_initWithSpeechRecognitionFeatures:(id)arg1 acousticFeatures:(id)arg2;
- (id)acousticFeatures;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)speechRecognitionFeatures;

@end
