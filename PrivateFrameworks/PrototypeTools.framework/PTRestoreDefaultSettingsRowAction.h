/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTRestoreDefaultSettingsRowAction : PTRowAction {
    NSString * _settingsKeyPath;
}

@property (nonatomic, readonly) NSString *settingsKeyPath;

+ (id)action;
+ (id)actionWithSettingsKeyPath:(id)arg1;

- (void).cxx_destruct;
- (id /* block */)defaultHandler;
- (id)settingsKeyPath;

@end
