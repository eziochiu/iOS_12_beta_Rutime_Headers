/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPBundleIdResolver : NSObject {
    NSString * _exePath;
    _PASLock * _lock;
}

- (void).cxx_destruct;
- (id)bundleIdentifierOrProcessName:(bool*)arg1;
- (id)initWithProcessIdentifier:(int)arg1;

@end
