/* made by EzioChiu.
 */

@protocol ACUIAccountOperationsDelegate <NSObject>

@required

- (ACDataclassAction *)operationsHelper:(ACUIAccountOperationsHelper *)arg1 desiredDataclassActionFromPicker:(ACUIDataclassActionPicker *)arg2;
- (void)operationsHelper:(ACUIAccountOperationsHelper *)arg1 didRemoveAccount:(ACAccount *)arg2 withSuccess:(bool)arg3 error:(NSError *)arg4;
- (void)operationsHelper:(ACUIAccountOperationsHelper *)arg1 didSaveAccount:(ACAccount *)arg2 withSuccess:(bool)arg3 error:(NSError *)arg4;
- (void)operationsHelper:(ACUIAccountOperationsHelper *)arg1 willRemoveAccount:(ACAccount *)arg2;
- (void)operationsHelper:(ACUIAccountOperationsHelper *)arg1 willSaveAccount:(ACAccount *)arg2;

@optional

- (bool)operationsHelper:(ACUIAccountOperationsHelper *)arg1 shouldRemoveAccount:(ACAccount *)arg2;
- (long long)operationsHelper:(ACUIAccountOperationsHelper *)arg1 shouldRemoveOrDisableAccount:(ACAccount *)arg2;

@end
