/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

@interface NightShiftDisplayWrapper : NSObject <NightShiftSupportProtocol> {
    struct __Display { } * _display;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)copyPreferenceForKey:(id)arg1 user:(id)arg2;
- (void)dealloc;
- (id)initWithDisplay:(struct __Display { }*)arg1;
- (void)setNightShiftFactorDictionary:(id)arg1;
- (void)setPreference:(id)arg1 forKey:(id)arg2 user:(id)arg3;

@end
