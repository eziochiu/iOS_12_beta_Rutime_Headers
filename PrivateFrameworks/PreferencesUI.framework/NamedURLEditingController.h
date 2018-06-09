/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface NamedURLEditingController : URLEditingController {
    PSUIWebRestrictionsController * _URLSaveController;
    bool  _saved;
}

@property (nonatomic, retain) PSUIWebRestrictionsController *URLSaveController;
@property (nonatomic) bool saved;

- (void).cxx_destruct;
- (id)URLSaveController;
- (id)controlledURL:(id)arg1;
- (id)controlledURLTitle:(id)arg1;
- (void)saveURL;
- (bool)saved;
- (void)setControlledURL:(id)arg1 specifier:(id)arg2;
- (void)setControlledURLTitle:(id)arg1 specifier:(id)arg2;
- (void)setSaved:(bool)arg1;
- (void)setURLSaveController:(id)arg1;
- (id)specifiers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)willResignActive;

@end
