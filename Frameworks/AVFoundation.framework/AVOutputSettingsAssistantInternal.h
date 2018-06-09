/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVOutputSettingsAssistantInternal : NSObject {
    <AVOutputSettingsAssistantBaseSettingsProvider> * baseSettingsProvider;
    struct opaqueCMFormatDescription { } * sourceAudioFormat;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  sourceVideoAverageFrameDuration;
    struct opaqueCMFormatDescription { } * sourceVideoFormat;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  sourceVideoMinFrameDuration;
    <AVOutputSettingsAssistantVideoSettingsAdjuster> * videoSettingsAdjuster;
}

@end
