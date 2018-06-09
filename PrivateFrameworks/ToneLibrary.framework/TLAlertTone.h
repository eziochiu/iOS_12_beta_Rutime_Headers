/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@interface TLAlertTone : NSObject {
    TLSystemSound * _actualSound;
    unsigned int  _actualSoundID;
    TLSystemSound * _previewSound;
    unsigned int  _previewSoundID;
    NSURL * _soundFileURL;
}

@property (nonatomic, readonly) TLSystemSound *actualSound;
@property (nonatomic, readonly) TLSystemSound *previewSound;
@property (nonatomic, readonly) NSURL *soundFileURL;

- (void).cxx_destruct;
- (id)actualSound;
- (id)initWithSoundFileURL:(id)arg1 actualSoundID:(unsigned int)arg2 previewSoundID:(unsigned int)arg3;
- (id)previewSound;
- (id)soundFileURL;

@end
