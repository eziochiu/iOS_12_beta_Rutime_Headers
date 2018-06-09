/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPLibraryKeepLocalStatusObserverConfiguration : NSObject {
    long long  _enableState;
    MPModelObject * _identifyingModelObject;
}

@property (nonatomic) long long enableState;
@property (nonatomic, retain) MPModelObject *identifyingModelObject;

- (void).cxx_destruct;
- (long long)enableState;
- (id)identifyingModelObject;
- (void)setEnableState:(long long)arg1;
- (void)setIdentifyingModelObject:(id)arg1;

@end
