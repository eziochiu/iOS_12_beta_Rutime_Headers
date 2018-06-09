/* made by EzioChiu
   Image: /System/Library/Frameworks/CarPlay.framework/CarPlay
 */

@interface CPListTemplate : CPTemplate <CPBarButtonProviding, CPListClientTemplateDelegate> {
    <CPListTemplateDelegate> * _delegate;
    NSArray * _sections;
    NSString * _title;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CPListTemplateDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *leadingNavigationBarButtons;
@property (nonatomic, readonly, copy) NSArray *sections;
@property (readonly) Class superclass;
@property (nonatomic, retain) <CPListTemplateProviding> *templateProvider;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) NSArray *trailingNavigationBarButtons;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSections:(id)arg1;
- (void)listTemplate:(id)arg1 didSelectListItem:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)sections;
- (void)setDelegate:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)updateSections:(id)arg1;

@end
