/* made by EzioChiu.
 */

@protocol CPLAbstractObject <NSObject>

@required

+ (Protocol *)platformImplementationProtocol;

- (CPLPlatformObject *)platformObject;

@end
