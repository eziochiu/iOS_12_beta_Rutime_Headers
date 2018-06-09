/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

@interface VCPBLocalIntentDefinition : VCPBIntentDefinition {
    LSBundleProxy * _bundleProxy;
    bool  _filesLoaded;
}

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithAppBundleID:(id)arg1;
- (id)initWithBundleProxy:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)loadAllFiles;
- (void)unloadFiles;

@end
