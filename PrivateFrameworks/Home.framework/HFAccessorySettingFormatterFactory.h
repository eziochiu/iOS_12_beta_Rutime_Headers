/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFAccessorySettingFormatterFactory : NSObject {
    NSMutableDictionary * _formattersForKey;
}

@property (nonatomic, retain) NSMutableDictionary *formattersForKey;

+ (id)_siriOutputVoiceFormatter;
+ (id)_siriPersonalRequestsFormatter;
+ (id)_siriRecognitionLanguageFormatter;
+ (id)defaultFactory;

- (void).cxx_destruct;
- (id)_buildFormatterForKey:(id)arg1;
- (id)formatterForKey:(id)arg1;
- (id)formatterForKey:(id)arg1 copy:(bool)arg2;
- (id)formattersForKey;
- (id)init;
- (void)setFormattersForKey:(id)arg1;

@end
