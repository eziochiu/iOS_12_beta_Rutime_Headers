/* made by EzioChiu.
 */

@protocol _SUICEditScriptData <NSObject>

@required

+ (<_SUICEditScriptData> *)EditScriptDataWithArray:(NSArray *)arg1;
+ (<_SUICEditScriptData> *)EditScriptDataWithString:(NSString *)arg1 chunkSize:(long long)arg2;

- (long long)characterIndexForItem:(long long)arg1;
- (long long)indexOfFirstDifferenceWithOtherData:(id <_SUICEditScriptData>)arg1 shouldReverseIterate:(bool)arg2 fallsOnWordBoundary:(bool*)arg3;
- (long long)length;
- (long long)lengthOfItem:(long long)arg1;
- (NSString *)stringAtIndex:(long long)arg1;
- (NSString *)stringValue;

@end
