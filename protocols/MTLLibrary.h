/* made by EzioChiu.
 */

@protocol MTLLibrary <NSObject>

@required

- (<MTLDevice> *)device;
- (NSArray *)functionNames;
- (NSString *)label;
- (<MTLFunction> *)newFunctionWithName:(NSString *)arg1;
- (void)newFunctionWithName:(void *)arg1 constantValues:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSString *, MTLFunctionConstantValues *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <MTLFunction> *, NSError *, void*
- (<MTLFunction> *)newFunctionWithName:(NSString *)arg1 constantValues:(MTLFunctionConstantValues *)arg2 error:(id*)arg3;
- (void)setLabel:(NSString *)arg1;

@end
