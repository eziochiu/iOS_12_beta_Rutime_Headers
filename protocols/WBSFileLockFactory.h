/* made by EzioChiu.
 */

@protocol WBSFileLockFactory <NSObject>

@required

- (<WBSFileLock> *)lockURL:(NSURL *)arg1 error:(id*)arg2;

@end
