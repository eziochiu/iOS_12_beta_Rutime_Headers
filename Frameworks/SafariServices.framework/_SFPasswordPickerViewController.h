/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFPasswordPickerViewController : WBUPasswordPickerViewController <_SFPasswordIconControllerDelegate> {
    _SFPasswordIconController * _iconController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)backgroundColorForDomain:(id)arg1;
- (void)iconDidUpdateForDomain:(id)arg1 iconController:(id)arg2;
- (id)iconForDomain:(id)arg1;
- (id)initWithPrompt:(id)arg1 forUserNamesOnly:(bool)arg2 appNames:(id)arg3 appID:(id)arg4 matchedSites:(id)arg5 urlString:(id)arg6 minimumNumberOfCredentialsToShowLikelyMatchesSection:(long long)arg7 shouldDismissOnCompletion:(bool)arg8 shouldShowIcons:(bool)arg9 completionHandler:(id /* block */)arg10;
- (void)viewWillDisappear:(bool)arg1;

@end
