/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTDrillDownRow : PTSRow {
    NSString * _childKeyPath;
    PTSettings * _childSettings;
}

@property (nonatomic, readonly) NSString *childKeyPath;

// Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools

+ (id)rowWithTitle:(id)arg1 childSettingsKeyPath:(id)arg2;
+ (id)rowWithTitleKeyPath:(id)arg1 childSettingsKeyPath:(id)arg2;

- (void).cxx_destruct;
- (id)childKeyPath;
- (void)dealloc;
- (id)initWithChildKeyPath:(id)arg1;
- (void)setSettings:(id)arg1;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (id)value;

// Image: /System/Library/PrivateFrameworks/PrototypeToolsUI.framework/PrototypeToolsUI

- (id)defaultUIAction;
- (Class)tableViewCellClass;

@end
