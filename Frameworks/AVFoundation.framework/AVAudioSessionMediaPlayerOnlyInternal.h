/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAudioSessionMediaPlayerOnlyInternal : NSObject {
    NSDictionary * activationContext;
    NSString * category;
    <AVAudioSessionDelegateMediaPlayerOnly> * delegate;
    struct OpaqueFigPlayer { } * figPlayer;
    bool  isActive;
    bool  isAppAudioSession;
    NSString * mode;
    bool  usingLongFormAudio;
    AVWeakReference * weakReference;
}

@end