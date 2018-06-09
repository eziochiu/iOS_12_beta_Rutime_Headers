/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLFacebookServiceSetupTableViewSection : MSCLSocialServiceSetupTableViewSection {
    long long  _displayState;
}

- (long long)_cellTypeForIndexPath:(id)arg1;
- (void)_openFacebookSettingsTitleKey:(id)arg1 messageKey:(id)arg2 parentViewController:(id)arg3;
- (void)_updateDisplayStateForce:(bool)arg1;
- (id)initWithService:(id)arg1 accountStore:(id)arg2;
- (id)performActionForIndexPath:(id)arg1 parentViewController:(id)arg2;
- (void)registerReusableCellsWithTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;

@end
