/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIKeyboardInputManagerLoaderSyncHelper : NSObject {
    id /* block */  _languageUpdated;
    NSMutableDictionary * _languages;
    NSMapTable * _pendingSaves;
}

@property (nonatomic, copy) id /* block */ languageUpdated;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)languagePulled:(id)arg1;
- (id /* block */)languageUpdated;
- (void)languagesChanged:(id)arg1;
- (void)noteObject:(id)arg1 forLanguage:(id)arg2;
- (void)setLanguageUpdated:(id /* block */)arg1;
- (bool)shouldCacheObject:(id)arg1;
- (void)willLoadLanguage:(id)arg1;

@end
