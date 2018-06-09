/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureInputPort : NSObject {
    AVCaptureInputPortInternal * _internal;
}

@property (nonatomic, readonly) struct OpaqueCMClock { }*clock;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, readonly) const struct opaqueCMFormatDescription { }*formatDescription;
@property (nonatomic, readonly) AVCaptureInput *input;
@property (nonatomic, readonly) NSString *mediaType;

+ (bool)automaticallyNotifiesObserversOfClock;
+ (id)portWithInput:(id)arg1 mediaType:(id)arg2 formatDescription:(struct opaqueCMFormatDescription { }*)arg3 enabled:(bool)arg4;

- (void)_setClock:(struct OpaqueCMClock { }*)arg1;
- (void)_setFormatDescription:(struct opaqueCMFormatDescription { }*)arg1;
- (void)bumpChangeSeed;
- (int)changeSeed;
- (struct OpaqueCMClock { }*)clock;
- (void)dealloc;
- (id)description;
- (id)figCaptureSourceConfigurationForSessionPreset:(id)arg1;
- (const struct opaqueCMFormatDescription { }*)formatDescription;
- (id)initWithInput:(id)arg1 mediaType:(id)arg2 formatDescription:(struct opaqueCMFormatDescription { }*)arg3 enabled:(bool)arg4;
- (id)input;
- (bool)isEnabled;
- (id)mediaType;
- (void)setEnabled:(bool)arg1;
- (void)setOwner:(id)arg1;
- (id)sourceID;
- (id)valueForUndefinedKey:(id)arg1;

@end
