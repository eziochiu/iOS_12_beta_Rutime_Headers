/* made by EzioChiu.
 */

@protocol TSPSplitableData

@required

- (unsigned long long)tsp_length;
- (void)tsp_splitDataWithMaxSize:(void *)arg1 subdataHandlerBlock:(void *)arg2; // needs 2 arg types, found 9: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, unsigned long long, bool*, void*

@end
