/* made by EzioChiu.
 */

@protocol PMLClassifierModelProtocol <NSObject>

@required

- (bool)classify:(PMLSparseVector *)arg1;

@end
