/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIFocusSoundPool : NSObject {
    unsigned int  _originalSystemSoundID;
    NSArray * _queue;
    unsigned long long  _queueIndex;
    NSURL * _soundFileURL;
}

- (void).cxx_destruct;
- (id)initWithSoundFileURL:(id)arg1;
- (id)initWithSystemSoundID:(unsigned int)arg1;
- (unsigned int)playableSystemSoundID;

@end
