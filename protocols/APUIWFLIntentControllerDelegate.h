/* made by EzioChiu.
 */

@protocol APUIWFLIntentControllerDelegate <NSObject>

@required

- (void)intentController:(APUIWFLIntentController *)arg1 didFailWithError:(NSError *)arg2 forInteraction:(INInteraction *)arg3;
- (void)intentController:(APUIWFLIntentController *)arg1 didHandleInteraction:(INInteraction *)arg2;
- (void)intentController:(APUIWFLIntentController *)arg1 requiresConfirmationForIntent:(INIntent *)arg2 intentResponse:(INIntentResponse *)arg3;
- (void)intentController:(void *)arg1 requiresContinuingInAppForIntent:(void *)arg2 proceedHandler:(void *)arg3; // needs 3 arg types, found 8: APUIWFLIntentController *, INIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@optional

- (bool)intentController:(APUIWFLIntentController *)arg1 shouldRequireConfirmationForIntent:(INIntent *)arg2 intentResponse:(INIntentResponse *)arg3;

@end
