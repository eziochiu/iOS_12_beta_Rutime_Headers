/* made by EzioChiu
   Image: /usr/lib/libnfshared.dylib
 */

@interface NFPreferenceObserver : NSObject {
    id /* block */  _callback;
}

@property (copy) id /* block */ callback;

- (id /* block */)callback;
- (void)dealloc;
- (void)handlePreferencesChanged;
- (void)handleProfilesChanged;
- (void)setCallback:(id /* block */)arg1;
- (void)start;
- (void)stop;
- (void)updateDiagnosticLogging;

@end
