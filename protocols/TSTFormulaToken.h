/* made by EzioChiu.
 */

@protocol TSTFormulaToken

@required

- (TSCEFunctionArgumentSpec *)argumentSpec;
- (NSString *)string;
- (int)tokenType;

@end
