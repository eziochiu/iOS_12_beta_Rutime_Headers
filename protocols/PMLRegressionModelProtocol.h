/* made by EzioChiu.
 */

@protocol PMLRegressionModelProtocol <NSObject>

@required

- (float)predict:(PMLSparseVector *)arg1;

@end
