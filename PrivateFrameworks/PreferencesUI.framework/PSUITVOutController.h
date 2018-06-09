/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUITVOutController : PSListController {
    PSUITVOutManager * _tvOutManager;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)handleTVOutChange;
- (id)init;
- (id)isWidescreen:(id)arg1;
- (void)setTVSignal:(id)arg1 specifier:(id)arg2;
- (void)setWidescreen:(id)arg1 specifier:(id)arg2;
- (id)specifiers;
- (id)tvSignal:(id)arg1;
- (void)writeValue:(struct __CFString { }*)arg1 forKey:(struct __CFString { }*)arg2;

@end
