/* made by EzioChiu.
 */

@protocol FBUIProcess <FBSProcess>

@required

- (bool)isApplicationProcess;
- (bool)isExtensionProcess;
- (bool)isRunning;
- (bool)isSystemApplicationProcess;

@end
