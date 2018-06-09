/* made by EzioChiu.
 */

@protocol CPMapTemplateProviding <CPBaseTemplateProviding>

@required

- (void)dismissNavigationAlertAnimated:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)hostSetMapButtons:(NSArray *)arg1;
- (void)hostSetPanInterfaceVisible:(bool)arg1 animated:(bool)arg2;
- (void)hostStartNavigationSessionForTrip:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: CPTrip *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <CPNavigationSessionProviding> *, void*
- (void)hostUpdateTravelEstimates:(CPTravelEstimates *)arg1 forTripIdentifier:(NSUUID *)arg2;
- (void)setHostAutoHidesNavigationBar:(bool)arg1;
- (void)setHostHidesButtonsWithNavigationBar:(bool)arg1;
- (void)setHostTripPreviews:(NSArray *)arg1;
- (void)setMapButton:(NSUUID *)arg1 focusedImage:(UIImage *)arg2;
- (void)setMapButton:(NSUUID *)arg1 hidden:(bool)arg2;
- (void)setMapButton:(NSUUID *)arg1 image:(UIImage *)arg2;
- (void)showNavigationAlert:(CPNavigationAlert *)arg1 animated:(bool)arg2;

@end
