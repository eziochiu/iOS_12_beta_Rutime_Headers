/* made by EzioChiu.
 */

@protocol MiroMemoryDebugCollectionViewControllerProtocol <NSObject>

@required

- (MiroAutoEditController *)autoEditController;
- (MiroMemory *)memory;
- (Project *)project;

@end
