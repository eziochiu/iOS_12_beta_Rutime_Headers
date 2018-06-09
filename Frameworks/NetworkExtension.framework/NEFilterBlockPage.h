/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEFilterBlockPage : NSObject {
    NSString * _formActionURL;
    NSString * _organization;
    NSURL * _pageTemplateURL;
    NSString * _remediationButtonText;
    NSString * _unblockStyle;
    NSString * _userURL;
}

@property (copy) NSString *formActionURL;
@property (copy) NSString *organization;
@property (readonly) NSURL *pageTemplateURL;
@property (copy) NSString *remediationButtonText;
@property (copy) NSString *unblockStyle;
@property (copy) NSString *userURL;

- (void).cxx_destruct;
- (id)_blockPage;
- (id)_css;
- (id)formActionURL;
- (id)init;
- (id)organization;
- (id)page;
- (id)pageTemplateURL;
- (id)remediationButtonText;
- (void)setFormActionURL:(id)arg1;
- (void)setOrganization:(id)arg1;
- (void)setRemediationButtonText:(id)arg1;
- (void)setUnblockStyle:(id)arg1;
- (void)setUserURL:(id)arg1;
- (id)unblockStyle;
- (id)userURL;

@end
