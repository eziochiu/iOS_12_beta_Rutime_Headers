/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

@interface MCCertificateSummaryController : PSListController {
    bool  _backButtonWasHidden;
    UITableViewCell * _configBottom;
    MCDetailsHeaderCell * _configHeader;
    MCDetailsDescriptionTableCell * _configMiddle;
    NSString * _displayName;
    NSDate * _expiration;
    NSString * _organizationName;
    NSArray * _properties;
    NSString * _purpose;
    struct __SecTrust { } * _trust;
}

+ (id)_dateFormatter;

- (void).cxx_destruct;
- (void)_setTrust:(struct __SecTrust { }*)arg1;
- (id)_valueAtPath:(id)arg1;
- (void)actionButtonPressed:(id)arg1;
- (void)dealloc;
- (void)hideActionButton;
- (id)specifiers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;

@end
