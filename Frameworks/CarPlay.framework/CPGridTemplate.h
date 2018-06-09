/* made by EzioChiu
   Image: /System/Library/Frameworks/CarPlay.framework/CarPlay
 */

@interface CPGridTemplate : CPTemplate <CPBarButtonProviding, CPGridTemplateClientDelegate> {
    NSMutableArray * _buttons;
    NSArray * _gridButtons;
    <CPGridTemplateProviding> * _interfaceProvider;
    NSString * _title;
}

@property (nonatomic, readonly) NSArray *buttons;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *gridButtons;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <CPGridTemplateProviding> *interfaceProvider;
@property (nonatomic, retain) NSArray *leadingNavigationBarButtons;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, retain) NSArray *trailingNavigationBarButtons;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)buttons;
- (void)encodeWithCoder:(id)arg1;
- (id)gridButtons;
- (void)handleActionForControlIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 gridButtons:(id)arg2;
- (id)interfaceProvider;
- (void)setInterfaceProvider:(id)arg1;
- (id)title;

@end
