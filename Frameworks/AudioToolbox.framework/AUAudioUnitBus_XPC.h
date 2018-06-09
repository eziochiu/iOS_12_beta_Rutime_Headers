/* made by EzioChiu
   Image: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
 */

@interface AUAudioUnitBus_XPC : AUAudioUnitBus <NSSecureCoding> {
    AUAudioUnit_XH * _audioUnit;
    unsigned int  _element;
    AVAudioFormat * _format;
    <AUAudioUnitXPCProtocol> * _remoteAU;
    bool  _removingObserverWithContext;
    unsigned int  _scope;
    NSArray * _supportedChannelLayoutTags;
}

+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)format;
- (id)initWithCoder:(id)arg1;
- (bool)isEnabled;
- (void)propertyChanged:(id)arg1;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3;
- (void)setEnabled:(bool)arg1;
- (bool)setFormat:(id)arg1 error:(id*)arg2;

@end
