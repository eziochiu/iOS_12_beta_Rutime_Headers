/* made by EzioChiu
   Image: /System/Library/Frameworks/CarPlay.framework/CarPlay
 */

@interface CPTemplate : NSObject <CPBarButtonDelegate, CPBarButtonProviding, CPControlDelegate, CPTemplateDelegate, NSSecureCoding> {
    NSUUID * _identifier;
    NSMutableArray * _internalLeadingBarButtons;
    NSMutableArray * _internalTrailingBarButtons;
    <CPTemplateDelegate> * _templateDelegate;
    <CPBaseTemplateProviding> * _templateProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, retain) NSMutableArray *internalLeadingBarButtons;
@property (nonatomic, retain) NSMutableArray *internalTrailingBarButtons;
@property (nonatomic, retain) NSArray *leadingNavigationBarButtons;
@property (readonly) Class superclass;
@property (nonatomic) <CPTemplateDelegate> *templateDelegate;
@property (nonatomic, retain) <CPBaseTemplateProviding> *templateProvider;
@property (nonatomic, retain) NSArray *trailingNavigationBarButtons;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)barButton:(id)arg1 setImage:(id)arg2;
- (bool)barButton:(id)arg1 setTitle:(id)arg2;
- (bool)control:(id)arg1 setEnabled:(bool)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)handleActionForControlIdentifier:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)internalLeadingBarButtons;
- (id)internalTrailingBarButtons;
- (id)leadingNavigationBarButtons;
- (void)setInternalLeadingBarButtons:(id)arg1;
- (void)setInternalTrailingBarButtons:(id)arg1;
- (void)setLeadingNavigationBarButtons:(id)arg1;
- (void)setTemplateDelegate:(id)arg1;
- (void)setTemplateProvider:(id)arg1;
- (void)setTrailingNavigationBarButtons:(id)arg1;
- (id)templateDelegate;
- (void)templateDidAppear:(id)arg1 animated:(bool)arg2;
- (void)templateDidDisappear:(id)arg1 animated:(bool)arg2;
- (id)templateProvider;
- (void)templateWillAppear:(id)arg1 animated:(bool)arg2;
- (void)templateWillDisappear:(id)arg1 animated:(bool)arg2;
- (id)trailingNavigationBarButtons;

@end
