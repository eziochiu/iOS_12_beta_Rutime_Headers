/* made by EzioChiu.
 */

@protocol SYStateLoggable <NSObject>

@required

- (PBCodable *)stateForLogging;

@end
